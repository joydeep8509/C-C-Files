#include<stdio.h>

int main()
{

	int i,j;
	for(i=0;i<=6;i++)
	{
		for(j=0;j<7;j++)
		{
			if((i==3||j==3)||((i+j)==6)||(i==j))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
