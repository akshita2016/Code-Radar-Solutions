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
    int max =arr[0];
    int min =arr[0];
    for(i=0;i<N;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];

        }
        
    }
    for(i=0;i<N;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];

        }
        
    }
    printf("%d %d",max,min);
}