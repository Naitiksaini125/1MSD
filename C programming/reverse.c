#include <stdio.h>
int main() {
   int n, rev_n, r;
    printf ("enter the no:\n");
    scanf ("%d",&n);
    while ( n != 0) {
        r = n%10;
        rev_n = rev_n*10 + r ;
        n/=10 ;
    }
    printf("reversed number : %d\n ", rev_n);

    
}