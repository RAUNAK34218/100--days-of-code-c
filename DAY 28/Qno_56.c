#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
// Input: 5 1 2 3 4 5 -> Output: 1 2 3 4 5