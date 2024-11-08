//write an derivative of this software without specific prior written permission.


#include <stdio.h>
#include <stdlib.h>


// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}


// Function to calculate the binomial coefficient
unsigned long long binomialCoefficient(int n, int k) {
    if (k > n)
        return 0;
    return factorial(n) / (factorial(k) * factorial(n - k));
}


// Function to calculate the sum of the series
double sumOfSeries(int n) {
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        double term = binomialCoefficient(2 * n, i) * pow(-1, i) / (double) factorial(i);
        sum += term;
    }
    return sum;
}