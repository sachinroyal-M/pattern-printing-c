
#include <stdio.h>

int main()
{
    int n=4,i,j;
    for(i=0;i<=n;i++){
        for(j=-n;j<=n;j++){
            if(-(n-i)<j && j<(n-i)){
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
