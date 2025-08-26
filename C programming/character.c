#include <stdio.h>
int main () 
{
    char ch;
    printf("enter a charaxcter\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <= 'z' )|| (ch >= 'A' && ch <= 'B')){
        printf("%c is a alphabet", ch );
    }
    else {
        printf("%c is not a alphabet", ch );
    }
    return 0 ;

}