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
    int t;
    scanf("%d",&t);
    for(int i=0;i<N;i++)
    {
        if(arr[t]==arr[i])
        {
            printf("%d",&t);
        }
      
    }
}