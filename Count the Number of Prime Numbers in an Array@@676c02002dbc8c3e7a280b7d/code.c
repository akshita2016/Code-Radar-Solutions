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
    int isPrime =0;
    int count =0;
    for(int i =0;i<N;i++)
    {
        for(int j=2;j<N;j++)
        {
            if(arr[i]%j==0)
            {
              isPrime =1;
              count ++;
              break;
            }
        }
        
    }
    if(isPrime)
    { printf("%d ",&count);

    }
}  
