//WAP TO PRINT ELEMENTS OS A ONE DIMENSIONAK ARRAY.
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);      // Read size of array

    int arr[n];          // Declare array of size n

    // Read elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
