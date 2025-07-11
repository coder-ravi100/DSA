/*
✅ 2. Find the minimum among three numbers
Jaise a = 20, b = 5, c = 30
Output: 5
*/
#include<stdio.h>
int main()
{
    int a=20,b=5,c=30;
    int min;

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    
    printf("\n Minimum Number is :%d",min);
    return 0;
}
