/*Find the **profit or loss** from cost price and selling price
A company gives bonus on salary:*/

#include<stdio.h>
int main()
{
    long int cost_price;
    long int selling_price;
    printf("\n Enter Cost Price :");
    scanf("%d",&cost_price);
    printf("\n Enter Selling Price :");
    scanf("%d",&selling_price);

    if (cost_price < selling_price )
    {
        printf("\n Profit");
    }
    else if (cost_price > selling_price)
    {
        printf("\n Loss");
    }
    else
    {
        printf("\n No Loss No Profiit");
    }
    
    return 0;
}