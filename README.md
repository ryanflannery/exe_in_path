Introduction
------------

This is a small portable C (strict C89) library that simply checks the $PATH
environment variable for an executable. If present, it returns true. Otherwise
it returns false.

Usually you would simply `exec*` for such a check, but doing so in a `fork()`'d
child process or similar can complicate matters. This helps in those cases.


Details
-------
There's a single function exported by this library

```
    bool exe_in_path(const char *e);
```

Semantics are pretty obvious.

License
-------
The code is released under an ISC (2-clause BSD) style license.
