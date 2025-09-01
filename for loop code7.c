//print sum of n natural numbers input n 
#include <stdio.h>
int main ()
{
    int sum,i,n;
    i=1;
    sum=0;
    printf("Enter the number\t");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        sum=sum+i;
        printf("Sum of %d numbers is %d",n,sum);
    }
}