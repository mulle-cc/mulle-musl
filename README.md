# mulle-musl

🐚 Build the musl C library for static executables

[musl](https://musl.libc.org/) is a small C library, that can be used to
produce fully static executables. With mulle-musl, you can turn any
*mulle-objc* project into one based on *musl*.


## Add mulle-musl-cc to your mulle-sde project

Add `mulle-musl` and `mulle-musl-cc` as dependencies and set `mulle-clang.musl`
as your `CC` and `COBJC`.

``` sh
mulle-sde dependency add --marks no-header,only-craft-sdk-musl --github mulle-cc mulle-musl
mulle-sde dependency set mulle-musl aliases c
mulle-sde dependency add --marks no-header,no-link,only-craft-sdk-musl --github mulle-cc mulle-musl-cc
mulle-sde dependency move mulle-musl-cc top
mulle-sde dependency move mulle-musl top
```

Then set your `MULLE_CRAFT_SDKS` to include "musl", like
`mulle-sde env --global set --append MULLE_CRAFT_SDKS musl`.


## Caveats

mulle-objc-list needs shared library support, which the musl libc won't
support (not how its built currently). So in effect the tools to update the
MulleObjCLoader files aren't installed and won't be used.

* Use `mulle-sde tool add mulle-objc-list` and friends to your project, which are
compiled with glibc or some shared library support. You need a working **mulle-objc-list** in your `PATH` for this fix.
* Manually update the `MulleObjCLoader+...` loader files for changed dependencies
* Occasionally build your project with glibc to refresh those files

