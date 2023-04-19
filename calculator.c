#include <stdio.h>
int main () {
    int a;
    int b;
    int sum;
    int minus;
    int mult;
    int divide;
    char c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("enter operator");
    scanf(" %c",&c);
    switch (c)
    {
    case '+': 
     (sum = a+b);
     printf("%d" , a+b);
        
        break;

    case '-':
        (minus = a-b);
    
            printf("%d" , a-b);
        break;
      
       case '*':
         (mult = a*b);
                printf("%d", a*b);
        break;  
      
      case '%':
         (divide = a%b);
                printf("%d", a%b);
            
        break;
      
      default:
      
      
      return 0;
}
}
             
             
            
        
            
    
