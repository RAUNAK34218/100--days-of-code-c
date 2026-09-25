#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100], result[100];
    gets(str);
    int j = 0;
    for (int i = 0; str[i]!= '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch!= 'a' && ch!= 'e' && ch!= 'i' && ch!= 'o' && ch!= 'u') {
            result[j++] = str[i]; // keep non-vowel
        }
    }
    result[j] = '\0';
    printf("%s", result);
    return 0;
}
// Input: hello -> hll