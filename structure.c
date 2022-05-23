#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int id;
    double salary;
    char dept[30];
} Employee;

int main()
{
    //Number of employees
    int n=20;

    //Array to store structure values of all employees
    Employee employees[n];

    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);

        //ID
        printf("Id: ");
        scanf("%d",&employees[i].id);

        //Dept
        printf("Department: ");
        scanf("%s",employees[i].dept);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        //char ch = getchar();

        printf("\n");
    }

    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Id \t: ");
        printf("%d \n",employees[i].id);

        printf("Dept \t: ");
        printf("%s \n",employees[i].dept);

        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);

        printf("\n");
    }

    return 0;
}
