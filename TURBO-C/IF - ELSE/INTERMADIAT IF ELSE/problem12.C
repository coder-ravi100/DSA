/*
✅ 3. Find the second largest among three numbers
Jaise a = 50, b = 40, c = 60
Output: 50
*/
#include<stdio.h>
int main()
{
    int a=50,b=40,c=60;
    int max,min,middle;

    max=a;
    if (b > max) max = b; 
    if (c > max) max = c; 
    
    min=a;
    if (b < min) min = b; 
    if (c < min) min = c; 

    middle = (a + b + c) - max - min;
     printf("\n Second Largest is :%d",middle);
    return 0;
}