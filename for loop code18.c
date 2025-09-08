//how many boys and girls are there in a class of 50 students
#include <stdio.h>
int main ()
{
    int boys, girls;
    char ch="b";
    char ch= "gender";
    char ch="g";
    boys=0, girls=0;
    for (int i=1; i<=50; i++)
    {
        printf("Enter sex code");
        scanf("%c",);
        if (ch="b")
        { boys += 1; }
        else (ch="g")
        { girls += 1; }
    }
    printf("No. of Boys in the class = %d",boys);
    printf("No. of Girls in the class = %d",girls);
}