#include <stdio.h>
int main() {
    char str[100];
    gets(str);
    for (int i = 0; str[i]!= '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32; // lower to upper
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32; // upper to lower
    }
    printf("%s", str);
    return 0;
}
// Input: HeLLo -> hEllO