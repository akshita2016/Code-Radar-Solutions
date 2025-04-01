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
    int isPalindrome =1;
    for(in i=0;i<N/2;i++)
    {
        if(arr[i] != arr[N-i-1])
        {
            isPalindrome =0;
        }
    }
    if(isPalindrome)
    {
        printf("YES");
    }
    else
    printf("NO");
}