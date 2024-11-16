#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {

    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;  // To count how many prime numbers are found
    int num = 2;    // Start checking from the first prime number, which is 2

    printf("The first 50 prime numbers are:\n");    
    while (count < 50) {                        
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;  // Check the next number
    }
    printf("\n");

    return 0;
}
