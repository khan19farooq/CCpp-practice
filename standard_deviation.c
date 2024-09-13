/** Compute standard deviation */
#include <stdio.h>
#include <math.h>

double stdev(double x[], int N)
{
    double mean = 0; double total = 0;

    for (int i = 0; i < N; i++)
        total += x[i]; // Sum of all elements in the array
    
    mean = total / N; // Mean = sum of elements / total no. of elements

    double sum = 0;

    for (int i = 0; i < N; i++)
        sum += pow(x[i] - mean, 2);
    
    return (sqrt(sum / N));
}

int main () 
{
    double a[] = {9.2, 1.5, 6.7, 8.2, 5.5, 7.1};// Input data to compute standard deviation
    
    int N = sizeof(a)/sizeof(a[0]); // Total elements
    printf("\nN = %d\n",N);
    
    double result = stdev(a, N);// Output of standard deviation
    printf("Standard Deviation, sigma = %lf\n\n", result);
    
    return 0;
}