#include <iostream>
using namespace std;
int main(){
	int a,b,i;
	
	cin>>a >>b;
	i=a;
	ghabl_az_shart:
	if(i<=b){
		cout<<i<<"\t";
		i=i+1;
		goto ghabl_az_shart;
	}
}