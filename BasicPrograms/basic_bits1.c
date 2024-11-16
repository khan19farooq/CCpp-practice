#include <stdio.h>

int main()
{
    // a = 5 (00000101 in 8-bit binary), b = 9 (00001001 in
    // 8-bit binary)
    unsigned int a = 5, b = 9;

    printf("-----------------------------------------\n");

    printf("a = %u, b = %u\n", a, b);// a = 5,   0000 0101 
    printf("a & b = %u\n", a & b);   // b = 9, & 0000 1001
                                     // result   0000 0001 = 1 in decimal
   
    printf("a | b = %u\n", a | b);   // a = 5,   0000 0101 
                                     // b = 9, | 0000 1001
                                     // result   0000 1101 = 13 in decimal

    printf("a ^ b = %u\n", a ^ b);   // a = 5,   0000 0101 
                                     // b = 9, ^ 0000 1001
                                     // result   0000 1100 = 12 in decimal

    printf("~a = %u\n", a = ~a);     

    // The result is 00010010        // b = 9,   0000 1001
    printf("b<<1 = %u\n", b << 1);   // b << 1,  0001 0010 = 18 in decimal

    // The result is 00000100        // b = 9,   0000 1001
    printf("b>>1 = %u\n", b >> 1);   // b >> 1,  0000 0100 = 4 in decimal

    printf("-----------------------------------------\n");

    return 0;
}