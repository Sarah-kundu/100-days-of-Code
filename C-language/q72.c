#include<stdio.h>
int main(){
    int i, j, sum=0;
    int a[2][3]= {{1,2,3},{4,5,6}};

    for(int i=0; i<2;i++){
        for(int j=0; j<3; j++){
            sum= sum + a[i][j];
        }
    }

    printf("The sum of elements of the matirx is %d", sum);

    getchar();
    getchar();
    return 0;
    
}