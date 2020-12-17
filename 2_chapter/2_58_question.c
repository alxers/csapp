// Write a procedure is_little_endian that will return 1 when compiled and run
// on a little-endian machine, and will return 0 when compiled and run on a big-
// endian machine. This program should run on any machine, regardless of its word
// size.
#include <stdio.h>

// 7DE is hex
// (7 * 16^3) + (13 * 16^2) + (14 * 16^0)
// 1792 + 208 + 14
// 2014 in decimal

int main() {
    // short is 2 bytes, 0x0001 is 16 bits or 2 bytes (each hex is 4 bits)
    short hex = 0x0001;
    //printf("Value of int: %x, %d\n", hex, hex);

    // Idea is to cast to a type which stores less bytes, f.e. char is 1 byte
    // so on little-endian the most significant bit is "1" (that is stored as 0x1000 ?),
    // thus when casted to char it will be 0x10 (?)
    // On the other hand, if it's a big-endian, then cast will result in 0x00
    // So if value after casting is true (1), then it's a little-endian, otherwise it's a big-endian
   
    // Here we take an address of hex (&hex) and cast it to a 'char *' pointer, and then dereferencing
    // the pointer to get a value
    
    // (why can't we just do (char)hex ?)
    printf("%x", *(char *)&hex);
    return 0;
}
