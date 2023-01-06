#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter first number"<<endl;
	cin>>a;
	cout<<"enter second number"<<endl;
	cin>>b;
	for(c=a+1;c<b;c++){
		cout<<"  "<<c;
	};
	return 0;
}