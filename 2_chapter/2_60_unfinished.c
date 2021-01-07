// Suppose we number the bytes in a w-bit word from 0 (least significant) to w/8 − 1
// (most significant). Write code for the following C function, which will return an
// unsigned value in which byte i of argument x has been replaced by byte b:
// unsigned replace_byte (unsigned x, int i, unsigned char b);

// Here are some examples showing how the function should work:
// replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
// replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB

#include <stdio.h>

unsigned int replace_byte(unsigned x, int i, unsigned char b) {
  int mask1 = 0x22222222;
  int v1 = b | mask1;
//   int shifted = b << 2;
  printf("%x\n", v1); // prints 222222ab, but if mask1 has other numbers, it's not "ab" anymore, why?
  return 0;
}


int main() {
    replace_byte(0x12345678, 2, 0xAB);
  return 0;
}
