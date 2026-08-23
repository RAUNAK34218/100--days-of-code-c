#include <stdio.h>
int main (){
    int a,b,c ;
    printf("ENTER THE FIRST NUMBER :");
    scanf("%d",&a);
    printf (" ENTER THE SECOND NUMBER :");
    scanf ("%d",&b);
    printf("\nBEFORE SWAPPING : a= %d, b = %d \n", a,b);
    c =a;
    a=b;
    b=c;
    printf("AFTER SWAPPING : a = %d, b = %d \n",a ,b);
    return 0;

}
