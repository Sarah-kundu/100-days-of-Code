#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

int main() {
    struct Student a = {"Amit", 1, 90, A};
    struct Student b = {"Amit", 1, 90, A};

    if(strcmp(a.name,b.name)==0 && a.roll==b.roll && a.marks==b.marks && a.grade==b.grade){
        printf("Identical\n");
    }
    else{
        printf("Not Identical\n");
    }
    getchar();
    getchar();
    return 0;
}
