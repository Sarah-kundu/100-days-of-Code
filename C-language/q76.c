#include<stdio.h>
int main(){
int a[3][3]= {{1,5,8},{3,7,9},{3,5,0}};
int symmetric=1;

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(a[i][j] != a[j][i]){
           symmetric=0;
        }
    }
}

if (symmetric){
    printf("The matrix is symmetric");
}
else{
    printf
        ("Not symmetric");
    }


    getchar();
    getchar();

    return 0;

}