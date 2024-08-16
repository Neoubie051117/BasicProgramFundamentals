#include <stdio.h>
#include <math.h>  // Include math.h for mathematical functions

int main() {
    // Variables
    int x;
    double phi = (1 + sqrt(5)) / 2;  // Golden ratio
    double psi = (1 - sqrt(5)) / 2;  // Conjugate of the golden ratio
    double result;

    // Fibonacci term algorithm
    printf("What term of Fibonacci sequence do you want to compute? ");
    scanf("%d", &x);

    // Process
    result = (pow(phi, x) - pow(psi, x)) / sqrt(5);

    // Print the result
    printf("The %dth term of the Fibonacci sequence is: %.0f\n", x, result);

    return 0;
}
