#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[N]);
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i+1]<arr[i])
        {
            printf("Not Sorted");
        }
        else
        printf("Sorted");
    }
}