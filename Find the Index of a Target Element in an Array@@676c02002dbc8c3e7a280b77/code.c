#include<stdio.h>
int main()
{
    int N,result=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);

    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<N;i++)
    {
        if(t == arr[i])
        {
            result =i;
             printf("%d",result);
             return 0;
        }
      
    }
   printf("-1");


}