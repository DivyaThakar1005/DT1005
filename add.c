#include<stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int sum[3][3];
    int i,j;

    printf("Enter values of a:");
    for(i=0; i<3; i++)
    { 
        for(j=0; j<3; j++)
    {
        scanf("%d", &a[i][j]);
    }
    }
     
    printf("Enter values of b:");
    for(i=0; i<3; i++)
    { 
        for(j=0; j<3; j++)
    {
        scanf("%d", &b[i][j]);
    }
    }


    printf("Sum is:");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d \n", sum[i][j]);
        }
    }


      
      
return 0;


}