#include <stdio.h>
int main () {
int x ;
printf("rnter tha value of x ");
scanf("%d" , &x);
int y ;
printf("enter the value of y ");
scanf("%d" , &y);
if (x>0 , y>0)
{
    printf("first codrant");
    if (x<0 , y>0)
    {
        printf("second coordrant");
        if (x<0 , y<0)
        {
            printf("third cordrant");
            if (x>0 , y<0)
            {
               printf("fourth coodrant");
            }
            
        }
        
    }
    
}

    
    return 0 ;
}