#include <stdio.h>

int main() {
    char name[50];
    int age;
    FILE *fp = fopen("info.txt", "w");
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data saved successfully.\n");
    return 0;
}