/*FIND THREE NUMBER WHITCH NUMBER IS BIGGEST SECOND LOGIC*/
#include<stdio.h>
int main()
{
    int num1 = 10,num2 = 20, num3 = 30;
    if (num1 > num2 && num1 > num3)
    {
       printf("\n the biggest number :%d",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("\n the biggest number :%d",num2);  
    }
    else
    {
        printf("\n the biggest number :%d",num3);
    }
    return 0;
}