//check whether a number is palindrome 121,12321
#include <stdio.h>
int main ()
{
    int num, original, reversed, remainder;
    reversed=0;
    printf("Enter the number");
    scanf("%d",&num);
    original=num;
    remainder = num % 10;
    while (num!=0)
    {
        reversed=(reversed * 10) + remainder;
        num=num/10;
    }
    switch (original==reversed)
    {
        case 1 :
        printf("%d is a palindrome\n",original);
        break;

        case 0 :
        printf("%d is not a palindrome\n",original);
        break;

        default:
        printf("Invalid Input");
    }

    return 0;
}