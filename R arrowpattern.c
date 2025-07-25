#include <stdio.h>

int main()
{
    int n=3,i,j,k;
    for(i=-n;i<=n;i++){
      if(i<0){
        k=-i;
      }
      else{
        k=i;
      }
      for(j=0;j<k+1;j++){
        printf("* ");
        }
      printf("\n");

    }
    return 0;
}
