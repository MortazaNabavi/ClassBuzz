#include <iostream>
using namespace std;
int main(){
	float a, b, c;
	cin >>a >>b >>c;
	
	if (a!=b and b!=c and a!=c)
		cout <<"Mokhtalef";
	else if (a==b or b==c or a==c)
		cout <<"Motasavi Saqain";
	else
		cout <<"Motasavi Azla";
	
	return 0;
}