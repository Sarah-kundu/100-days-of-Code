#include <stdio.h>
int main(){
    float t;
    printf("The temp is ");
    scanf("%f", &t);

    float x;
    x= t * 1.8 + 32;

    printf("The conversion of temp from Celcius to Fehranite is %f ", x);


    getchar();
    getchar();

    return 0;
}