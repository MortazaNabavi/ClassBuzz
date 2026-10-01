#include <iostream>
using namespace std;
int main(){
	int i=1;
	shart:
	if (i<=100){
		cout<<i<<endl;
		i=i+1;
		goto shart;
	}
}