# cmake-template

small to medium sized C/C++ cmake project template, setup for TDD (can run ctest in top directory, inside vim)

currently only tested on Ubuntu and Arch/Manjaro Linux

structure at a glance

```
.
|-- app
|   |-- CMakeLists.txt # how to compile app
|   `-- src # app' source, currently only main, with a couple of includes
|-- CMakeLists.txt # top level CMakeLists.txt
|-- README.md # this readme!
|-- src # directory for libraries
|   |-- CMakeLists.txt # add all libraries, currently only 1
|   `-- modern # "modern" cmake library, just for show
`-- tests # tests for app code, if any, currently empty
    |-- CMakeLists.txt
    |-- first_test
    `-- second_test
```

can be built with

```
cmake -S . -G "Ninja" -B build -DCMAKE_BUILD_TYPE=Debug -DENABLE_TESTS=ON -DCMAKE_VERBOSE_MAKEFILE=ON
```

can be tested with

```
ctest --build-and-test . build --build-generator "Ninja" --test-command ctest -VV
```

and for vim users, you can open all the files (including .clang-format, .gitignore and this README) with

```
find . \( -path ./.git -o -path ./build -o -path ./src/modern/build \) -prune -o -type f -print -exec vim {} +
```
