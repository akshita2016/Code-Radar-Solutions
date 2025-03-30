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
   int isSorted =1;
    for(int i=0;i<N;i++)
    {
        if(arr[i+1]<arr[i])
        {
            isSorted =0;
            break;
        }
        
    }
  if(  isSorted) ==1;
  printf("Sorted\n");
  else
  printf("Not Sorted");
}