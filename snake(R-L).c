#include <stdio.h>

int main()
{
    int n=5,i,j,k=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i%2==0 ){
              k=k+1;
              printf("\t%d",k);
            }
            else{
                printf("\t%d",k);
                k=k-1;
            }
        }
        k=k+n;
        printf("\n");

    }
    return 0;
}
