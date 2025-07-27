
#include <stdio.h>

int main()
{
  int i,j,n=3;
  for(i=0;i<n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j<n-i){
        printf("  ");
      }
      else{
        printf("* ");
      }
      
    }
    printf("\n");
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(j<i){
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
