// Write a C expression that will yield a word consisting of the least significant byte of
// x and the remaining bytes of y. For operands x=0x89ABCDEF and y=0x76543210,
// this would give 0x765432EF

#include <stdio.h>

int fun1(int x, int y) {
    int maskX = 0x000000ff;
    int maskY = 0xffffff00;
    
    int new_x = x & maskX;
    int new_y = y & maskY;
    return new_y | new_x;
}

int main() {
    int x = 0x89ABCDEF;
    int y = 0x76543210;

    // Bit shifts seem to give a correct result separately
    // but how to glue them together?
    //printf("%x\n", x<<24); // ef000000
    //printf("%x\n", y>>8); // 765432
    
    // Alternative
    printf("%x\n", fun1(x, y)); // 765432ef

    return 0;
}
