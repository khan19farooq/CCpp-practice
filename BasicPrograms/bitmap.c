/*  Write a function in C that creates. You need to point to a specific index or to a indexes and to
    get the values the size of the bitmap is N. N can be any number.                                   */

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdint.h>

    typedef struct
    {
        uint8_t *data;  // Pointer to the actual bitmap array
        size_t size;    // Number of bits in the bitmap
    }Bitmap;
    
    /** We created structure data type. Structure is a user-defined data type 
        which can store multiple data of different data type.         */
    
    /** Function: to create a bitmap of size N  */
    Bitmap create_bitmap(size_t N)  
    {        // So 'Bitmap' is the data type and 'create_bitmap' is the name of the function   
        Bitmap bitmap;                       // Creating a variable of 'Bitmap'(struct) type, so this will create a 'bitmap' named structure 
        bitmap.size = N;
        bitmap.data = calloc (( N + 7 )/ 8, sizeof(uint8_t)); 
        /**  Defining the data to and calling this function 'calloc' to allocate enough data to hold N bits 
         *   calloc() is a standard C function that allocates memory and initializes it to zero. 
         *   It takes two arguments: the number of elements to allocate and the size of each element.
         *   Since each 'uint8t' can hold 8 bits, we divide 'N' by 8 to get the number of bytes we required.
         *   The +7 is used to ensure proper rounding up when 'N' is not a multiple of 8. For example, 
         *   if N = 9, you need 2 bytes (8 + 1), not just 1 to store the bits. ( 9 + 7 )/8 = 2 
         *   sizeof(uint8_t) is the sizeof each element in the array which will always be 1 byte.
         *   The result of calloc is a pointer to a block of memory large enough to store 'N' bits, with each byte initialized to '0'. 
         *   This pointer is then assigned to bitmap.data .
        */

       if (bitmap.data == NULL) {
            perror("Error allocating memory for bitmap!!");
            exit (EXIT_FAILURE);
            }
    
    return bitmap; // This function will return bitmap structure
    }

    /** Function to set a bit to a specific index */
    void set_bit(Bitmap *bitmap, size_t index) {    
    // A pointer to a Bitmap structure is passed as an argument. This structure 
    // contains the data for the bitmap and its size. 
    if (index >= bitmap->size) {
        fprintf(stderr, "Index out of bounds!");
        return;
    }
    bitmap->data[index / 8] |= (1 << (index % 8)); // Set the bit at the given index   
    /** bitmap->data[index / 8] : This access the byte (8 bits ) within the data array where the bit 
     *                            at the specified index resides.
     * 
     *  (1 << (index % 8)): This is the bitwise operation. The '(1 << (index % 8))' shifts the bit '1' to the
     *                      to the left by the number of posititons given by (index % 8).
     * 
     *  The bitwise OR operation ( |= ) combines the current value of the byte with the result of the shift operation.
     *  **The OR operation sets the bits at the specified position to '1', while leaving all other bits unchanged.  
     *
     */
    }
    
    /** Function to clear a bit to a specific index */
    void clear_bit(Bitmap *bitmap, size_t index)  {
    if (index >= bitmap->size) {
        fprintf(stderr, "Index out of bounds!");
        return;
    }
    bitmap->data[index / 8] &= ~(1 << (index % 8)); // Clear the bit at the given index 
    /** bitmap->data[index / 8] : This access the byte (8 bits ) within the data array where the bit 
     *                            at the specified index resides.
     * (1 << (index % 8)): This is the bitwise operation. The '(1 << (index % 8))' shifts the bit '1' to the
     *                      to the left by the number of posititons given by (index % 8).
     * 
     * '&=' The bitwise AND operation: This operation clears the target bit by the performing a bitwise
     *  AND between the 'bitmap->data[index / 8]' and the bitmask created by '~(1 << (index % 8))'
     *  
     *  Without the '~', the bitmask would have only the bit you want to clear set to '1' and all other bits
     *  set to 0. This would result in clearing all other bits and leaving the target bit unchanged, which is 
     *  the opposite of what we want.
     * 
     *  With the '~', we invert the bitmask so that only the target bit is cleared, while all other bits remain 
     *  unchanged.
     */
    }
    
    /** Function to get the value of a bit at a specific index */
    int get_bit(Bitmap *bitmap, size_t index)  {
        if (index >= bitmap->size) {
        fprintf(stderr, "Index out of bounds!\n");
        return -1;
    }
    return (bitmap->data[index / 8] & (1 << (index % 8))) != 0; // Return the value of the bit as 0 or 1
    }

    void free_bitmap(Bitmap *bitmap) {
        free(bitmap->data);
    }

    int main() {
    size_t N = 100; // Size of the bitmap
    Bitmap bitmap = create_bitmap(N);

    // Set some bits
    set_bit(&bitmap, 10);
    set_bit(&bitmap, 20);
    set_bit(&bitmap, 30);

    // Get and print the values of these bits
    printf("Bit at index 10: %d\n", get_bit(&bitmap, 10));
    printf("Bit at index 20: %d\n", get_bit(&bitmap, 20));
    printf("Bit at index 30: %d\n", get_bit(&bitmap, 30));
    printf("Bit at index 40: %d\n", get_bit(&bitmap, 40)); // This bit was not set, should be 0

    // Clear some bits
    clear_bit(&bitmap, 20);
    printf("Bit at index 20 after clearing: %d\n", get_bit(&bitmap, 20)); // Should be 0

    // Free the bitmap memory
    free_bitmap(&bitmap);

    return 0;
}