/*User Enter  value then store*/
#include<stdio.h>
int main()
{

     char name[50];
     int salary;
     char destination[50];
     printf("\n Enter Employees Name :");
     scanf("%s",&name);
     printf("\n Enter Employees Salary:");
     scanf("%d",&salary);
     printf("\n Enter Employees Destination :");
     scanf("%s",&destination);

     printf("\n Employees Name :%s",name);
     printf("\n Employees Salary :%d",salary);
     printf("\n  Employees Destination :%s",destination);
    return 0;
}