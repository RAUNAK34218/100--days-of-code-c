#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++){
        if(i==1) sum+=1;
        else sum+= (float)(2*i-1)/(2*i);
    }
    printf("%.4f",sum);
    return 0;
}
