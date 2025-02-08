#include<stdio.h>
#include<string.h>

int main()
{
    char str[50]="Welcome to the Aptech";
    char str2[55]="Programming world ";

    puts(str);
    puts(str2);

    strcat(str2,str);
    puts(strupr(str2));
    return 0;

}
