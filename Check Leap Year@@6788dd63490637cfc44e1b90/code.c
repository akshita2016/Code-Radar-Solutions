#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%400==0)
    {
        printf("Leap Year");
    }
    else if(num%100==0)
    {
        printf("Not a Leap Year");
    }
    else if(num%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}