#include<stdio.h>

int a=10;

void fun()
{
    printf("%d\n",a);

}
int main()
{
    printf("mainblock\n");

    int d=34;
    fun();

    if (1==1);
    {
        int c=22;
        printf("if block\n");
        printf("%d\n",a);
        printf("%d\n",c);
        printf("%d\n",d);
    }
    printf("outside of the if block\n");

    printf("%d\n",a);
//printf("%d\n",c);
    printf("%d\n",d);

    return 0;
}
