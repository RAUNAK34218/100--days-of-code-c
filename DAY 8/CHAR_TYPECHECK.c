#include <stdio.h>
int main ()
{
char ch;
printf("ENTER A CHARACTER :");
scanf("%c",&ch);

if (ch >= 'A'&& ch <='Z')
{
    printf("UPPERCASE ALPHABET");
}
else if(ch >= 'a'&& ch <='z')
{
    printf("LOWERCASE ALPHABAT");
}
else if(ch >= '0'&& ch <='9')
{
    printf("DIGIT");
}
else 
{
    printf("SPECIAL CHARACTER ");
}
return 0;
}

