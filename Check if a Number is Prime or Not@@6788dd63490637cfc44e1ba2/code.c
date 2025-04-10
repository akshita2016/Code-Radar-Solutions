#include<stdio.h>
int main()
{
    int num,i,Jasoos;
    scanf("%d",&num);
    
    for(i=2;i<num;i++)
    {
       if(num%i==0)
      { if(num ==2)
    {
       Jasoos=0;
       break;
        
    }
        
        Jasoos=1;
     
       break;
      }
    }
    if(Jasoos=0)
    
        printf("Prime");
    
    else 
    printf("Not Prime");
}