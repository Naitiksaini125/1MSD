#include <stdio.h>
int main () 
{
    int a, b, c, d;
    printf("enter the numbers a,b");
    scanf ("%d%d", &a ,&b);
    printf(" choose the operator \n 1 = addition \n 2 = subtraction \n 3 = multipkication \n 4 = division \n");
    scanf("&d", &c);
    switch (c)
    {
        case 1 : d=a+b;
        printf("%d", &d);
        break;
        case 2: d=a-b;
        printf("%d", &d);
        break;
        case 3 : d=a*b;
        printf("%d", &d);
        break;
        case 4 : d=a/b;
        printf("%d", &d);
        break;
        default: printf("invalid input");
    }
     return 0;
}