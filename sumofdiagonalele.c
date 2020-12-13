#include<stdio.h>
int main()
{
    int i,j,mat[10][10];
    printf("Enter the elements of 3x3 MATRIX\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&mat[i][j]);
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                sum+=mat[i][j];
        }
    }
    printf("Sum of diagonal matrix : %d",sum);
    return 0;
}
