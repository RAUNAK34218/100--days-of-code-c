#include <stdio.h>
int main() {

    float celsius , fahrenheit ;

    printf("ENTER THE TEMPERATURE IN CELSIUS :");
    scanf("%f",&celsius);

    fahrenheit = (celsius *9.0 /5.0)+32;
    printf("%.2f CELCIUS = %.2f FAHRENHEIT \n",celsius, fahrenheit);
    return 0;

}


