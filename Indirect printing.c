#include<stdio.h>

int main()

{
    int i,j;
    char a,b;
    printf("Input what you want to print outside and inside respectively:-");
    scanf("%c %c",&a,&b);

    for (i=0;i<=4;i++)
    {
        for(j=0;j<5;j++)
        {
            if((i==0||i==4)||(j==0||j==4))
            {
                printf("%c",a);
            }
            else
            {
                printf("%c",b);
            }
        }
        printf("\n");
    }
    return 0;
}
