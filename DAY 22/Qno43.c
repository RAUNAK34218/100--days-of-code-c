#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int temp=n, sum=0;
    while(temp>0){
        int d=temp%10, fact=1;
        for(int i=1;i<=d;i++) fact*=i;
        sum+=fact;
        temp/=10;
    }
    if(sum==n) printf("%d is Strong",n);
    else printf("%d is not Strong",n);
    return 0;
}
//armstrong number
