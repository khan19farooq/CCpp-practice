// C program to implement
// the above approach

#include <stdio.h>

// Function to set the kth bit of n
int setBit(int n, int k)
{
	return (n | (1 << (k - 1)));
}

// Function to clear the kth bit of n
int clearBit(int n, int k)
{
	return (n & (~(1 << (k - 1))));
}

// Function to toggle the kth bit of n
int toggleBit(int n, int k)
{
	return (n ^ (1 << (k - 1)));
}

// Function to modify k-th bit with p
int modifyBit(int n, int k, int p)
{
	return (n | (p << k));
}

// Function to find the kth bit of n
int findBit(int n, int k)
{
	return ((n >> k) & 1);
}

// Utility function to perform
// the specified Bit Operations
void bitOperations(int n, int k, int p)
{

	printf("K(= %d)-th bit of %d is %d\n", k, n, findBit(n, k));

	printf("Setting K(= %d)th bit modifies N to %d\n", k, setBit(n, k));

	printf("Clearing K(= %d)th bit modifies N to %d\n", k, clearBit(n, k));

	printf("Toggling K(= %d)th bit modifies N to %d\n", k, toggleBit(n, k));

	printf("Replacing the K(= %d)<sup>th</sup> bit", k);
	
    printf(" with P(= %d) modifies N to 10\n", modifyBit(n, k, p));
}

// Driver Code
int main()
{
	int n = 5, k = 1, p = 1;
	bitOperations(n, k, p);

	return 0;
}
