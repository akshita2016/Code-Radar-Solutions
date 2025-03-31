#include<stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);
    if(N<2)
    {
       printf("-1");
    }
    int arr[N];
    for(int i=0;i<N;i++)
   { scanf("%d",&arr[i]);

}
int max=arr[0],max2=arr[0];
for (int i=1;i<N;i++)
{
    if (max<arr[i])
    {    max2=max;
        max =arr[i];
    }
    else if (arr[i] > max2 && arr[i] != max)
     {
            max2 = arr[i]; 
        }
   
}
if (max2 == arr[0]) {
        printf("-1");
}
printf("%d",max2);
}