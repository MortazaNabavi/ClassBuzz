#include <iostream>
using namespace std;
int main(){
	float x;
	cin >>x;		//10
	
	if (x>0){
		cout <<"+";
	}
	else{
		if (x<0){
			cout<<"-";
		}
		else{
			cout <<"zero";
		}
	}
	return 0;
}