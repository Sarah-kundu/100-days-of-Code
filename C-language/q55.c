#include<stdio.h>
int main(){
    
    int n, i, j, p;
    printf("Enter number ");
    scanf("%d", &n);

    for(i=2; i<=n; i++){
        p=1;
        for(j=2; j<i; j++){
        if(i%j==0);
        p=0;
        break;
        }
    }
    if (p=1){
        printf("The prime no.s are %d", i);
    }

    getchar();
    getchar();

    return 0;
}