#include <stdio.h>
char weekdays () {
    printf("sunday\nmonday\ntuesday\nwednesday\nthursday\nfriday\nsaturday\n");   
}
int main () {
    char d = weekdays() ; 
        printf("%c"  , d  );
    
    return 0 ;
}