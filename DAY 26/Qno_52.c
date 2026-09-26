// Pattern:
// *\n * *\n * * *\n * * * *\n * * * * *\n etc with blank line
// If you meant 1,2,3,4,5 then 3,1
#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++) printf("*\n");
        printf("\n");
    }
    for(int i=3;i>=1;i--){
        for(int j=1;j<=i;j++) printf("*\n");
        printf("\n");
    }
}