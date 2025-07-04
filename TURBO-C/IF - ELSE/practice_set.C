/*
| No. | Program Description                                                 |
| --- | ------------------------------------------------------------------- |
| 1.  | Check whether a number is **even or odd**                           |
| 2.  | Check whether a number is **positive, negative or zero**            |
| 3.  | Find the **largest of two numbers**                                 |
| 4.  | Find the **largest of three numbers** using nested if               |
| 5.  | Check whether a number is **divisible by 5 and 11**                 |
| 6.  | Check whether a number is **prime or not** (basic logic)            |
| 7.  | Check whether a year is **leap year or not**                        |
| 8.  | Take marks and print **Grade (A, B, C, Fail)** using else-if ladder |
| 9.  | Check whether a character is **vowel or consonant**                 |
| 10. | Check whether a person is **eligible to vote** (age >= 18)          |*/
#include<stdio.h>
int main()
{
    int even_odd=10;
    if (even_odd % 2 == 0)
    {
        printf("\nEven :%d",even_odd);
    }
    else
    {
        printf("\nOdd :%d",even_odd);
    }
    printf("\n---------------------------");
    int positive_negative_zero=1;
    if (positive_negative_zero>0)
    {
        printf("\nPositive :%d",positive_negative_zero);
    }
    else if (positive_negative_zero<0)
    {
      printf("\nNegative");
    }
    else
    {
        printf("\nZero");
    }
    printf("\n---------------------------");
    int large1=10,large2=20,large3=30;
    if (large1 > large2)
    {
        printf("\nThe Largest Number is :%d",large1);
    }
    else
    {
         printf("\nThe Largest Number is :%d",large2);
    }
    if (large3 > large2)
    {
        printf("\nThe Largest Number is :%d",large3);
    }
    else
    {
         printf("\nThe Largest Number is :%d",large2);
    }
    printf("\n---------------------------");
    int biggest1=10,biggest2=20,biggest3=30;
    if (biggest1>biggest2)
    {
        if (biggest1>biggest3)
        {
           printf("\nBiggest Nuumber is :%d",biggest1);
        }
        else
        {
            printf("\nBiggest Nuumber is :%d",biggest2);
        }
    }
    if (biggest2>biggest3)
    {
        printf("\nBiggest Nuumber is :%d",biggest2);
    }
    else
    {
         printf("\nBiggest Nuumber is :%d",biggest3);
    }
    printf("\n---------------------------------------");
    int divide=55;
    if (divide % 5 == 0 && divide % 11 == 0)
    {
         printf("\nThis Nuumber is Divided By 5 and 11 :%d",divide);
    }
    else
    {
         printf("\nThis number is Not Divided By 5 and 11 :%d",divide);
    }
     printf("\n---------------------------------------");
    int prime=9;
    if (prime %2!= 0)//bro prime ka logic mujhe nahi aata 
    {
        printf("\n Number is prime :%d",prime);
    }
    else
    {
       printf("\n Number is Not prime :%d",prime); 
    }
     printf("\n---------------------------------------");
     int year=2024;
     if (year %100!=0 && year %4 == 0) 
        {
             printf("\n Leap Year :%d",year);
        }
        else
        {
            printf("\nNot Leap Year :%d",year);
        }
      printf("\n---------------------------------------");
      int marks=90;
      if (marks >=90)
      {
        printf("\n A Grade");
      }
      else  if (marks >=70)
      {
         printf("\n B Grade");
      }
      else if (marks >=40)
      {
         printf("\n C Grade");
      }
      else 
      {
         printf("\n Fail");
      }
      printf("\n---------------------------------------");
      char alphabet = 'A';
      if (alphabet == 'A' || alphabet =='E' || alphabet =='I' || alphabet == 'O' 
        || alphabet == 'U' && alphabet =='a' || alphabet == 'e' || alphabet ==  'i'
    ||  alphabet == 'o' || alphabet == 'u')
      {
        printf("\n This is vowel : %c",alphabet);
      }
      else
      {
        printf("\n This is Consonant : %c",alphabet);
      }
      printf("\n---------------------------------------");
      int age=18;
      if (age >= 18)
      {
        printf("\n Eligible For Vote :%d ",age);
      }
      else
      {
        printf("\nNot Eligible For Vote :%d ",age);
      }
       printf("\n---------------------------------------");
    return 0;
}