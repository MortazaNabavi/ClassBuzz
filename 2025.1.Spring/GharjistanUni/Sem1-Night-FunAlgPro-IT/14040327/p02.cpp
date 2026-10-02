#include <iostream>
using namespace std;
int main(){
	int num, code, s;
	code= 20;
	cin>>num; // 5
	s=num/2;
	bool bOOl= code%num;
	bool BooL= num-(2*s);
	bool _bool=bOOl && BooL;
	if(_bool || true){
		cout<<bOOl;
	}else{
		cout<<BooL;
	}
	
}