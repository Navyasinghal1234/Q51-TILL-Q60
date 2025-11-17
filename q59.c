//WAP TO COUNT EVEN AND ODD NUMBERS IN AN ARRAY.

        
        #include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    scanf("%d", &n);
    int arr[n];

    // Read array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
