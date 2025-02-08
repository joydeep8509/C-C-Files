
#include<stdio.h>

int main()
{
    int i=1;
    lebel:
        printf("%d\n",i);
        i++;

        if("i<=10")
        goto lebel;

        printf("thank you");
        return 0;
}
