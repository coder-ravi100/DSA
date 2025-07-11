/*
✅ 6. Check if any two numbers are equal
Jaise a = 10, b = 20, c = 10
Output: Two numbers are equal
*/
#include<stdio.h>
int main()
{
    int a = 10, b = 20, c = 10;
    if (a == b || a == c || b == c)
    {
        printf("\nTwo numbers are equal");
    }
    else
    {
        printf("\nTwo numbers are Not equal");
    }
    
    return 0;
}