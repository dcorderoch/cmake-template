# cmake-template

small to medium sized C/C++ cmake project template

currently only tested on Ubuntu and Arch/Manjaro Linux

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
find . \( -path ./.git -o -path ./build -o -path ./modern/build \) -prune -o -type f -print -exec vim {} +
```
