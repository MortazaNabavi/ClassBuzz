#include <iostream>
using namespace std;
int main(){
	int a=0;
	while (a<=10000){
		if (a%2!=0)
			cout<<a<<"\t";
		a++; // a=a+1  //   a+=1
	}
	
	return 0;
}