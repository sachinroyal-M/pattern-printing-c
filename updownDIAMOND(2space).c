#include <stdio.h>

int main(){
    int i ,j,n;
    printf("enter the no :");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=2*n+1;j++){
            if((n-i<j) && (j<n+i+1)){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n"); 
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=2*n+1;j++){
            if((i<j)&&(j<2*n+1-i)){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n"); 
    }
    return 0;
}
