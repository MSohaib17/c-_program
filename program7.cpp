//write a program that input the two number and one operator and profrom the expression
//using switch statement in main function?
#include<iostream>
using namespace std;
void op(int a,int b,char c);
int main(){
	int n1,n2;
	char o;
	cout<<"enter two number and one opperator"<<endl;
	cin>>n1>>n2;
	cin>>o;
	op(n1,n2,o);
	return 0;
	
}
void op(int a,int b,char c){
	switch(c) {
	case '+':
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
		break;
	case '-':
		cout<<a<<"-"<<b<<"="<<a-b<<endl;
		break;
		
	case '*':
		cout<<a<<"+"<<b<<"="<<a*b<<endl;
		break;
		
	case '/':
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
		break;
	default:
	cout<<"invalid operator!"<<endl;	
	
   }
}
            
