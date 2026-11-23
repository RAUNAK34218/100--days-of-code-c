#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    if (fp == NULL) { printf("File not found.\n"); return 1; }
    int c, chars = 0, words = 0, lines = 0, inWord = 0;
    while ((c = fgetc(fp)) != EOF) {
        chars++;
        if (c == '\n') lines++;
        if (isspace(c)) inWord = 0;
        else if (!inWord) { inWord = 1; words++; }
    }
    if (chars > 0 && lines == 0) lines = 1;
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}