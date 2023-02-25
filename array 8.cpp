#include<stdio.h>
#define rows 2
#define cols 3
int main()
{
    int i,j;
    int mynums[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&mynums[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        printf("%d",mynums[i][j]);
        printf("\n");
    }
        return 0;  
}
