#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+= (float)(2*i)/(4*i-1);
    }
    printf("%.4f",sum);
    return 0;
}
// Input: 2 -> 2/3 + 4/7 = 0.666 + 0.571 = 1.238