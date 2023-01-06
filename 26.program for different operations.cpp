#include<iostream>
using namespace std;
int main()
{
	int operation;
	float a,b;
    cout<<"select operation";
    cout<<"\npress 1 for multiplication";
    cout<<"\npress 2 for division";
    cout<<"\npress 3 for addition";
    cout<<"\npress 4 for subtraction\n";
    cin>>operation;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    switch(operation)
    {
	    case 1:
	    	cout<<"multiuplication result is\n"<<a*b;
	    	break;
	    case 2:
	    	cout<<"division result is\n"<<a/b;
	    	break;
	    case 3:
	    	cout<<"addition result is\n"<<a+b;
	    	break;
	    case 4:
	    	cout<<"subtraction result is\n"<<a-b;
	    	break;
	cout<<"\nhave a nice freakin day";
	return 0;
	    	
            
	}
}