#include<stdio.h>
#include<string.h>

int main()
{
    char str[50]="Welcome to the Aptech";
    char str2[50]="Welcome to the Aptechh";

    int s;

    s=strcmp(str,str2);
    if (s==0)
    {
        printf("equal");
    }
    else
    {
        printf("Not Equal:%d",s);
    }

    return 0;
}
