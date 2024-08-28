/*write a program that input two number in main function and the function display 
the number is maximum ?*/
#include<iostream>
using namespace std;
int max(int a,int b);
int main(){
	int a,b;
	cout<<"enter two  number"<<endl;
	cin>>a>>b;
	max(a,b);
	return 0;
}
int max(int a,int b){
	if(a>b)
	 cout<<a<<"::number is maximum"<<endl;
	 else
	 cout<<b<<"::number is maximun"<<endl;
}

