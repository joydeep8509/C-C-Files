#include<iostream>
using namespace std;

class Base
{
   int x;
public:
    virtual void fun()=0 ; //syntax
    void amstrong();

    int getX()
	{
	x=10;
	return x;
	 }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
    int y;
public:
    void fun()
	{
	cout << "fun class"<<endl;
	 }


};

int main()
{
    Derived d;
    d.fun();
    cout<<"Value of X"<<d.getX();
    return 0;
}
