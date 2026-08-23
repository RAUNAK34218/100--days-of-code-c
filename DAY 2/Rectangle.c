#include <stdio.h>
int main (){
    float length , breadth ,area , perimeter;

    printf("ENTER LENGTH :");
    scanf("%f",&length);

    printf("ENTER BREADTH :");
    scanf("%f",&breadth);

    area = length*breadth;
    perimeter = 2*(length + breadth);
    printf("\nAREA of RECTANGLE = %.2f\n",area);
    printf("PERIMETER OF RECTANGLE = %.2f\n", perimeter);

    return 0;

}
