#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

int main() {
    struct Student s;

    printf("Enter name roll marks (0-100): ");
    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    if (s.marks >= 90) s.grade = A;
    else if (s.marks >= 80) s.grade = B;
    else if (s.marks >= 70) s.grade = C;
    else if (s.marks >= 60) s.grade = D;
    else s.grade = F;

    printf("Name: %s\nRoll: %d\nMarks: %.2f\nGrade: %c\n", s.name, s.roll, s.marks, "ABCDF"[s.grade]);
    getchar();
    getchar();
    return 0;
}
