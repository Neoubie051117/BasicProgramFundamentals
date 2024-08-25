#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    system("cls");
    int input_x;
    double positive_computation, negative_computation, result;

    printf("Enter the Fibonacci term: ");
    scanf("%d", &input_x);

    // Define phi and psi correctly
    double phi = (1 + sqrt(5)) / 2;  // Golden ratio
    double psi = (1 - sqrt(5)) / 2;  // Conjugate of the golden ratio

    // Process
    positive_computation = pow(phi, input_x);   // phi^n
    negative_computation = pow(psi, input_x);   // psi^n
    result = (positive_computation - negative_computation) / sqrt(5);

    // Output the result
    printf("\nThe %dth term of the Fibonacci sequence is: %.0f\n", input_x, result);

    return 0;
}
