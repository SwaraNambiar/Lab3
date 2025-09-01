//calculate sum and mean of any 10 values input from user
#include <stdio.h>
int main ()
{
    int i,n,sum,mean,value;
    i=1;
    n=10;
    sum=0;
    for(i=1;i<=n;i++)
    {
        printf("Enter any 10 values\n");
        scanf("%d",&value);
        sum += value;
        mean= (float)sum/n;
        printf("The sum is %d\n Mean is %.2f",sum,mean);
    }
}