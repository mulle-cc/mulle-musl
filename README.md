# mulle-objc-musl

🐚 Build mulle-objc with mulle-clang and musl

Basically add mulle-objc-musl as a dependency and put musl-mulle-clang as your CC.

```
mulle-sde dependency add --github mulle-objc mulle-objc-musl
mulle-sde environment set CC musl-mulle-clang
```


## Caveats

mulle-objc-list needs shared library support, which the musl libc won't
support (not how its built currently). So in effect the tools to update the
MulleObjCLoader files aren't installed and won't be used.

* Use `mulle-sde tool add mulle-objc-list` and friends to your project, which are
compiled with glibc or some shared library support. You need a working **mulle-objc-list** in your `PATH` for this fix.
* Manually update the `MulleObjCLoader+...` loader files for changed dependencies
* Occasionally build your project with glibc to refresh those files

