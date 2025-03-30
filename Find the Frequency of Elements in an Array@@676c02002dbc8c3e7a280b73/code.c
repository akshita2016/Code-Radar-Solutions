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
    int temp[N];
    for(int i=0;i<N;i++)
    {
        temp[i]=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp[i];

    }
    int freq[N];
    for(int i=0;i<N;i++)
    {
        if(arr[i]==arr[i+1])
        {
            freq[i]++;
        }
    }
    for(int i=0;i<N;i++)
    {
    printf("%d",freq[i]);
    }
}