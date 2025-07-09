/*Find the **middle number** among three numbers */

/*"Middle Number" Ka Matlab?
Na woh sabse bada hona chahiye.

Na woh sabse chhota hona chahiye.

Dono ke beech ka number hona chahiye.*/
#include<stdio.h>
int main()
{
    int a , b , c;
    int middle;
    printf("\nEnter The Number 1:");
    scanf("%d",&a);
    printf("\nEnter The Number 2:");
    scanf("%d",&b);
    printf("\nEnter The Number 3:");
    scanf("%d",&c);
    

   if ((a > b && a < c) || (a < b && a > c))
   {
    middle = a;
   }
   else if ((b > a && b < c) || (b < a && b > c))
   {
    middle = b;
   }
   else
   {
    middle = c;
   }
    printf("\nMiddle number is: %d", middle);

    return 0;
}
