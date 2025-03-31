#include<stdio.h>
int main()
{
    int N,peak=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]> arr[i+1])
        {
           peak = arr[i];
            
        }
        else
        return -1;
    }
    if(peak!=0)
    {
        printf("%d",&peak);
    }
return 0;
}