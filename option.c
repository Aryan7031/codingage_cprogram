#include <stdio.h>
int main() {
int a;

scanf("%d" , &a);
switch (a)
{
case 1: 
int s ;
    printf("%d" , s);
    break;
case  2:
int b ;
int c ;
printf("enter two number");
scanf("%d" , &b);
scanf("%d" , &c);
printf("%d + %d" , b + c );

    break;
    //case 3 :
    // int e ;
    // int f ;
    // int g ;
    // scanf("%d", &e);
    // scanf("%d", &f);
    // scanf("%d", &g);

    default:
    printf("invalid");
}
return 0;
}