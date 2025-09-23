# C++ CMake Project Example

This example shows how to

- Setup a simple C++ CMake project into library, executable and test
- Use Conan as a package manager
- Compile the C++ program using Windows/MSVC
- Compile the C++ program using Linux/GCC
- Use Google test to test the C++ project
- Use Git submodules
- Use GitHub Actions to compile and test the project on Windows and Linux
- Use HashiCorp Vault to obtain the GitHub token for fetching private submodules

## Windows

To compile and run the project:

```console
cmake --preset windows-x64-debug
cmake --build --preset windows-x64-debug

.\build\windows-x64-debug\src\demo.exe
Hello world!
2 + 3 = 5

.\build\windows-x64-debug\tests\test_stuff.exe
Running main() from C:\Users\eur2fe\.conan2\p\b\gtest960b84ab7c39c\b\src\googletest\src\gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from Stuff
[ RUN      ] Stuff.AddSucceeds
[       OK ] Stuff.AddSucceeds (0 ms)
[----------] 1 test from Stuff (1 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (3 ms total)
[  PASSED  ] 1 test.
```

## Linux

To compile and run the project:

```bash
cmake --preset linux-x64-debug
cmake --build --preset linux-x64-debug

./build/linux-x64-debug/src/demo
Hello world!
2 + 3 = 5

./build/linux-x64-debug/tests/test_stuff
Running main() from /home/eur2fe/.conan2/p/b/gtestb42ca3b61c6e3/b/src/googletest/src/gtest_main.cc
[==========] Running 1 test from 1 test suite.
[----------] Global test environment set-up.
[----------] 1 test from Stuff
[ RUN      ] Stuff.AddSucceeds
[       OK ] Stuff.AddSucceeds (0 ms)
[----------] 1 test from Stuff (0 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test suite ran. (0 ms total)
[  PASSED  ] 1 test.
```
