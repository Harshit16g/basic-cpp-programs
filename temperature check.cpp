#include <iostream>
using namespace std;

int main() {
    double temp;
    cout<<"enter temperature of person"<<endl;
    
    cin>>temp;
    if(temp>36.1 && temp<36.9){
        cout<<"OK";}
    else{
        cout<<"Not OK";
    }
return 0;
    
}
