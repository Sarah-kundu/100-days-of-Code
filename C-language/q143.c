#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
    enum Grade { A, B, C, D, F } grade;
};

int main() {
    struct Student s[5];

    for(int i=0;i<5;i++){
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        if (s[i].marks >= 90) s[i].grade = A;
        else if (s[i].marks >= 80) s[i].grade = B;
        else if (s[i].marks >= 70) s[i].grade = C;
        else if (s[i].marks >= 60) s[i].grade = D;
        else s[i].grade = F;
    }

    int maxIndex = 0;
    for(int i=1;i<5;i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }

    printf("Topper: %s %.2f Grade: %c\n",
           s[maxIndex].name, s[maxIndex].marks, "ABCDF"[s[maxIndex].grade]);
    }

    getchar();
    getchar();
    
    return 0;
}
