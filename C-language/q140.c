#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[20];
    enum Gender g;
};

int main() {
    struct Person p = {"Amit", MALE};
    printf("Name: %s\nGender: %s\n", p.name, p.g == MALE ? "Male" : "Female");

    getchar();
    getchar();
    
    return 0;
}
