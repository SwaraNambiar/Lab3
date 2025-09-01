#include <stdio.h>
int main ()
{
    int m,n,;
    n=1;
    for (n=1; n<=100;n++)
    {
        m=n%5;
        if(m==0)
        {
            printf("%d\t",n);
        }

    }
}