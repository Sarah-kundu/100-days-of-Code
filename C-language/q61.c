#include <stdio.h>
int main() {
int arr[6] = {5, 12, 7, 25, 19, 30};
int key = 25;
int i, found = 0;
for (i = 0; i < 6; i++) {
    if (arr[i] == key) {
        found = 1;
        break;
    }
}
if (found) {
    printf("Element %d found at index %d\n", key, i);
}
 else {
    printf("Element not found\n");
 }
getchar();
getchar();
return 0;
}
