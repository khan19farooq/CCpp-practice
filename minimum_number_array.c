#include <stdio.h>
int find_min(int myArray [], int length);
int main()
{
int myArray [] = { 2, 5, 7, 1, 8, 0 };

int min = find_min(myArray, 6);
printf("Minimum number in myArray = %d\n",min);

return 0;
}

int find_min(int myArray [], int length)
{
    int min ;
    min = myArray[0];

    for (int i = 1; i < length; i++)
    {
        if (myArray[i] < min)
        min = myArray[i];
    }

return min;
}
