#include<stdio.h>
int main()
{
    int cost,sell,total;
    scanf("%d%d",&cost,&sell);
total=sell - cost;
    if(total> 0)
    {
        printf("Profit");
    }
    else if(total==0)
{
    printf("No Profit No Loss");
}
else
{
    printf("Loss");
}
}