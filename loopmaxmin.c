#include <stdio.h>
int main () {
    int n ; 
    int num;
    int min = -99999 ;
    int max = 999999 ;
    int sum = 0 ;
    printf("enter a number");
    scanf("%d" , &n);
    printf("enter %d number " ,n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&num);
        sum = sum + num ;
        if (max < n )
        {
            max = num;
        }
        if(min> n)
        {
            min = num ;
        }
   
    }
    
   printf(" max is %d" , max);
   printf(" min is %d" , min);
  printf(" ave is %d" , sum/n);
       return 0 ;
}