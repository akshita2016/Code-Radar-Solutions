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
    int count =0;
    
    int freq[N];
    for(int i =0;i<N;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<N;i++)
    {
        if(freq[i]=0)
        {
            count =1;
        
        for(int j=i+1;j<N;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = -1;
            }
        }
        freq[i] = count;
    }
      if(count>N/2)
    {
        printf("%d",count);
    }
    }
  
    else
    printf("-1");
   
}