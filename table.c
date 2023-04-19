#include <stdio.h>
int main () {
    int a = 2 ;
    int i = 1; 
    while (i <= 10)
    {
        printf( "%d*%d=%d\n"  ,a, i, i * a );
        i = i + 1 ;
        
    }
    
   return 0;
}