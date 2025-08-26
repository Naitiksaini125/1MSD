#include <stdio.h>
#include <conio.h>
int main ()
{
    int a, n, d, r = 0;
    printf("enter the number \n");
    scanf("%d", &a);
    n=a;
    while (n > 0)
    {
        d = n%10 ;
        r = r*10 + d ;
        n = n/10 ;
    }
    if (a == r)
    {
       printf("number is palindrome");
    }
    else{
       printf("number is not palindrome");
    }
    return 0;
    
    
}