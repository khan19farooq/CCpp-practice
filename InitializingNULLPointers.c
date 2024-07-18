#include <stdio.h>

int main()
{
    int *data = NULL;

    // Simulate some condition that causes data to be allocated

    int condition = 0;
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
