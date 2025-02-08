#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    char str2[55];
    int i,j;

    puts("Enter any string\n");
    gets(str);

    puts("Enter any string2\n");
    gets(str2);
    puts(strupr(str));
    puts(strupr(str2));

    i=strlen(str);
    printf("%d\n",i);
    j=strlen(str2);
    printf("%d\n",j);

    return 0;
}
