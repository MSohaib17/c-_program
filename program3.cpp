//write a program that input a number in the main function and function display 
//the table of the number?
#include<iostream>
using namespace std;
int table(int &b);
int main(){
	int a;
	cout<<"enter a number"<<endl;
	cin>>a;
	table(a);
	return 0;
}
int table(int &b){
	cout<<"table of the number enret by user"<<endl;
	for(int i=1;i<=10;i++){
		cout<<b<<"*"<<i<<"="<<i*b<<endl;
	}
}


