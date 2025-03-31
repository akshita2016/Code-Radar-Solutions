int isPrime(int num)
{ int flag =0;
if (num <= 1) {
        printf("0");  // Numbers less than or equal to 1 are not prime
        return 0;
    }
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