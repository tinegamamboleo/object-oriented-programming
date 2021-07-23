#include <iostream>
using namespace std;
int main(void)
{
	int i=1,sum=0,avg=0;
	do
	{
		sum=sum+i;
		i+=1;
		avg=sum/10;
	}
	while(i<10);
	cout<<"sum: "<<sum<<endl;
	cout<<"avg: "<<avg<<endl;
}