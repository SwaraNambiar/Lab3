//print series using parallel loop
#include main ()
{
    int i,j,k;
    for (i=1, j=5; i<= 3 && j>= 3; i++, j--)
    {
        for (k=1; k <= 2; k++)
        {printf("%d\t%d\n",i,j);}
    }
    return 0;
}