#include <iostream>
using namespace std;
int main(){
	int a, b;
	cin>>a>>b;
	int i=a;
		
	while (i<=b){
		if(i%2==0)
				cout<<i<<"\t";
			i++;
	}
	
	return 0;
}