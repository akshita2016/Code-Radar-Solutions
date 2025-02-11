#include<stdio.h>
int main()
{
    int cost,sell,total;
    scanf("%d%d",&cost,&sell);
total=sell - cost;
    if(total> cost)
    {
        printf("Profit");
    }
    else if(total==cost)
{
    printf("No Profit No Loss");
}
else
{
    printf("Loss");
}
}