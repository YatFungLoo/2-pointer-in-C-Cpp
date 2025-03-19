# 2 Pointers in C/C++

Micro program on 2 pointers problem using C and C++ styles (i.e. reference and pointer) so I don't forget std::string has no null terminator ever again in my life.

- [2 Pointers in C/C++](#2-pointers-in-cc)
  - [Two pointers problem](#two-pointers-problem)
  - [To run the code](#to-run-the-code)

## Two pointers problem

Instead of passing by value, which increase memory overhead a good programmer should always pass by pointer within reasons. C++ introduced a concept called *called by reference* that allows passing pointer of an object to functions which is neet due to not having to deal with & (address of) ***and*** (a pointer or deference of) *and* having to calculate size of array prior and generally clutering the code.

## To run the code

*Tested on:*
Apple clang version 16.0.0 (clang-1600.0.26.6)
Target: arm64-apple-darwin24.2.0
Thread model: posix

```bash
make && ./2pointer
```
