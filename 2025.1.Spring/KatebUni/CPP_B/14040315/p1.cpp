#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a Number:\t";
	//cin>>a;
			
	int counter=1, flag=0;
	
	while (counter<=a){
		if (a%counter==0)
			flag++;		
		counter++;
	}
	
	if (flag==2)
		cout<<a<<" is PRIME";
	else
		cout<<a<<" is NOT PRIME";
	
	return 0;
}