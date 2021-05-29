 
#include <stdio.h>
struct employee{
    char    name[30];
    int     age;
    float   salary;
    long long int phn;
};
 
int main()
{
    struct employee emp;
 
    printf("\nEnter details :\n");
    printf("Name :");          gets(emp.name);
    printf("age ?:");            scanf("%d",&emp.age);
    printf("Ph.no:");            scanf("%lld",&emp.phn);
    printf("Salary:");     scanf("%f",&emp.salary);
  
    printf("\nEntered detail is:");
    printf("Name: %s\n"   ,emp.name);
    printf("Age: %d\n"     ,emp.age);
    printf("Phone no: %lld\n",emp.phn);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
