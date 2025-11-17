//WAP  TO FIND MAXI AND MINI ELEMENTS IN  AN ARRAY.
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
