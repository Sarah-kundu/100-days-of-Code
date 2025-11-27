#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("ENter the number:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {    sum= (2 * i) - 1 ;
        sum++;
        
    }
    printf("%d",sum);

    getchar();
    getchar();
    return 0;
    
}