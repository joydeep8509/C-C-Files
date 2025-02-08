#include<stdio.h>

int main()

{
    int a,b,c;
    char opt;

    printf("what do you want to do +,-,/,*:");
    scanf("%c",&opt);
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);

    switch (opt)
    {
    case '+':
        {
          c=a+b;
          printf("The answer is:%d",c);
          break;
        }
    case '-':
        {
            c=a-b;
               printf("The answer is:%d",c);
               break;
        }
    case '/':
        {
            c=a/b;
            printf("The answer is:%d",c);
            break;
        }
    case '*':
        {
            c=a*b;
            printf("The answer is:%d",c);
            break;
        }
        default:
        {
            printf("Invalid input");
        }
    }
    return 0;
}
