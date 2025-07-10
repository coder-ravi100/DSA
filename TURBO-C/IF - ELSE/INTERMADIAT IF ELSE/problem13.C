/*
✅ 4. Find the median of three numbers (not mean!)
Jaise a = 9, b = 5, c = 7
Output: 7 (kyunki beech wala hai)
*/
#include<stdio.h>
int main()
{
    int a = 9, b = 5, c = 7;
    int max,min,median;

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    median = (a + b + c) - max - min;
    printf("\n Second Largest is :%d",median);
    return 0;
}
 