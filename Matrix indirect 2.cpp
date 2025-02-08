#include <iostream>

using namespace std;
int main()
{
	int a[3][3];

	int i,j;

	cout<<"Enter Array elements: ";

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		 }
	}
	cout<<"The following mattix is:\n";

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		 }
		cout<<endl;
	}
	return 0;
}
