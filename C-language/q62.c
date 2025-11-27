#include <stdio.h>
int main() {
int arr[5] = {1, 2, 3, 4, 5};
int i;
printf("Array in reverse order: ");
for (i = 4; i >= 0; i--) {
    printf("%d ", arr[i]);
}
getchar();
getchar();
return 0;
}