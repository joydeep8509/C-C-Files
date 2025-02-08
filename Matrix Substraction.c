#include<stdio.h>

int main()
{
    int a,b,i,j,first[10][10],second[10][10],substraction[10][10];

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Enter the first elements of matrix\n");
    for(i=0;i<a;i++);
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&first[i][j]);
        }

    }
    printf("Enter the second elements of matrix\n");
    for(i=0;i<a;i++);
    {
        for(j=0;j<b;j++);
        {
            scanf("%d",&second[i][j]);
        }
    }
    printf("substraction of the entered matrix:-\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
           substraction[i][j] =first[i][j]-second[i][j];
           printf("%d",substraction[i][j]);
        }
        printf("\n");
    }
    return 0;
}
