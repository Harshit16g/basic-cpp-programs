#include<iostream>
using namespace std;
int main(){
	float n;int q;
	cout<<">>elements in the array:"<<endl;
	cin>>q;
	double items[q];
	for(int o=0;o<=(q-1);o++){
		int y;
		cout<<">>enter element number "<<o+1<<" :";
		cin>>y;
		items[o]=y;
	}	cout<<"\n>>Array provided by user: \n\n[";
	for(int r=0;r<=(q-1);r++)
	{
		cout<<items[r];
		if(r!=(q-1)){cout<<" , ";}
		}	cout<<"]";
	
	cout<<"\n\n>>desired % change in the elements of array :"<<endl;
	int i,x=0,m=0;
	cin>>n;
	n/=100;
	double discount[q];
	for(i=0;i<=(q-1);i++){
        items[i]+=items[i]*n;
        discount[i]=items[i];
 	
	}
	cout<<"[";
	for(m=0;m<=(q-1);m++){
		cout<<discount[m];
		if(m!=(q-1)){cout<<" , ";
		}

	}
    cout<<"]";
    return 0;
}