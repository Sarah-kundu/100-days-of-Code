#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter name roll marks: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);

    if (s->marks >= 90) s->grade = A;
    else if (s->marks >= 80) s->grade = B;
    else if (s->marks >= 70) s->grade = C;
    else if (s->marks >= 60) s->grade = D;
    else s->grade = F;

    printf("\nStudent Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\nGrade: %c\n", s->name, s->roll, s->marks, "ABCDF"[s->grade]);
    free(s);
    getchar();
    getchar();
    return 0;
}
