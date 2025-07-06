/* Input marks of 5 subjects and print **total, percentage, and grade (A/B/C/Fail)*/
#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    int percentage,total;
    printf("== Enter The Marks ==");
    printf("\nsub 1 :");
    scanf("%d",&sub1);
    printf("sub 2 :");
    scanf("%d",&sub2);
    printf("sub 3 :");
    scanf("%d",&sub3);
    printf("sub 4 :");
    scanf("%d",&sub4);
    printf("sub 5 :");
    scanf("%d",&sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total/500.0)*100;
    printf("\n Total Of Marks :%d",total);
    printf("\n Percentage is : %.2f", (float)percentage);
    
    if (percentage >= 90)
    {
        printf("\n Grade A");
    }
    else if (percentage >= 80)
    {
        printf("\n Grade B");
    }
    else if (percentage >= 50)
    {
         printf("\n Grade C");
    }
    else{
         printf("\n Fail");
    }
    return 0;
}