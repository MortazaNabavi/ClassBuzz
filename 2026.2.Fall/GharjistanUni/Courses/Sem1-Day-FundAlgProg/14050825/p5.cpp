#include <iostream>
using namespace std;
int main(){
	char c= 'D';
	bool a= true;	//1
	bool b= false;	//0
	bool d= c=='e';	//fasle 0
	
	if ( (a and b) or d)	// 0 or 0
		cout<<c;
	else if ( (a or b) and d) // 1 and 0
		cout<< a;
	else
		cout<<b;
	return 0;
}