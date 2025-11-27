#include<stdio.h>
int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2;
    for (int i=pos-1; i<n-1; i++) {
    arr[i] = arr[i+1];
    }
    n--;

    for (int i=0; i<10; i++){
        printf("THe updated array is %d\n", arr[i]);

    }
    getchar();
    getchar();
    return 0;
}