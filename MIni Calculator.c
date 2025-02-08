#include<stdio.h>
int main()
{
    int a,b,c;
    int ch;

    printf("enter two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("enter your choice 1 for +\n 2 for -\n 3 for /\n 4 for *\n");
    scanf("%d",&ch);

    switch(ch)
    {


case 1:c=a+b;
    printf("%d",c);
    break;

    case 2:c=a-b;
    printf("%d",c);
    break;

    case 3:c=a/b;
    printf("%d",c);
    break;

    case 4:c=a*b;
    printf("%d",c);
    break;
    }


    return 0;
}
