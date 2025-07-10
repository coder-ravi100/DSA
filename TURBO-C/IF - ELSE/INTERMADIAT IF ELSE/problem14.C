/*
✅ 5. Check if all three numbers are equal
Jaise a = 15, b = 15, c = 15
Output: All are equal
*/
#include<stdio.h>
int main()
{
    int a = 15, b = 15, c = 15;
    int max , min , Equal;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
  
    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    
    //Equal = (a+b+c) - max - min;
    Equal = max,min;
    printf("\n all three numbers are equal :%d",Equal);
    return 0;
}