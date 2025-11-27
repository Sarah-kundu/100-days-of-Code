#include <stdio.h>

int main() {
    int n, k, i, j, last;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        last = arr[n - 1];    

        for (j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = last;              
    }
    printf("\nArray after rotating:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    getchar();
    getchar();

    return 0;
}
