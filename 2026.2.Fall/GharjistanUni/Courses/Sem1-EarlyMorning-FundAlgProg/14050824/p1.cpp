#include <iostream>
using namespace std;
int main(){
	float a, b, c;
	cin >>a >>b >>c;
	
	if (a==b and b==c)
		cout <<"Motasavi Azla";
	else if (a==b or a==c or b==c)
		cout <<"Motasavi Saqain";
	else
		cout <<"Mokhtalef";
	
	return 0;
}