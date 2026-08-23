# include <stdio.h>
int main (){
    float radius , area , circumference ;
    const float PI =3.14159;

    printf ("ENTER THE RADIUS ");
    scanf ("%f",&radius );

    area =PI *radius*radius;
    circumference = 2*PI*radius ;
    
    printf("\nAREA of circle = %.2f\n",area);
    printf("CIRCUMFERENCE OF CIRCLE = %.2f\n",circumference);

    return 0;

}
