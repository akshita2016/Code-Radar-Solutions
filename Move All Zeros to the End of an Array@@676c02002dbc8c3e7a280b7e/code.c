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
    int j=0;
    for(int i=0;i<N;i++)
    {
        if(arr[i]!=0)
        { temp =arr[i];
            arr[i]=arr[j];
            arr[j]= temp;
            j++;
        }
    }
    for(int i=0;i<N;i++)
   {printf("%d ",arr[i]);
   }
}