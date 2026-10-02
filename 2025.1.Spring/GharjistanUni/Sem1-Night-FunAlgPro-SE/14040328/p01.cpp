#include <iostream>
using namespace std;
int main(){
	/*int a=100;
	back:
		if(a>=-100){
			if(a%2==0)
				cout<<a<<"\t";
			a--;
			goto back;
		}*/
	int a=100;
	while (a>=-100){
		if (a%2==0)
			cout<<a<<"\t";
		a--;
	}	
	return 0;
}