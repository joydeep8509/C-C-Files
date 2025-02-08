#include <iostream>
using namespace std;

template <class T, class U>  //int,string

 class  Abc
 {


public:        //1.T=char,U=float
			   //2.T=int,U=double
	T x;
	U y;

	Abc()
	{

	cout << "Constructor Called ,Value:"<<endl;

	cout<<sizeof(x)<<endl;
	cout<<sizeof(y)<<endl;

	 }

};

int main()
{
	Abc<char, float> a;

	Abc<int, double> b;



	return 0;
}
