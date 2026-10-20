#include <stdio.h>

int main(void)
{
    char date[64], extra;
    int day, month, year;
    if (scanf("%63s", date) != 1)
        return 1;
    if (sscanf(date, "%d/%d/%d%c", &day, &month, &year, &extra) != 3 ||
        month != 4 || day < 1 || day > 30 || year < 0) {
        puts("Invalid date");
        return 0;
    }

    printf("%02d-Apr-%04d\n", day, year);
    return 0;
}
