//reverse a number
#include <stdio.h>
int main ()
{
    int value, reversed, remainder;
    printf("Enter any number");
    scanf("%d",value);
    reversed = 0;
    while (value!=0)
    {
        remainder = value / 10;
        reversed = (reversed * 10) + remainder
        value= value / 10;
    }
    printf("Reversed Number",reversed)
}