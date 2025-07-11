/* (Middle number using if-else):*/
#include<stdio.h>
int main()
{
   int num1 = 1,num2 = 2,num3 = 3;
   if ((num1 > num2  && num1 < num3)||(num1 > num3 && num1 < num2))
   {
         printf("\n Middle number is: %d", num1);
   }
   else  if ((num2 > num1 && num2 < num3)||(num2 > num3 && num2 < num1))
   {
        printf("\n Middle number is: %d", num2);
   }
   else
   {
        printf("\n Middle number is: %d", num3);
   }

   /*
     (1 > 2 && 1 < 3) → ❌
     (1 > 3 && 1 < 2) → ❌
      Total condition → ❌

     (2 > 1 && 2 < 3) → ✅
     (2 > 3 && 2 < 1) → ❌
      Total condition → ✅

      Excute code Num2
   */
    return 0;
}