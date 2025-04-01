#include<stdio.h>
int main ()
{
    int N,rev=0,r=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int N1=N;
    while(N1!=0)
    {
        r=arr[N1]%10;
        rev = rev*10+r;
        arr[N1]=arr[N1]/10;

    }
    if(rev ==arr[ N])
    {
        printf("YES");
    }
    else
    printf("NO");
}