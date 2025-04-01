#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    int count =0,num;
    for(int i =0;i<N;i++)
    { num = arr[i];
    if(num<2)
    continue;
     int isPrime =0;
        for(int j=2;j*j<=num;j++)
        {
            if(num%j==0)
            {
              isPrime =1;
              
              break;
            }
        }
        if(isPrime)

    {count++;
        

    }
    }
     printf("%d ",count);
}  
