//calculate sum and mean of any n values
#include <stdio.h>
int main ()
{
    int i,n,sum,mean;
    i=1
    printf("Enter the number of entries");
    scanf("%d",&n);
    sum=0
    for(i=1;i<=n;i++)
    {
        printf("Enter any %d values",n);
        scanf("%d",i);
        sum+=i;
        mean=sum/i;
        printf("The sum is %d\n Mean is %d",sum,mean);
    }
}