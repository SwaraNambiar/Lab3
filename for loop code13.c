//print sum of all numbers divisible by 13 from 1 to 100
#include <stdio.h>
int main ()
{
    int m,n,sum;
    n=1;
    sum=0;
    for (n=1; n<=100;n++)
    {
        m=n%13;
        if(m==0)
        {sum+=n;}
    }
    printf("The sum of the numbers divisible by 13 from 1 to 100 is %d",sum);  
}