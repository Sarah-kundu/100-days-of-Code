#include<stdio.h>
int main(){
    int i, j, sum[3];
    int ma[3][3]={{1,2,3},{4,5,6}};

    for(i=0; i<3; i++){
        sum[i]=0;
        for(j=0; j<3; j++){
            sum[i] = sum[i] + ma[i][j];
        }
    }
    printf("row sum\n");
    for(i=0; i<2; i++){
        printf("The %d sum is %d\n", i+1, sum[i]);
    }

    getchar();
    getchar();

    return 0;
}