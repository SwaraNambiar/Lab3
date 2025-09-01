//print all prime numbers from 1 to 500
#include <stdio.h>
int main ()
{
    int i,n,m;
    i=1;
    n=500;
    m=n%i;
    for (i=1;i<=n;i++)
    {
        if (m==0)
        {
            printf("%d\t",n);
        }
        if (i>=(n/2))
        {
            break;
        }
    }
    return 0;
}