#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	a=sizeof(char);
	b=sizeof(int);
	c=sizeof(float);
	d=sizeof(double);
	cout<<"Size of char: "<<a<<" byte"<<endl;
	cout<<"Size of int: "<<b<<" bytes"<<endl;
	cout<<"Size of float: "<<c<<" bytes"<<endl;
	cout<<"Size of double: "<<d<<" bytes"<<endl;
	return 0;
}
