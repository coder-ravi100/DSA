/* Question 2: "A company gives bonus on salary..."
   Iska matlab kya hai?
Tujhe ek salary amount di jaayegi (maan le ₹40000).
Us salary ke base par company bonus de rahi hai.*/
/*
Salary Range             Bonus %

 Salary > 50000          10%     
 Salary 30000 – 50000    7%    
 Salary < 30000          5%      
*/
#include<stdio.h>
int main()
{
    long int salary = 40000;
    float bonus = 7;
    long int amount;
    
    if (salary > 50000)
    {
        amount = salary / 100 * 10;
        printf("\n Bonus :%d",amount);
    }
    else if (salary >= 30000 && salary <= 50000)
    {
       amount = salary / 100 * 7;
        printf("\n Bonus :%d",amount);
    }
    else{
        amount = salary / 100 * 5;
        printf("\n Bonus :%d",amount);
    }
    return 0;
}