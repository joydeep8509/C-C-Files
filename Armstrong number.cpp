#include <iostream>
using namespace std;

int main()
	{
	int n,r,sum=0,temp;   //temp --> for holding the value
	cout<<"Enter the Number=  ";
	cin>>n;  //153
	temp=n;  //temp=n=153
	while(n>0)
	{
	r=n%10; //3 5 1
	sum=sum+(r*r*r);  //sum=153
	////sum=sum+r;   ///sum of the digits of a number .....
	n=n/10;//15 ,1 ,0
	}
	if(temp==sum)
	cout<<"Armstrong Number."<<endl;
	else
	cout<<"Not Armstrong Number."<<sum<<endl;

return 0;
}
