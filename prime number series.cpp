#include<iostream>
using namespace std;
int main()
{
    int i, a=0, j,n;
    cout<<"enter a number :"<<endl;
    cin>>n;
    cout<<"Prime Numbers Between 1 and "<<n<<" are :"<<endl;
    for(i=1; i<=n; i++)
    {   for(j=2; j<i; j++)
        {  if(i%j==0)
           {
            a++;
            break;
           }
        }
        if(a==0 && i!=1)
            cout<<i<<endl;
        a = 0;
    }
    cout<<endl;
    return 0;
}