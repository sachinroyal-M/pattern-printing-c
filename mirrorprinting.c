#include <stdio.h>

int main()
{
    int n=5,l;
    for(int i=-n;i<=n;i++){
        if(i<0){
             l=-i;
        }
        else{
             l=i;
        }
        for(int j=0;j<n+1;j++){
            if(j<n-l){
                printf(" ");
            }
            else{
                printf("* ");
            }
        }printf("\n");
    }
    return 0;
}
