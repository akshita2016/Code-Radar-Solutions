#include<stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
  {  scanf("%d",&arr[i]);
  }
  int k;
  scanf("%d",&k);
  k=k%N;
  int temp[k];

  for(int i=0;i<N;i++)
  { temp[(k+i)%N] =arr[i];
    
  }
  for(int i=0;i<N;i++)
  {
    printf("%d",temp[i]);
  }
}