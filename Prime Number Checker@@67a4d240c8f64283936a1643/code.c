void isPrime(int num)
{ int flag =0;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag =1;
            break;
        }
    }
if(flag==0)
{
    return 1;
}
else 
return 0;
}