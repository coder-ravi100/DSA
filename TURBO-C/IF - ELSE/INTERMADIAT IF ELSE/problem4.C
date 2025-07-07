/*Check whether the triangle is **valid or not** using 3 sides*/
/*Triangle Validity Rule (Triangle Inequality Theorem)
A triangle is valid only if the sum of any two sides is greater than the third side.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the side 1:");//1
    scanf("%d",&a);
    printf("\nEnter the side 2:");//2
    scanf("%d",&b);
    printf("\nEnter the side 3:");//3
    scanf("%d",&c);
    /*1+2=3 1+3=4 2+3=5 Condition False*/
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("\n Triangle is Valid");
    }
    else  
    {
        printf("\n Triangle is Not Valid");
    }
    return 0;
}
/*Dry Run Code
a=5 + b=6 > c=7 = 11 true
a=5 + c=7 > b=6 = 12 true
b=6 + c=7 > a=5 = 13 true*/

/*Second Dry Run Code Ex:1,2,3
a=1 + b=2 > c=3 false*/