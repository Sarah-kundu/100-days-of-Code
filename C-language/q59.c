#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int even=0, odd=0;

    for (i = 1; i < n; i++) {
        if (arr[i] % 2== 0)
            even++;

        else {
            odd++;
        }
    }

    printf("Even element = %d\n", even);
    printf("Odd element = %d\n", odd);

    getchar();
    getchar();

    return 0;
}
