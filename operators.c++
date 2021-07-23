#include <iostream>
using namespace std;
/* working on operators and displaying their output
/* operators include +,-,/,*,%
/* this is the breakdown below!
*/
int main()
{
	int a,b,sum,product,division,modulus,subtraction;
	cout<<"Enter a and b: ";
	cin>>a>>b;
	cout<<"a+b "<<a+b<<endl;
	product=a*b;
	cout<<"product: "<<a*b<<endl;
	division=a*b;
	cout<<"division: "<<a/b<<endl;
	modulus=a%b;
	cout<<"modulus: "<<a%b<<endl;
	subtraction=a+b;
	cout<<"subtraction: "<<a-b<<endl;
	return 0;
}