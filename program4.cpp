//write a program that display its precessor ans successor using the function ?
#include<iostream>
using namespace std;
int value(int a);
int main(){
	int a;
	cout<<"entet a number"<<endl;
	cin>>a;
	value(a);

	return 0;
}
int value(int a)
{
	int f,s;
	f=a-1;
	s=a+1;
	cout<<"before=="<<f<<"after=="<<s<<endl;
}
