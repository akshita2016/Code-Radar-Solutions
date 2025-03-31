int isPrime(int num)
{ int flag =0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag =1;
            break;
            return 0;
        }
    }

    if(flag==0)
{
  printf("%d",1);
}
else 
printf("%d",0);
}