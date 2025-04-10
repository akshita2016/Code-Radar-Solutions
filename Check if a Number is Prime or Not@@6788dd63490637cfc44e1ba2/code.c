#include<stdio.h>
int main()
{
    int num,i,Jasoos;
    scanf("%d",&num);
    if(num ==2)
    {
        printf("Prime");
    }
    for(i=2;i<num;i++)
    {
       if(num%i==0)
      { Jasoos=1;
     
       break;
      }
    }
    if(Jasoos=0)
    
        printf("Prime");
    
    else 
    printf("Not Prime");
}