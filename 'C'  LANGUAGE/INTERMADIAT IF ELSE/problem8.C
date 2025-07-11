/*Take a number and print whether it is **even & divisible by 3** */
/*Even No: remainder = 0 */
#include<stdio.h>
int main()
{
    int num = 22;

    if (num % 2 != 0 && num % 3 == 0)
    {
        printf("\n Even number And Divisible By 3 :%d",num);
    }
    else
    {
        printf("\n Not Even Number And Not Divisible By 3:%d",num);
    }
    return 0;
}