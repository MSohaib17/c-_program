//write a program that input a number and check the number is prime even and old 
//using function ?
#include<iostream>
using namespace std;
void num(int a);
int main(){
	int a;
	cout<<"input a number"<<endl;
	cin>>a;
	num(a);
	return 0;	
}
void num(int a){
	if(a%2==0 && a==0)
	cout<<a<<"number is prime and even"<<endl;
   else if(a%2!=0)
   cout<<a<<"number is odd"<<endl;
   else if(a%2==0)
   cout<<a<<"number is even"<<endl;
//   else if(a%2!=0)
//   cout<<a<<"number is odd"<<endl;
   else 
   cout<<"is not a prime number";
}
