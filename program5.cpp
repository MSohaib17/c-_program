//write a program that input a number in main function and function display the 
//factorial of that number?
#include<iostream>
using namespace std;
void f(int a);
int main(){
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	f(n);
	return 0;
}
void f(int a){
	int s=1;
 for(int i=1;i<=a;i++){
 	s=s*i;
 }
 cout<<"factorial=="<<s<<endl;
}
