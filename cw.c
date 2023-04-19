#include <stdio.h>
int main (){
  char a;
  printf("enter your signal");
  scanf("%c",&a);
if(a == 'r')
{
  printf("please stop");
}
else
{

  if(a == 'y')
  {
  printf("get ready");
   }
else
{
  if(a == 'g')
  {
  printf("go");
  }
else
{
   printf("invalid signal");
}
}
}
   
    return 0;
}