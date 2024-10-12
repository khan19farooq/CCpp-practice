#include <stdio.h>
#include <string.h>

int convert(char *string);

int main()
{
    char s1[] = "10101";
    int var1 = convert(s1);
    printf ("\ns1 in decimal = %d\n\n", var1);

    return 0;
}
/*

10101 (binary) -> 21 (decimal)

 1     0     1     0     1
2^4 + 2^3 + 2^2 + 2^1 + 2^0 
=16 +  0  +  4  +  0  +  1
= 21

*/
int convert(char *string)
{
    int slen = strlen(string);
    int total = 0;
    int decval = 1;
    for (int i = (slen - 1) ; i >= 0 ; i--)
    {
        if (string[i] == '1') total += decval;
        decval *= 2;
        //printf("\nstring[%d] == s1[%d]; total = %d; decval = %d\n",i,i, total, decval);
    }
    return total;
}
/*
string[4],1 == '1' true;  total = total(0) + 1 = 1; decval = decval(1) * 2 = 2
stirng[3],0 == '1' false; total = 1; decval = 2*2 = 4
string[2],1 == '1' true;  total = total(1) + 4 = 5; decval = decval(4) * 2 = 8
string[1],0 == '1' false; total = 5; decval = 2*8 = 16
string[0],1 == '1' true;  total = total(5) + 16 = 21; decval = decval(16) * 2 = 32


*/