#include <stdio.h>

struct Employee {
    char name[20];
    int id;
    float salary;
    enum Status { ACTIVE, INACTIVE } status;
};

int main() {
    struct Employee e1 = {"Riya", 5, 45000, ACTIVE};

    FILE *f = fopen("emp.dat","wb");
    fwrite(&e1,sizeof(e1),1,f);
    fclose(f);

    struct Employee e2;
    f = fopen("emp.dat","rb");
    fread(&e2,sizeof(e2),1,f);
    fclose(f);

    printf("%s %d %.2f Status: %s\n", e2.name, e2.id, e2.salary, e2.status==ACTIVE?"Active":"Inactive");

    getchar();
    getchar();

    return 0;
}
