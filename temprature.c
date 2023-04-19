#include <stdio.h>
int main (){
  int temp;
  scanf("%d"  , &temp);
  printf("enter temprature");
  if (temp <= 0)
  {
   printf("its fresing cold weather ");
  }
  else
  {
    if (temp == 1-10)
    {
      printf("its very cold weather");
    }
    else{
      if (temp == 11-20)
      {
      printf("its cold weather");
      }
      else{
        if (temp == 21-30)
        {
         printf("its normal temprature");
        }
        else{
          if (temp == 31-40)
          {
           printf("its hot weather");
          }
          else{
            if (temp >40)
            {
              printf("its very hot weather");

        
            }
          
          }
          
        }
      }
    }
  }
  return 0;
}