/*FIND THREE NUMBER WHITCH NUMBER IS BIGGEST */
#include<stdio.h>
int main()
{
    int num1 = 10, num2 = 20, num3 = 50;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
             printf("\nthe biggest number is :%d",num1);
        }
        else
        {
             printf("\nthe biggest number is :%d",num3);
        }
    }
    if (num2 > num3)
    {
         printf("\nthe biggest number is :%d",num2);
    }
    else
    {
         printf("\nthe biggest number is :%d",num3);
    }
    return 0;
}