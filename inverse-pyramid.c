#include <stdio.h>

int main() 
{
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n-i-1;j++)
        {
            if(j<i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
                
            }
        }
            printf("\n");
        
    }
    return 0;
}
