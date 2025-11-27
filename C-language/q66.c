#include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter size of sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; 

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert ");
    scanf("%d", key);
    
    pos=n;

    for(i=n; i>=pos; i--){
        arr[i]=arr[i-1];
    }

    arr[pos]= key;
    printf("\nArray after insertion:\n");

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    getchar();
    getchar();
    return 0;
}
