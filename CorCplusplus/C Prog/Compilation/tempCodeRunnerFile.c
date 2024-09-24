#include <stdio.h>

int main() {
    int n, resultOutput = 0, previousDigit = 0, currentDigit;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 0; n != 0; i++) {
        currentDigit = n % 10;
        if (i > 0) { // Only perform the subtraction after the first digit
            resultOutput += currentDigit - previousDigit;
        }
        previousDigit = currentDigit;
        n /= 10;
    }

    printf("Result of subtracting digits: %d\n", resultOutput);

    return 0;
}
