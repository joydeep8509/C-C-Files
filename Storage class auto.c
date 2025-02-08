#include<stdio.h>

int main()
{
	auto int a=10;   //local variation/scope through only main block..

	if(1==1)  //always true condition
	{
		auto int b=20;// local for if block
		printf("%d\n",a);
		printf("%d\n",b);
	}

		printf("%d\n",a);
//		printf("%d\n",b);

	return 0;

}
