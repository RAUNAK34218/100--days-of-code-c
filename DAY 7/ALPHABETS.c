#include<stdio.h>
int main()
{
    char ch;
    printf("ENTER AN ALPHABET :");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("THE GIVEN CHARACTER IS A VOWEL ");
    }
    else{
        printf("THE GIVEN ALPHABET IS A CONSONENT");
    }
    return 0;
}