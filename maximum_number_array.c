#include <stdio.h>
int find_max(int myArray [], int length);
int main()
{
int myArray [] = { 2, 5, 7, 1, 8, 0 };

int max = find_max(myArray, 6);
printf("maximum number in myArray = %d\n",max);

return 0;
}

int find_max(int myArray [], int length)
{
    int max ;
    max = myArray[0];

    for (int i = 1; i < length; i++)
    {
        if (myArray[i] > max)
        max = myArray[i];
    }

return max;
}
