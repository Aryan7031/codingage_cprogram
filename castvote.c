#include <stdio.h>
int main () {
    int a; 
    printf("enter a number");
    scanf("%d",&a);
    
    if (a>=18)
    {
        printf("eligible to cast vote");
    }
    else
    {
        printf("not eligible to cast vote ");
    }
     return 0;
}