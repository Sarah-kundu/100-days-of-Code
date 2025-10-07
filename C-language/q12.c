#include <stdio.h>

int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num > 0) {
    printf("The integer is positive.");
}

else if (num == 0) {
    printf("The integer is zero.");
}

else {
    printf("The integer is negative.");
}

getchar();
getchar();

return 0;
}
