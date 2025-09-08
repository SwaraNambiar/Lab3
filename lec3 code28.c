//whether a number is perfect or not
#include <stdio.h>
int main ()
{
    int num,sum;
    sum=;
    printf("Enter a number");
    scanf("%d",&num);
    
    for (int i =1; i<= num/2; i++)
    {
        if (num % i == 0)
        {sum += i;}
    }

    if (sum == num && num != 0)
        printf("%d is a perfect number\t",num);
    else
        printf("%d is not a perfect number\t");
    return o;
}