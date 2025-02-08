#include<stdio.h>

int main()
{
    int password;

    printf("Enter your password:-");
    scanf("%d",&password);
    if (password==1234)
    {
        printf("Welcome to the block A");
    }
    else if (password==4567)
        {
            printf("welcome to the block B");
        }
        else if (password==7890)
        {
            printf("welcome to the block C");
        }
        else
        {
            printf("get out\n");
        }
        return 0;
}
