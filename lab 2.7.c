/*7.WAP to store n employees data such as employee name, gender, designation,
department, basic pay etc using structures with dynamically memory allocation.
Calculate the gross pay of each employees as follows:
Gross pay=basic pay + HR + DA
HR=25% of basic, DA=75% of basic*/

#include <stdio.h>
struct employee{
    char name[50];
    int g[10];
    int age;
    int depart[20];
    int salary;
};
int main()
{
    int i, n ,netSalary;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
   struct employee p[n];
    for(i=0; i<n; i++)
    {
        printf("\n");
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",p[i].name);
        printf("Gender: ");
        scanf("%s",&p[i].g);
        printf("Age: ");
        scanf("%d",&p[i].age);
        printf("Designation Department: ");
        scanf("%s",&p[i].depart);
        printf("Basic Salary: ");
        scanf("%d",&p[i].salary);
        p[i].salary = p[i].salary + (75*p[i].salary)/100 + (25*p[i].salary)/100;
    }
    printf("\n");
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n\n");
    for(i=0; i<n; i++){
        printf("Name \t\t: ");
        printf("%s \n",p[i].name);
        printf("Gender \t\t: ");
        printf("%s \n",p[i].g);
        printf("Age \t\t: ");
        printf("%d \n",p[i].age);
        printf("Department \t: ");
        printf("%s \n",p[i].depart);
        printf("Gross Salary \t: ");
        printf("%d \n",p[i].salary);
        printf("\n");
    }
    return 0;
}
