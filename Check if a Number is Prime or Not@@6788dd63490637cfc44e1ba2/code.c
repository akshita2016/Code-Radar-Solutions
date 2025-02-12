#include<stdio.h>
int main()
{
    float num,i,Jasoos;
    scanf("%f",&num);
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