# DO NOT EDIT THIS FOLDER

Files changes will be lost with the next `mulle-sde reflect` execution.

If you want to edit any of the files copy them "up" and edit them there.
Though it's probably better to edit `CMakeLists.txt` straight.

```bash
cp share/_Sources.cmake .
vi _Sources.cmake
```

If you do not want any files reflected, turn reflection off with:

```bash
mulle-sde environment set MULLE_SOURCETREE_TO_CMAKE_RUN NO
mulle-sde environment set MULLE_MATCH_TO_CMAKE_RUN NO
```


<!--
extension : mulle-sde/c-cmake
directory : project-oneshot/all
template  : .../README.md
Suppress this comment with `export MULLE_SDE_GENERATE_FILE_COMMENTS=NO`
-->
