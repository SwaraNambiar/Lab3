//how many numbers are prime nos. from 1 to 500
#include <stdio.h>
int main ()
{
    int i,n,m,value;
    i=1;
    n=500;
    m=n%i;
    value=0;
    for (i=1;i<=n;i++)
    {
        if (m==0)
        { value+=1; }
        if (i>=(n/2))
        { break; }
    }
    printf("The number of prime nos. from 1 to 500 is %d",value);
    return 0;
}