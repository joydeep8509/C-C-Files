#include<stdio.h>

int main()
{
    int password;
    printf("Enter password\n");
    scanf("%d",&password);

    if(password==1234)
    {
        printf("welcome to the Aptech\n");
    }
    else
    {
        printf("wrong password\n");
    }
    printf("main function\n");

    return 0;
}
