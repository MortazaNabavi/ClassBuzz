#include <iostream>
using namespace std;
int main(){
	float a, b, c;
	cin >>a >>b >>c;
	
	if (a==b and b==c)
		cout<<"Motawazi Azla";
	else if (a==b or b==c or a==c)
		cout<<"Motasawi Saqain";
	else
		cout<<"Mokhtalef";
	
	return 0;
}