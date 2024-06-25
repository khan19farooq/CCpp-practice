#include <stdio.h>

void decimalToBinary(unsigned int n) {
    // Array to store binary number
    unsigned int binaryNum[32];
    
    // Counter for binary array
    int i = 0;
    while (n > 0) {
        // Storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // Printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%u", binaryNum[j]);
    printf("\n");
}

int main() {
    unsigned int number = 33;
    printf("Binary representation of %u is: ", number);
    decimalToBinary(number);
    return 0;
}
