/** Program for how to initialize a NULL pointer */
#include <stdio.h>

int main()
{
    int *data = NULL;

    // Simulate some condition that causes data to be allocated

    int condition = 0; // If condition = 1, then data will be allocated currently is 0 so no data will be allocated.
    
    if (condition)
    {
        static int memory = 100;
        data = &memory;
    }

    if (data != NULL)
    {
        printf("Data: %d\n", *data);
    }else{
        printf("Data is not allocated!");
    }

    return 0;
}
