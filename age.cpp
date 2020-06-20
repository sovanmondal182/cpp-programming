#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter your age: ";
	int i;
	cin>>i;
	if(i>=18)
	{
		cout<<"\nYou are eligible.";
	}
	else
	{
		cout<<"\nYou are not eligible.";
	}
	return 0;
}
