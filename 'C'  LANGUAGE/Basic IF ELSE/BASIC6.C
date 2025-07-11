#include<stdio.h>
int main()
{
    int num1=20,num2=10,num3=30;
    if ((num1 > num2 && num1 < num3)||(num1 > num3 && num1 < num3))
    {
        printf("case 1 MIDDLE NO :%d",num1);
    }
    else if ((num2 > num1 && num2 < num3)||(num2 > num3 && num2 < num3))
    {
        printf("case 2 MIDDLE NO :%d",num2);
    }
    else
    {
        printf("case 3 MIDDLE NO :%d",num3);
    }
    return 0;
}

