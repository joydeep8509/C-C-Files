#include<stdio.h>

int main()
{
    char op;

    int num1=8;
    int num2=7;

    printf("Enter the option\n");
    scanf("%c",&op);

    int result=(op=='+')?(num1+num2):(num1-num2);
    printf("%d",result);
    return 0;
}
