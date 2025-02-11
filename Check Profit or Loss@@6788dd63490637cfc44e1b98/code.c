#include<stdio.h>
int main()
{
    int cost,sell;
    scanf("%d%d",&cost,&sell);
    if(sell-cost> cost)
    {
        printf("Profit");
    }
    else if(sell-cost<cost)
{
    printf("Loss");
}
else
{
    printf("No Profit No Loss");
}
}