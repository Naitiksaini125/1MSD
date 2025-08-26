#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf ("enter the number:\n");
    scanf ("%d", &num);
    printf("table of entered number is:\n", num);
    for ( int i = 0 ; i <= 10 ; i++)
    {
        printf("%d X %d = %d:\n ", num,i,num*i);
    }
    return 0;
}