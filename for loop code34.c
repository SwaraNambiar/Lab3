//print fibonacci series
#include <stdio.h>
int main ()
{
    int i,j,sum;
    i=0;
    for (i=0; ;i=i++)
    {
        printf("%d\n",i);
        sum=i+j;
        i=j;
        j=sum;
    }
}