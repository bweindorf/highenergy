[![Travis status](https://travis-ci.org/root-project/cling.svg?branch=master)](https://travis-ci.org/root-project/cling)
<!-- a target="_blank" href="https://ci.appveyor.com/project/root-project/cling-j0wdg">
  ![Appveyor status](https://ci.appveyor.com/api/projects/status/github/root-project/cling?svg=true&branch=master)
</a -->

Cling - The Interactive C++ Interpreter
=========================================


Overview
--------
Cling is an interactive C++ interpreter, built on top of Clang and LLVM compiler
infrastructure. Cling realizes the [read-eval-print loop
(REPL)](http://en.wikipedia.org/wiki/Read%E2%80%93eval%E2%80%93print_loop)
concept, in order to leverage rapid application development. Implemented as a
small extension to LLVM and Clang, the interpreter reuses their strengths such
as the praised concise and expressive compiler diagnostics.

See also [cling's web page.](https://cdn.rawgit.com/root-project/cling/master/www/index.html)

Please note that some of the resources are rather old and most of the stated
limitations are outdated.
  * [talks](www/docs/talks)
  * http://blog.coldflake.com/posts/2012-08-09-On-the-fly-C++.html
  * http://solarianprogrammer.com/2012/08/14/cling-cpp-11-interpreter/
  * https://www.youtube.com/watch?v=f9Xfh8pv3Fs
  * https://www.youtube.com/watch?v=BrjV1ZgYbbA
  * https://www.youtube.com/watch?v=wZZdDhf2wDw
  * https://www.youtube.com/watch?v=eoIuqLNvzFs


Installation
------------
### Release Notes
See our [release notes](docs/ReleaseNotes.md) to find what's new.


### Binaries
Our nightly binary snapshots can be found
[here](https://root.cern.ch/download/cling/).


### Building from Source with Cling Packaging Tool
Cling's tree has a user-friendly, command-line utility written in Python called
Cling Packaging Tool (CPT) which can build Cling from source and generate
installer bundles for a wide range of platforms. CPT requires Python 2.7 or
later.

If you have Cling's source cloned locally, you can find the tool in
`tools/packaging` directory. Alternatively, you can download the script
manually, or by using `wget`:

```sh
wget https://raw.githubusercontent.com/root-project/cling/master/tools/packaging/cpt.py
chmod +x cpt.py
./cpt.py --check-requirements && ./cpt.py --create-dev-env Debug --with-workdir=./cling-build/
```
Full documentation of CPT can be found in [tools/packaging](tools/packaging).


Usage
-----
```c++
./cling '#include <stdio.h>' 'printf("Hello World!\n")'
```

To get started run:
```bash
./cling --help
```
or type
```
./cling
[cling]$ .help
```


Jupyter
-------
Cling comes with a [Jupyter](http://jupyter.org) kernel. After building cling,
install Jupyter and run `jupyter kernelspec install cling`. It requires a fairly
new Jupyter. Make sure cling is in your PATH when you start jupyter!

See also the [tools/Jupyter](tools/Jupyter) subdirectory for more information.


Developers' Corner
==================
[Cling's latest doxygen documentation](http://cling.web.cern.ch/cling/doxygen/)


Contributions
-------------
Every contribution is considered a donation and its copyright and any other
related rights become exclusive ownership of the person who merged the code or
in any other case the main developers of the "Cling Project".

We warmly welcome external contributions to the Cling! By providing code,
you agree to transfer your copyright on the code to the "Cling project".
Of course you will be duly credited and your name will appear on the
contributors page, the release notes, and in the [CREDITS file](CREDITS.txt)
shipped with every binary and source distribution. The copyright transfer is
necessary for us to be able to effectively defend the project in case of
litigation.


License
-------
Please see our [LICENSE](LICENSE.TXT).


Releases
--------
Our release steps to follow when cutting a new release:
  1. Update [release notes](docs/ReleaseNotes.md)
  2. Remove `~dev` suffix from [VERSION](VERSION)
  3. Add a new entry in the news section of our [website](www/news.html)
  4. Commit the changes.
  5. `git tag -a v0.x -m "Tagging release v0.x"`
  6. Create a draft release in github and copy the contents of the release notes.
  7. Wait for green builds.
  8. Upload binaries to github (Travis should do this automatically).
  9. Publish the tag and announce it on the mailing list.
  10. Increment the current version and append `~dev`.
