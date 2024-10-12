/* Fibonacci sequence: The sequence created by the sum of two previous numbers 
starting with 0 and 1.
f_0 = 0
f_1 = 1
f_2 = 1
f_3 = 2
f_4 = 3
f_5 = 5

Seqeunce: 0, 1, 1, 2, 3, 5

*/
#include <stdio.h>

int fib(int n);

int main()
{
    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    int length = 0;

    do
    {
      printf("Enter the sequence length: ");
      scanf("%d", &length);
      if (length < 3)
        printf("Length must be >= 3\n");
    } while (length < 3);

    printf("\nIterative solution:\n");
    printf("%d, %d, ", term1, term2);

    for (int i = 2; i < length; i++)
    {
        fibn = term1 + term2;
        printf("%d", fibn);

        term1 = term2;
        term2 = fibn;

        if ( i != (length-1)) printf(", ");
        else printf("\n");
    }
    printf("\nRecursive solution:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d", fib(i));
        if ( i != (length-1)) printf(", ");
        else printf("\n");
    }
    printf("\n");
    
    return 0;
}

int fib(int n)
{
    if (n > 1) return fib(n-1) + fib(n-2);
    else if (n == 1) return 1;
    else if (n == 0) return 0;
    else
    {
        printf("Error: n must be >= 0.");
        return -1;
    }
}

