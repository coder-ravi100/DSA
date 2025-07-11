/*Find the **middle number** among three numbers */

/*"Middle Number" Ka Matlab?
Na woh sabse bada hona chahiye.

Na woh sabse chhota hona chahiye.

Dono ke beech ka number hona chahiye.*/
#include<stdio.h>
int main()
{
    int a=89,b=47,c=87;
    int max,min,middle;
    
    max=a;
    if (b > max) max = b;
    if (c > max) max = c;

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    middle =  (a + b + c) - max - min;
    
    printf("\n Middle Value Is :%d",middle);
    return 0;
}
/*
Dry Run

a=40 b=10 c=30
max = a;
max = 40
if(b > max) ---> 10 > 40 ❌ 'A' is Big
if(c > max) ---> 30 > 40 ❌

min = a
min = 40
if(b < min) ---> 10 < 40 ✅ 'B' is small
if(c < min) ---> 30 < 40 ❌
Than Finally C --->  is Middle ✅

middle = (a + b + c) - max - min
middle = (40 + 10 + 30) - 40 - 10
middle = 30 ✅


-----------------------------------------------------

a=12 b=19 c=43
max = a;
max = 12
if(b > max) ---> 19 > 12 
if(c > max) ---> 43 > 12  ✅ 'C' is Big

min = a;
if(b < min) ---> 19 < 12 ✅ 'B' is small
if(c < min) ---> 43 < 12 

middle = (a + b + c) - max - min
middle = (12 + 19 + 43) - 43 - 19
middle = 19
*/
