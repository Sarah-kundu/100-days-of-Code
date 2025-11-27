#include <stdio.h>

struct Date { int d,m,y; };

struct Employee {
    char name[20];
    int id;
    struct Date join;

    enum Department { HR, SALES, IT } dept;
};

int main() {
    struct Employee e = {"Ravi", 101, {12,5,2020}, IT};

    printf("Name: %s\nID: %d\nJoined: %d-%d-%d\nDepartment: ",
           e.name, e.id, e.join.d, e.join.m, e.join.y);

    switch(e.dept){
        case HR: printf("HR\n"); break;
        case SALES: printf("Sales\n"); break;
        case IT: printf("IT\n"); break;
    }

    getchar();
    getchar();

    return 0;
}
