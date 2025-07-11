/*Check whether a given year is **century year or not*/
/*What is a Century Year?
A century year is a year that ends with "00" —
In other words, it's exactly divisible by 100.*/

/*Examples of Century Years:
1700, 1800, 1900, 2000, 2100
(Ye sab 100 se divide ho jaate hain)*/
#include<stdio.h>
int main()
{
    int year=2100;
    if (year % 100 == 0)
    {
        printf("\n%d It is a century year", year);   
    }
    else{
        printf("\n%d Not a century year", year);   
    }
    return 0;
}