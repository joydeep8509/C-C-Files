#include<stdio.h>

int main()
{
	static int a=10;//local vairi/scope through only main block..

	if(1==1)  //always true condition
	{
		static int b=20;// local for if block
		printf("%d\n",a);
		printf("%d\n",b);
	}

		printf("%d\n",a);
//		printf("%d\n",b);

	return 0;

}
