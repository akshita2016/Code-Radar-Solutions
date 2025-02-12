#include<stdio.h>
int main()
{
    int a,b,value;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    if(c=='+');
    {
       value = a+b;
    }
    else if(c=='-');
    {
        value = a-b;
    }
    else if(c=='*');
    {
        value = a*b;
    }
    else if(c=='/');
    {
        value = a/b;
    }
    else
   { printf("not valid");
   }
    printf("%d",value);
}