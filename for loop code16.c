//find out largest and smallest out of any 100 valuse from the user
#include <stdio.h>
int main ()
{
    int s,l,i;
    for (i=1;i<=100;i++)
    {
        printf("Enter any value\t");
        scanf("%d",i);
        s=i;
        l=i;
        if(i<s)
        {
            s=i;
            printf("The smallest number is %d",s);
        }
        if (i>l)
        {
            l=i;
            printf("The largest number is %d",l);
        }
    }
}