#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

void display(struct Student s){
    printf("Name: %s\nRoll: %d\nMarks: %.2f\nGrade: %c\n",
           s.name, s.roll, s.marks, "ABCDF"[s.grade]);
}

int main() {
    struct Student s = {"Rahul", 5, 89};
    s.grade = B;

    display(s);

    getchar();
    getchar();
    
    return 0;
}
