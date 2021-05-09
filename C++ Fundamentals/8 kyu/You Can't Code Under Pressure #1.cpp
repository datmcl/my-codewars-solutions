// Code as fast as you can! You need to double the integer and return it.

#include <cstdint>

int32_t double_integer(int32_t n)
{
  return n + n; // n << 1 (left shift operator; if n is 4 in binary 0100, then n << 1 is 100 in binary, or 8)
}
