#include<stdio.h>
int main()
{
int year;
printf("ENTER THE YEAR ");
scanf("%d",&year);
if((year%400==0)||(year%4==0 && year%100!=0))
{
    printf("%d IS A LEAP YEAR",year);

}
else
{
    printf("%d is not a leap year");
}
return 0;

}