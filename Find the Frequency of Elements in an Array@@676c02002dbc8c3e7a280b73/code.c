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
                freq[j] = 0;
            }
        }
        freq[i] = count;
    }
    }
    for(int i=0;i<N;i++)
    {
   if(freq[i]!= 0) 
   {
    printf("%d: %d\n",arr[i],freq[i]);
   }
    }
}