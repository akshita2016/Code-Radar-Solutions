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
    int temp=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]==0)
        { temp =arr[N-i];
            arr[N-i]=arr[i];
            arr[i]= temp;
        }
    }
    printf("%d",arr[N]);
}