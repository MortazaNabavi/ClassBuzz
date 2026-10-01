#include <iostream>
using namespace std;
int main(){

	int a, b;
	cin >>a >>b;
	int i= a;
	SHART:
	if (i<=b){
		cout<<i<<"\t";
		i++;	//i+=1;		i=i+1;
		goto SHART;
	}
	return 0;
}