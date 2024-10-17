#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int k;
    float A = 0, B = 0, i, j;
    float z[1760];
    char b[1760];
    
    printf("\x1b[2J"); // Clear the screen

    for (;;) {
        memset(b, 32, 1760);  // Fill the buffer with spaces
        memset(z, 0, 7040);   // Fill the depth buffer with zeroes
        
        for (j = 0; j < 6.28; j += 0.07) {
            for (i = 0; i < 6.28; i += 0.02) {
                float sini = sin(i);
                float cosj = cos(j);
                float sinA = sin(A);
                float sinj = sin(j);
                float cosA = cos(A);
                float cosj2 = cosj + 2;
                float mess = 1 / (sini * cosj2 * sinA + sinj * cosA + 5);
                float cosi = cos(i);
                float cosB = cos(B);
                float sinB = sin(B);
                float t = sini * cosj2 * cosA - sinj * sinA;

                int x = 40 + 30 * mess * (cosi * cosj2 * cosB - t * sinB);
                int y = 12 + 15 * mess * (cosi * cosj2 * sinB + t * cosB);
                int o = x + 80 * y;
                int N = 8 * ((sinj * sinA - sini * cosj * cosA) * cosB - sini * cosj * sinA - sinj * cosA - cosi * cosj * sinB);
                
                if (y > 0 && y < 22 && x > 0 && x < 80 && mess > z[o]) {
                    z[o] = mess;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }

        printf("\x1b[d"); // Move cursor to the home position
        for (k = 0; k < 1760; k++) {
            putchar(k % 80 ? b[k] : 10); // Print characters and newlines
        }
        
        A += 0.04;
        B += 0.02;
    }

    return 0;
}
