#include <iostream>
using namespace std;
int main(){
	int a, b;
	
	cin >>a >>b;
	SHART:
	if (a<=b){
		cout<<a<<"\t";
		a++;	//a+=1;		a=a+1;
		goto SHART;
	}
	return 0;
}