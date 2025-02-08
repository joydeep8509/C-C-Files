#include <iostream>
using namespace std;

class Calculator;  //class prototype

class Cal
{
	public :
		int add(int a , int b)
		{
			return a+b;
		}

		int sumNumber1(Calculator , Calculator);
		int sumNumber2(Calculator , Calculator);	//2
};

class Calculator
{
	int a , b;


	friend class Cal;

	public:
		void setNumber(int n1 , int n2)
		{
			a = n1;
			b = n2;
		}

		void printNumber()
		{
			cout<<"First Number is : "<<a<<" , Second number is : "<<b<<endl;
		}
};

int Cal ::sumNumber1(Calculator c1 , Calculator c2)
{
	return (c1.a + c2.a);							//4
}

int Cal ::sumNumber2(Calculator c1 , Calculator c2)
{
	return (c1.b + c2.b);
}

int main()
{
	Calculator obj1 , obj2;

	obj1.setNumber(21 , 14);//3
	obj2.setNumber(16 , 7);

	Cal ca;
	int result1 = ca.sumNumber1(obj1 , obj2);
	cout<<"Sum 1 : "<<result1<<endl;  			//1
	int result2 = ca.sumNumber2(obj1 , obj2);
	cout<<"Sum 2 : "<<result2<<endl;//5
	return 0;
}
