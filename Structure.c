#include<stdio.h>
struct emp
{
    int empno;
    char empname[20];
    char dname[20];
    int s;
};
int main()
{
    struct emp e[20];
        printf("Enter the employee number\n");
        for(int i=1;i<=20;i++)
            scanf("%d",&e[i].empno);
        printf("Enter the employee name\n");
        for(int i=1;i<=20;i++)
            scanf("%s",e[i].empname);
        printf("Enter the department name\n");
        for(int i=1;i<=20;i++)
            scanf("%s",e[i].dname);
        printf("Enter the salary\n");
        for(int i=1;i<=20;i++)
            scanf("%d",&e[i].s);
       
   
    printf("Empno\t\tEmpname\t\t\tDepartmentname\t\t\t\tSalary\n");
    for(int i=1;i<=20;i++)
    {
        printf("%d\t %s\t %s\t %d\n",e[i].empno,e[i].empname,e[i].dname,e[i].s);
    }
    return 0;
}
