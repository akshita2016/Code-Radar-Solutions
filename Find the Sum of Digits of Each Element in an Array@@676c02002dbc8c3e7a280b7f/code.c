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
    int sum=0;
    int num=0;
    int r=0;
    for(int i=0;i<N;i++)

    { 
         num =arr[i];
         while(num>0)
  {r=num%10;
        sum =sum +r;
        num = num/10;
  }
    }
    for(int i=0;i<N;i++)
    {
    printf("%d ",sum);
    }
}