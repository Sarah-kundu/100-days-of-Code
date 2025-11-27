#include<stdio.h>
int main(){
int a[3][3]= {{1,5,8},{3,0,9},{3,5,0}};
int distinct=1;

for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        if(i!=j){
        if(a[i][i] == a[j][j]){
           distinct=0;
        }
    }
}
}

if (distinct){
    printf("The diagonals are distinct");
}
else{
    printf
        ("The diagonals are not distinct");
    }


    getchar();
    getchar();

    return 0;

}