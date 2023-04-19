#include <stdio.h>
int main () {
    int n ;
     printf("enter a number");
     scanf("%d" , &n);
     int x = 0;
     int i = 2 ;
    while  (n > i)
    {

        if (n % i == 0)
        {x =1 ;
        }
    i = i + 1  ;
     }
     if (x == 1)
     {
        printf("not prime ");
     }
     else
     {
        printf("prime");
     }
    return 0;
} 