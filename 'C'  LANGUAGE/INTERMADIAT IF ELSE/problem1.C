/*
| No.                                        | Problem Description                                                               |
| ------------------------------------------ | --------------------------------------------------------------------------------- |
| 1.                                         | Check whether a character is **uppercase, lowercase, digit, or special symbol**   |
| 2.                                         | Take a number from user and check if it is **3-digit positive number or not**     |
| 3.                                         | Input marks of 5 subjects and print **total, percentage, and grade (A/B/C/Fail)** |
| 4.                                         | Check whether the triangle is **valid or not** using 3 sides                      |
| 5.                                         | Check whether a given year is **century year or not**                             |
| 6.                                         | Find the **profit or loss** from cost price and selling price                     |
| 7.                                         | A company gives bonus on salary:                                                  |
|   If salary > 50000 → 10% bonus            |                                                                                   |
|   If salary between 30000–50000 → 7% bonus |                                                                                   |
|   Else → 5% bonus                          |                                                                                   |
| 8.                                         | Take a number and print whether it is **even & divisible by 3**                   |
| 9.                                         | Find the **middle number** among three numbers                                    |
| 10.                                        | Check whether given angles can form a **triangle or not** (sum of angles = 180)   |

*/
#include<stdio.h>
int main()
{
   char ch;
   printf("\n Enter the value :");
   scanf(" %c",&ch);
    
    if (ch >= 'A' && ch <= 'Z') 
    {
        printf("\n Uppercase");
    }
   else if (ch >= 'a' && ch <= 'z')
   {
        printf("\n Lowercase");
   }
   else if (ch >= '0' && ch <= '9')
   {
        printf("\n Digits");
   }
   else
   {
        printf("\n Special Symbol");
   }
    return 0;
}