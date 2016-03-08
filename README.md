Introduction
------------

[![License: ISC](https://img.shields.io/badge/license-ISC-blue.svg "License: ISC")](LICENSE)
[![Build Status](https://travis-ci.org/ryanflannery/exe_in_path.svg?branch=master)](https://travis-ci.org/ryanflannery/exe_in_path)

This is a small portable C (strict C89) library that simply checks the `$PATH`
environment variable for an executable. If present, it returns true. Otherwise
it returns false.

Usually you would simply `exec*` for such a check, but doing so in a `fork()`'d
child process or similar can be more complicated than it's worth for such a
common error.


Details
-------
There's a single function exported by this library

```
    bool exe_in_path(const char *e);
```

Semantics are pretty obvious.

Install
-------
Edit the variables in `Makefile` for where to install the .h and the lib.
Then
```
   $ ./configure
   $ make
   $ make install
   $ make test          /* run gtests */
```

License
-------
The code is released under an ISC style license.
