//to count +ve, -ve, zero values in 200 inputs from user
#include <stdio.h>
int main ()
{
    int value,positive,negative,zero;
    positive=0;
    negative=0;
    zero=0;
    for (int i=1; i <=200; i++)
    {
        printf("Enter a number\t");
        scanf("%d",&value);
        if (value>0)
        {positive += 1;}
        else (value<0)
        {negative += 1;}
        else (value=0)
        {zero += 1;}
    }
printf("The number of positive terms is equal to %d",positive);
printf("The number of negative terms is equal to %d",negative);
printf("The number of terms equal to zero are %d",zero);
}