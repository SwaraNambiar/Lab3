//print sum of first n even nos.
#include <stdio.h>
int main ()
{
    int i,n,sum;
    i=0;
    sum=0;
    printf("Enter any number\t");
    scanf("%d",&n);
    for (i=0; i<=n,i=(2*n)-1)
    {
        sum=sum+i;
        printf("Sum of %d numbers is %d",n,sum);
    }
}