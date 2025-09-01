//factorial calculation
#include <stdio.h>
int main ()
{
    int i,n,factorial;
    i=1;
    factorial=1;
    printf("Enter any number");
    scanf("%d",&n);
    for (i=1; i<=n; i=i+1)
    {
        factorial*=i; //this means factorial=factorial*1
        printf("Factorial of %d = %d",n,factorial);
    }
}