#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {for(j=0;j<n;j++)
    { printf("* ",i);
    }
    printf("\n")
    }

}