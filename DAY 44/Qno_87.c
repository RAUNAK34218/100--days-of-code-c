#include <stdio.h>
int main() {
    char str[100];
    gets(str);
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i]!= '\0'; i++) {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            continue;
        else special++;
    }
    printf("Spaces=%d Digits=%d Special=%d", spaces, digits, special);
    return 0;
}
// Input: Hi 123 @# -> Spaces=2 Digits=3 Special=2