#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter a positive integer: ";
    cin>>n;
    for(int i = 0; i<=n*9; i=i+n) {
        cout<<i<<" + "<<n<<" = "<<n+i<<endl;
    }
    return 0;
}