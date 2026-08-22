#include <stdio.h>
int main (){
    float a,b;
printf("ENTER FIRST NUMBER :");
    scanf("%f",&a);
    
    
    printf("ENTER SECOND NUMBER :");
    scanf("%f",&b);

    float sum = a+b;
    float diff = a-b;
    float prod = a*b;

    printf ("\n--- Results ---\n");
    printf ( " SUM = %.2f\n",sum);
    printf ("DIFFERENCE =%.2f\n",diff);
    printf("PRODUCT =%.2f\n",prod);

    if (b==0){
        printf("QUOTIENT = CANNOT DIVIDE BY ZERO\n");
    }
    else{
        float quot = a/b;
        printf("QUOTIENT =%.2f\n",quot);
        
    }
    return 0;

}
