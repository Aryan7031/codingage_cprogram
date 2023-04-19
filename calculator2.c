#include <stdio.h>
int main () {
     int a;
     int b;
     char c;
     int sum;
     int minus;
     int mult;
     int div;
  printf("enter first number");
    scanf("%d" , &a);
 printf("enter a operator");
 scanf("%c" ,&c);
  printf("enter second number");
   scanf("%d" , &b);
    switch (c)
    {
    case '+':
    
        printf( "%d" , a + b );
        case '-': 
        printf("%d" , a - b);
        case '*': 
        printf("%d" , a * b);
        case '%':
        printf("%d" , a % b);

        break;

    default:
        break;
    }
    return 0;
}
