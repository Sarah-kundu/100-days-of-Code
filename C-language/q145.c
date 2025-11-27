#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

struct Student getTopper() {
    struct Student t = {"Neha", 3, 95};
    t.grade = A;
    return t;
}

int main() {
    struct Student s = getTopper();
    printf("%s %d %.2f Grade: %c\n", s.name, s.roll, s.marks, "ABCDF"[s.grade]);

    getchar();
    getchar();
    
    return 0;
}
