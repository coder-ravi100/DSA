/*FIND TWO NUMBER WHITCH NUMBER IS BIGGEST AND EQUAL NUMBER*/
#include<stdio.h>
int main()
{
    int num1 = 1, num2 = 2;
    if (num1 > num2)
    {
        printf("\nthe biggest number is :%d",num1);
    }
    else if (num1 == num2)
    {
        printf("\n Both the number are equal");
    }
    else
    {
       printf("\nthe biggest number is :%d",num2);
    }
    return 0;
}