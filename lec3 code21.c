//separate the digits of numbers
#include <stdio.h>
int main ()
{
    int num,digit;
    printf("Enter any number");
    scanf("%d",&num);
    printf("Digits are separated");
    while (num>0)
    {
        digit = num % 10;
        printf("%d",digit);
        num=num/10;
    }
    return 0;
}