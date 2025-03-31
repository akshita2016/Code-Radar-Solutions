#include<stdio.h>
int main()
{
    int N,peak=-1;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<N;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]> arr[i+1])
        {
           peak = arr[i];
            break;
        }
        if (arr[N - 1] > arr[N - 2]) {
        peak =arr[N-1];
        }
    }
    printf("%d",peak);
return 0;
}