#include<iostream>
#include<string.h>


using namespace std;

int main()
{
char firstname[]="Amit";
char lastname[]="Amit";
int x;

strcat(firstname, lastname); //concat

x=strcmp(firstname, lastname); // compare

cout<<firstname<<endl;
cout<<x;


return 0;



}
