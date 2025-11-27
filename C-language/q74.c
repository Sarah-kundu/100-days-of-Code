#include<stdio.h>
int main(){
    int a[2][3]= {{1,5,8},{3,7,9}};
    int b[3][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            b[j][i] = a[i][j];
        }
    }
    printf("The transpose of the matrix is\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf( "%d", b[i][j]);
        }
    }
    printf("\n");
    getchar();
    getchar();

    return 0;
}