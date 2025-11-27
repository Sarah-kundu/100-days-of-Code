#include<stdio.h>
int main(){
int a[3][3]= {{1,5,8},{3,0,9},{3,5,0}};
int sum=0;

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(i == j){
           sum= sum + a[i][j];
        }
    }
}

printf("The sum of diagonals is %d", sum);


    getchar();
    getchar();

    return 0;

}