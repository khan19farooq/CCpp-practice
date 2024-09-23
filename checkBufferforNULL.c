#include <stdbool.h> // Include the header file for the bool type
#include <stddef.h>  // Include the header file for the NULL macro
#include <stdio.h>

bool checkBufferForNULL(void **buffer, size_t length) {
    // Iterate through each element in the buffer
<<<<<<< HEAD
    for (size_t i = 0; i < length; i++) 
        if (buffer[i] == NULL)
            return true; // Return true if a NULL pointer is found
        
=======
    for (size_t i = 0; i < length; i++) {
        if (buffer[i] == NULL) {
            return true; // Return true if a NULL pointer is found
        }
    }
>>>>>>> a41a140868457b0e304f825c6b303dbc52e6d81a
    return false; // Return false if no NULL pointers are found
}

int main() {
    // Example usage
    void *buffer[5];
    buffer[0] = (void *)1;
    buffer[1] = (void *)2;
    buffer[2] = NULL; // This is a NULL pointer
    buffer[3] = (void *)4;
    buffer[4] = (void *)5;

    size_t length = sizeof(buffer) / sizeof(buffer[0]);

    if (checkBufferForNULL(buffer, length)) {
        printf("\nNULL pointer found in the buffer.\n\n");
    } else {
        printf("\nNo NULL pointers in the buffer.\n\n");
    }

    return 0;
}
<<<<<<< HEAD
=======

/*
int checkBufferforNULL(void *p1[],int length);// declaration

int checkBufferforNULL(void *p1[],int length)// function definition
{
    for (int i = 0; i < length; i++)
    {
        if(p1[i] == NULL) 
        return true;
        else 
        return false;
    }

}
checkBufferforNULL(); // calling the function
*/
>>>>>>> a41a140868457b0e304f825c6b303dbc52e6d81a
