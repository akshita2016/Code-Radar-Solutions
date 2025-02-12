#include<stdio.h>
int main()
{
    int a,b,value;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    switch(c)
 {  case '+':
    {
       value = a+b;
    }
     case '-':
    {
        value = a-b;
    }
     case '*':
    {
        value = a*b;
    }
     case '/':
    {
        value = a/b;
    }
   
    printf("%d",value);
}