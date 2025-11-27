#include<stdio.h>
int main(){
    int i, n;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements\n", n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    printf("The array element are\n");
    for(i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

    getchar();
    getchar();
    return 0;


}