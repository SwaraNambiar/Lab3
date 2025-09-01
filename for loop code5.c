#include <stdio.h>
void main ()
{
    int n,i;
    i=1;
    printf("Enter the number of numbers to be printed\n");
    scanf("%d,&n");
    for (i=1,i<=n, i=i+2)
    {printf("%d\n",i);}
}