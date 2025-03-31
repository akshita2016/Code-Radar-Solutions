int isPrime(int num)
{ int flag =0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag =1;
            break;
        }
    }
if(flag==0)
{
  printf("1");
}
else 
printf("0");
}