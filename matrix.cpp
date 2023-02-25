#include<stdio.h>
#define rows 2
#define cols 3
int main()
{
    int i,j;
    int Matrix_A[rows][cols]={{2,3,5},{4,1,2}};
    int Matrix_B[rows][cols]={{4,5,1},{3,4,7}};
    int Matrix_C[rows][cols]={0};
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
        Matrix_C[i][j]=Matrix_A[i][j]+Matrix_B[i][j];
        }
    }
    printf("Matrix C is ..\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
		
    printf("%d",Matrix_C[i][j]);
        }
        printf("\n");
    }
        return 0;  
}
