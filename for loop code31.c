//find the sum of all prime numbers from 1 to 500
#include <stdio.h>
int main ()
{
    int i,n,m,sum;
    i=1;
    n=500;
    m=n%i;
    sum=0;
    for (i=1;i<=n;i++)
    {
        if (m==0)
        {printf("%d\t",n);}
        if (i>=(n/2))
        {break;}
        sum+=n;
        printf("The sum of all the prime numbers is %d",sum);
    }
    return 0;
}