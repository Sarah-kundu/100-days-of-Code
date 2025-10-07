#include <stdio.h>
int main(){
    float secs, mins, hrs;
    printf("The time in seconds is ");
    scanf("%f", &secs);

    mins=secs/60;
    hrs=secs/3600;

    printf("The result is %f : %f : %f", hrs ,mins, secs);

    getchar();
    getchar();

    return 0;
    
}