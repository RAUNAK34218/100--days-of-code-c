#include<stdio.h>
int main()
{
    int a;
    printf("ENTER THE NUMBER");
    scanf("%d",&a);
    if (a>0)
    {
        printf("POSITIVE");
    }
    else if (a<0)
    {
        printf("NEGATIVE");
    }
    else
    {
        printf("ZERO ");
    }
    return 0;
}
