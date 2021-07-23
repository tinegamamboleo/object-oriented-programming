#include<iostream>
using namespace std;
namespace sample
{
int m;
void display(int n)
{
cout<<"in namespace N="<<n<<endl;
}
}
using namespace sample;
int main()
{
int a=5;
m=100;
display(200);
cout<<"M in sample name space:"<<sample::m;
return 0;
}