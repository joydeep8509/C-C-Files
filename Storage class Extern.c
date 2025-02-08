#include<stdio.h>

extern int a=10;  //global variable (Extern) ..

void fun()
{

	printf("%d\n",a);

}
int main()
{
	printf("%d\n",a);
	fun();

	if(1==1)
	{

		printf("%d",a);
	}

	return 0;
}
	//Extern Storage class is used to give a reference of a global-vairiable
	//that is visible to all program files....
