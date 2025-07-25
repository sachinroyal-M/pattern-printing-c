#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    for(i=-n;i<=n;i++)
    {
      if(i<0){
        k=-i;
      }
      else{
        k=i;
      }
      for(j=0;j<n+1;j++){
        if(j<n-k){
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
