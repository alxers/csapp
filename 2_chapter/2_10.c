//a ^ a = 0, for any a.

#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    printf("%d x: ", *x);
    printf("%d y: ", *y);
    printf("\n");
    *x = *x ^ *y;
    printf("%d x: ", *x);
    printf("%d y: ", *y);
    printf("\n");
    *y = *x ^ *y;
    printf("%d x: ", *x);
    printf("%d y: ", *y);
    printf("\n");
}

int main()
{
  int a = 3;
  int b = 4;

  inplace_swap(&a, &b);
}

//Step 1 b = a ^ b;
//Step 2 a = a ^ (a ^ b) = b;
//Step 3 b = b ^ (a ^ b) = a;


// 0011
// 0100
// step 1
// y = 0011 ^ 0100 = 0111 = 7;
// step 2
// x = 0011 ^ 0111 = 0100 = 4;
// step 3
// y = 0100 ^ 0111 = 0011 = 3;
