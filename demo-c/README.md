# demo-c

#### 🎦 demo-c builds a mulle-objc project with cosmopolitan libc

How it was done:

``` bash
mulle-sde init -m mulle-objc/objc-developer executable
mulle-sde dep add --github mulle-c mulle-cosmopolitan
mulle-sde dep move mulle-cosmopolitan top
mulle-sde env set CC mulle-clang.cosmopolitan
mulle-sde env set CMAKEFLAGS "-DMULLE_NO_CMAKE_INSTALL_RPATH:BOOL=ON"
mulle-sde environment --global set --add MULLE_CRAFT_USE_SCRIPTS cosmopolitan-build
mulle-sde craft
```

====

** MEMO: project stalled because of [errno problem in cosmopolitan](https://github.com/jart/cosmopolitan/issues/675)
Also the cosmopolitan build with `m=dbg`, didn't build for some reason.
***

====


## mulle-sde

This is a [mulle-sde](//github.com/mulle-sde) project. mulle-sde combines
recursive package management with cross-platform builds via **cmake**:

| Action  | Command                               | Description                        |
|---------|---------------------------------------|------------------------------------|
| Build   | `mulle-sde craft [--release|--debug]` | Builds into local `kitchen` folder |
| Install | `mulle-sde install --prefix /usr/local https://github.com/<|GITHUB_USER|>/demo-c.git` | Like `make install`         |


### Manual Installation


Install the requirements:

| Requirements                                      | Description             |
|---------------------------------------------------|-------------------------|
| [some-requirement](//github.com/some/requirement) | Some requirement        |

Install into `/usr/local`:


``` sh
cmake -B build \
      -DCMAKE_INSTALL_PREFIX=/usr/local \
      -DCMAKE_PREFIX_PATH=/usr/local \
      -DCMAKE_BUILD_TYPE=Release &&
cmake --build build --config Release &&
cmake --install build --config Release
```


<!--
extension : mulle-sde/sde
directory : demo/all
template  : .../README.md
Suppress this comment with `export MULLE_SDE_GENERATE_FILE_COMMENTS=NO`
-->
