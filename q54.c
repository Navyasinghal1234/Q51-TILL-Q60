//WAP TO PRINT THE PATTERN.
#include <stdio.h>

int main() {
    int i, j;

    // Upper half of the pattern
    for(i = 1; i <= 4; i++) {
        // Print spaces
        for(j = 4; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for(i = 3; i >= 1; i--) {
