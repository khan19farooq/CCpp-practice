#include <stdio.h>

int main()
{
    int x = 5,y;

    /*
    In C, local variables (such as y in this case) are not automatically initialized. 
    If you do not explicitly initialize them, they contain indeterminate values 
    (essentially "garbage" values) left over from whatever was previously in that memory location.
    The value of y could be any integer value and can vary each time 
    you run the program or on different systems or compilers.
    Therefore, printing y without initializing it results in undefined behavior.

    The <garbage value> represents some arbitrary integer that happens to be 
    in the memory location assigned to y.
    */
    printf("\n\ny = %d\n",y);

    int arr[10];

    for (int i = 0; i <= 10; i++)
        printf("\n\ny = %d\n",arr[i]);

    return 0;
}
