#include <iostream>
using namespace std;
int main(){
	int a, counter=1;
	cin>>a;
	
	back:
	if (counter<=a){
		if (a%counter==0){
			cout<<counter<<"\t";
		}
		counter++;
		goto back;
	}
	return 0;
}