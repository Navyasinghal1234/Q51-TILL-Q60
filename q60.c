//WAP TO FIND COUNT POSITIVE, NEGATIVE AND ZERO ELEMENTS IN AN ARRAY.
#include <stdio.h>

int main() {
    int n, i;
    int pos = 0, neg = 0, zero = 0;

    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count categories
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", pos, neg, zero);

    return 0;
}
