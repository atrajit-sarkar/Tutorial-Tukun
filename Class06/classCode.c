#include <stdio.h>
#include <string.h>

struct Address
{
    char city[50];
    char street[50];
    int zipcode;
};

struct Employee
{
    int id;
    char name[50];
    float salary;
    struct Address adress;
};

int main()
{
    struct Employee employee;
    employee.id = 100; // id
    strcpy(employee.name, "Hrisav Sarkar"); //name
    employee.salary = 123.456; //salary
    employee.adress.zipcode = 741302;
    strcpy(employee.adress.city,"Nabadwip");
    strcpy(employee.adress.street,"PC Ghosh Road");

    printf("%d\n",employee.id);
    printf("%s\n",employee.name);
    printf("%f\n",employee.salary);
    printf("%d\n",employee.adress.zipcode);
    printf("%s\n",employee.adress.city);
    printf("%s\n",employee.adress.street);

    return 0;
}