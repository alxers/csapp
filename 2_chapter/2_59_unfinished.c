// Write a C expression that will yield a word consisting of the least significant byte of
// x and the remaining bytes of y. For operands x=0x89ABCDEF and y=0x76543210,
// this would give 0x765432EF

#include <stdio.h>


int main() {
    int x = 0x89ABCDEF;
    int y = 0x76543210;

    // Bit shifts seem to give a correct result separately
    // but how to glue them together?
    //printf("%x\n", x<<24); // ef000000
    //printf("%x\n", y>>8); // 765432
    
    // Alternative
    int maskX = 0x000000ff;
    int maskY = 0xffffff00;
    int new_x = x & maskX;
    int new_y = y & maskY;
    printf("%x\n", new_y | new_x); // 765432ef

    return 0;
}
