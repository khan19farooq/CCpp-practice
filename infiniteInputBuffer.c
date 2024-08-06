#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFER_SIZE 5

int main (void)
{
    /*
    int buffer[BUFFER_SIZE];
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("Enter data: \n");
        scanf("%d", &buffer[i]);
    }
    int total = 0;
    for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("buffer[%d] = %d\n",i, buffer[i]);
        total += buffer[i];
    }
    printf("Average = %d", total/BUFFER_SIZE);
    */

   int size = 2;
   int *buffer = malloc(sizeof(int) * size);
   
   int input = 0;
   int num_data = 0;

   while(true)
   {

    if (num_data == size) 
    // condition to increase the size of the buffer, if the size of the buffer reaches to 2
    {
        size *= 2;
        buffer = realloc(buffer, sizeof(int)*size); // reallocation of the memory
    }
    printf("Enter data (-1 to quit):\n");
    scanf("%d", &input);

    if (input == -1) break; 
    // since this is an infinite loop if input is -1, we will come out of the loop
    else buffer[num_data] = input;

    num_data++;
   }

    int total = 0;
    for (int i = 0; i < num_data; i++)
    {
        printf("buffer[%d] = %d\n",i, buffer[i]);
        total += buffer[i];
    }
    printf("Average = %d\n", total/num_data);
    printf("Num data = %d\n", num_data);
    printf("Size of Buffer = %d\n", size);

    return 0;
}