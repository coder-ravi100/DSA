/*/*
✅ 1. Find the maximum among three numbers
Jaise a = 10, b = 25, c = 15
Output: 25
*/
#include<stdio.h>
int main()
{
    int a=10,b=25,c=15;
    int Maximum,max;
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    Maximum = (a + b + c) - max ;
    printf("\n Maximum Number is :%d",Maximum);
    return 0;
}