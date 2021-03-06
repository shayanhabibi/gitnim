##[
avoid code duplication in CI pipelines.
For now, this is only used for openbsd, but there is a lot of other code
duplication that could be removed.

## usage
edit this file as needed and then re-generate via:
```
nim r tools/ci_generate.nim
```
]##

import std/strformat

proc genCIopenbsd(batch: int, num: int): string =
  result = fmt"""
## do not edit directly; auto-generated by `nim r tools/ci_generate.nim`

image: openbsd/latest
packages:
- gmake
- sqlite3
- node
- boehm-gc
- pcre
- sfml
- sdl2
- libffi
sources:
- https://github.com/nim-lang/Nim
environment:
  NIM_TESTAMENT_BATCH: "{batch}_{num}"
  CC: /usr/bin/clang
tasks:
- setup: |
    cd Nim
    git clone --depth 1 -q https://github.com/nim-lang/csources_v1.git csources
    gmake -C csources -j $(sysctl -n hw.ncpuonline)
    bin/nim c koch
    echo 'export PATH=$HOME/Nim/bin:$PATH' >> $HOME/.buildenv
- test: |
    cd Nim
    if ! ./koch runCI; then
      nim c -r tools/ci_testresults.nim
      exit 1
    fi
triggers:
- action: email
  condition: failure
  to: Andreas Rumpf <rumpf_a@web.de>
"""

proc main()=
  let num = 3
    # if you reduce this, make sure to remove files that shouldn't be generated,
    # or better, do the cleanup logic here e.g.: `rm .builds/openbsd_*`
  for i in 0..<num:
    let file = fmt".builds/openbsd_{i}.yml"
    let code = genCIopenbsd(i, num)
    writeFile(file, code)

when isMainModule:
  main()
