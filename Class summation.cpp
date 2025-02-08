# include<iostream>

using namespace std;

class Demo
{
	public:

	int a,b,c;

	void sum()
	{
		c=a+b;
		cout<<"The Summation is :"<<c<<endl;
	}
	void sub()
	{
		c=a-b;
		cout<<"The Substraction is :"<<c<<endl;
	}

};

int main()
{
	Demo d;

	d.a=22;
	d.b=12;
	//d.sum();
	d.sub();

	Demo d1;
	d1.a=55;
	d1.b=34;
	d1.sum();
	//d1.sub();

	return 0;
}
