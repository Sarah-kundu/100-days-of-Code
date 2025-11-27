#include<stdio.h>
int main(){
    int n1, n2;
    int arr[n1][n2];
    printf("Choose the row and coloums matrix");
    scanf(" %d %d", &n1, &n2);

    printf("Write all the %d element of the matrixs", n1 * n2);
    for(int i=0; i<n1; i++){
        for (int j=0; j< n2; j++){
           scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<n1; i++){
        for (int j=0; j< n2; j++){
            printf("%d\n", arr[i][j]);
        }
    }


    getchar();
    getchar();

    return 0;

}