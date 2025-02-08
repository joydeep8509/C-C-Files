#include<stdio.h>


void fun()
{
	int a=20;
	static int b=30;
	printf("%d %d\n",a,b);
	++a,++b;
}

int main()
{
	fun();	//20,30;
	fun();	//20,31;
	fun();	//20,32;
	fun();
	fun();
	    //local variable builds always a new memory...

	return 0;

}

//static memomory builds once thats why value is increasing with the repeatation of fun
