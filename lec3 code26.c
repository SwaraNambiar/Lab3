//check if a number is armstrong input number from user
#include <stdio.h>
int main ()
{
    int num, original, remainder, result;
    result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    original = num;
    while (num!=0)
    {
        remainder = num % 10;
        result = result + (remainder*remainder*remainder);
        num=num/10;
    }
    if (result == original)
    printf("%d is an Armstrong number.\n",original);
    else
    printf("%d is not an Armstrong.\n",original);
    return 0;
}