#include <stdio.h>
void main ()
{
    int n,i;
    i=0;
    printf("Enter the number of numbers to be printed\n");
    scanf("%d,&n");
    for (i=0,i<=n, i=i+2)
    {printf("%d\n",i);}
}