#include <stdio.h>
int main () {
    char a;
    printf("enter your charecter");
    scanf("%c",&a);
    if (a=='y')
    {
        printf("get raedy");
    }
    else
    {
        if (a=='r')
        {
            printf("stop");
        }
        else
        {
            if (a=='g')
            {
                printf("go");
            }
            else
            {
                printf("invalid input");
            }
            
        }
        
        
    }
    
return 0;
}