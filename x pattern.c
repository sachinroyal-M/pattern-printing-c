#include <stdio.h>
int main() {
    int n=5,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i || n==i+j+1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }        
        printf("\n");
    }
    return 0;
}
