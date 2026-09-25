#include <stdio.h>
int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);

    int freq[26] = {0}; // for a-z

    for (int i = 0; str[i]!= '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                printf("First repeating lowercase: %c", str[i]);
                return 0;
            }
        }
    }
    printf("No repeating lowercase alphabet found");
    return 0;
}
/*
Input: abca
Output: a (a repeats first)

Input: abcde -> No repeating
Input: programming -> r
*/