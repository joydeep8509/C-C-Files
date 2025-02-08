#include<stdio.h>
int main()
{

    int s[2][2];

    printf("Enter your numbers\n");

    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf(" %d ",&s[i][j]);
        }
    }

    printf("Your Matrix are\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
