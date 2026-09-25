#include <stdio.h>
#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int last = n%10;
    int first = n;
    int digits=0;
    while(first>=10){ first/=10; digits++; }
    int pow10 = pow(10,digits);
    int middle = (n % pow10)/10;
    int swapped = last*pow10 + middle*10 + first;
    printf("%d",swapped);
    return 0;
}
