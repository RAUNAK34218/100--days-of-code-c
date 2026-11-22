#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int newSentence = 1;
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            s[i] = newSentence ? toupper(s[i]) : tolower(s[i]);
            newSentence = 0;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            newSentence = 1;
    }
    printf("%s", s);
    return 0;
}