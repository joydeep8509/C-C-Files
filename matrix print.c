#include<stdio.h>

int main()
{
    int i,j;
    int a[3][3]={{2,3,9},{4,6,1},{7,5,8}};

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("arr[%d][%d]=%d\n",i,j,a[i][j]);
    }
    printf("____________________________\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
