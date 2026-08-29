/*
NAME : RAUNAK PANDEY 
SAP ID 590034218
BATCH 54 
*/
# include <stdio.h>
#include <math.h>
int main ()
{
    float principal,rate,time;
    float simple_interest,compound_interest, amount;

    printf("ENTER THE PRINCIPAL ,RATE AND TIME :");
    scanf("%f %f %f ",&principal ,&rate,&time);

    simple_interest = (principal*rate*time)/100;
    amount = principal *pow((1+rate/100),time);

    compound_interest = amount - principal;

    printf("THE SIMPLE INTEREST IS : %.2f\n",simple_interest );
    printf(" COMPOUND INTEREST IS :%.2f\n",compound_interest);
    
    return 0;


}
