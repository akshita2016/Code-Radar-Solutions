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
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(freq[arr[i]]>0){
            printf("%d %d\n",arr[i],freq[arr[i]]);
            freq[arr[i]]=0;
        }

    }
}
