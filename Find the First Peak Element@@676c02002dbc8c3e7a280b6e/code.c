#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]> arr[i+1])
        {
            printf("%d",arr[i]);
            break;
        }
        else
        return -1;
    }

}