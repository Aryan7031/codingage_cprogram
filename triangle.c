#include <stdio.h>
int main (){
    int a;
    int b; 
    int c;
    printf("enter three angles of triangle");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);
    
    if (a+b+c==180)
    {
        printf("perfect a triangle can be formed ");
    }
    else
    {
        printf("invalid triangle can't be formed");
    }
    return 0;
}