//count the digits of a number
#include <stdio.h>
int main ()
{
    int value,count;
    count = 0;
    printf("Enter any number");
    scanf("%d",&value);

    if (value==0)
    {count = 1;}

    else if (value<0)
    {value=-value;}

    while (value>0)
    {
        value=value/10;
        count++;
        printf("The number of digits is %d",count);
    }
}