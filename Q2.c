#include <stdio.h>
int main () {
    int a ;
    printf("enter a number ");
    scanf("%d" , &a);
    if (a==0)
    {
        printf("its a zero");
    }
    else if (a>0)
    {
        printf("its a positive number ");
    }
    else if(a<0)
    {
        printf("its a negative number ");
    
    } 
    

    return 0;
}