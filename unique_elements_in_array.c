/** Find the unique elements in an array - elements which are non-repeating */
#include <stdio.h>
#include <stdbool.h>


void uniqueElements(int a[], int length)
{   
    printf("\nLength of array: %d\n", length);

    for(int i = 0; i < length; i++)
    {
        bool matchFound = false;
        for (size_t j = 0; j < length; j++)
        {   
            if (a[i] == a[j] && i != j)
                matchFound = true;
        }

        if(!matchFound) printf("%d\n", a[i]);
    }
}

int main () {

    int a[] = {1, 2, 3, 4, 5, 6, 3, 4, 1, 8, 9, 7};
    //    i    0  1  2  3  4  5  6  7  8  9  10 11
    int length = sizeof(a)/sizeof(a[0]);

    uniqueElements(a, length);

    return 0;
}