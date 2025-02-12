#include<stdio.h>
int main()
{
    int num,i,Jasoos;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
       if(num%i==0)
      { Jasoos=0;
     
       break;
      }
    }
    if(Jasoos==1)
    {
        printf("Prime");
    }
    else 
    printf("Not Prime");
}