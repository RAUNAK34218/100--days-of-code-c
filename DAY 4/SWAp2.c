#include <stdio.h>
int main (){
    int a,b;
    printf("ENTER THE FIRST NUMBER ");
    scanf("%d",&a);
    printf ("ENTER THE SECOND NUMBER ");
    scanf("%d",&b);

    a= a+b;
    b=a-b;
    a=a-b;

    printf("THE FIRST NUMBER IS NOW %d\n AND THE SECOND NUMBER IS NOW %d\n",a,b);
    return 0;

}
