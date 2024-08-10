#include <stdio.h>
#include <unistd.h>  // for usleep

// Function to display text with an animation
void displayTextAnimate(const char *text, float speed) {
    while (*text) {
        putchar(*text++);
        fflush(stdout);
        usleep(speed * 1000000);  // usleep takes microseconds, so convert speed (in seconds) to microseconds
    }
    putchar('\n');  // for newline after text
}

int main() {
    displayTextAnimate("Hello world", 0.0225);
    return 0;
}
