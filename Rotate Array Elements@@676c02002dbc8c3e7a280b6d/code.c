#include<stdio.h>
int N;
scanf("%d",&N);

int arr[N];
for(int i=0;i<=N;i++)
{
    scanf("%d",&arr[i]);
}
int k;
scanf("%d",&k);
int arr[k],len=arr.size();
for(int i=0;i<=k;i++)
{
    arr[k+i] =arr[i];
}
for(int i=0;i<len -1;i++)

{printf("%d",arr[i]);
}