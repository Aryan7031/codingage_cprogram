#include <stdio.h>
int main ()  {
    
    printf("please enter yur percentage ");
    int percent ;
    scanf("%d" ,&percent);
 printf("please enter full marks ");
 int marks;
scanf("%d" , marks);
int obtainedmarks = (percent*marks)/100;
if ((percent*marks)/100)
{
    printf("you got  " , obtainedmarks);
}


//printf("%d" ,  obtainedmarks );
    return 0 ;
}





