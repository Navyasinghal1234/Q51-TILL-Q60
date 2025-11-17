//WAP TO PRINT ALL THE PRIME NUMBERS FROM 1 TO N.
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    scanf("%d", &n);

    for(i = 2; i <= n; i++) {
        isPrime = 1; // assume the number is prime

        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
