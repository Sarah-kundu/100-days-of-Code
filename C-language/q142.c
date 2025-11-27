#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

int main() {
    struct Student s[5];

    for(int i=0; i<5; i++) {
        printf("Enter name roll marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);

        if (s[i].marks >= 90) s[i].grade = A;
        else if (s[i].marks >= 80) s[i].grade = B;
        else if (s[i].marks >= 70) s[i].grade = C;
        else if (s[i].marks >= 60) s[i].grade = D;
        else s[i].grade = F;
    }

    for(int i=0; i<5; i++) {
        printf("%s %d %.2f %c\n", s[i].name, s[i].roll, s[i].marks, "ABCDF"[s[i].grade]);
    }
    getchar();
    getchar();
    return 0;
}
