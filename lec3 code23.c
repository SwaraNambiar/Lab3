//summation of digits of number from user
#include <stdio.h>
int main ()
{
    int num, sum, remainder;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&num);

    while (num!=0)
    {
        remainder=num%10;
        sum=sum+remainder;
        num=num/10;
    }
    printf("Sum of digits=%d\t",sum);
    return 0;
}