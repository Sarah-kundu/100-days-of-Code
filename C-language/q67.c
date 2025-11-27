#include<stdio.h>
int main(){
    int arr[10] = {1, 2, 3, 5, 6};
    int n = 5, pos = 4, val = 4;
        for (int i=n; i>=pos; i--) {
            arr[i] = arr[i-1];
        }
    arr[pos-1] = val;
    n++;

    for(int i=0; i<n; i++){
        printf("The array now is %d\n", arr[i]);
    }
    getchar();
    getchar();
    return 0;
}