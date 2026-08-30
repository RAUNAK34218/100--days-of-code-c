#include <stdio.h>
int main ()
{
    int a ,b , temp ;
    printf ("ENTER THE FIRST NUMBER :");
     scanf ("%d",&a);

     printf ("ENTER THE SECOND NUMBER :");
     scanf("%d",&b);
     temp = a;
     a =b ;
     b =temp;
     printf("NOW FIRST NUMBER IS :%d\n",a);
     printf("NOW THE SECOND NUMBER IS:%d\n",b);
     return 0;


}