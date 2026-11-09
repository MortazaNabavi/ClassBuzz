#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >>a >>b >>c;
	
	if (a==b and b==c)
		cout<<"Motasawi Azla";
	else if (a==b or b==c or a==c)
		cout<<"Motasawi alsaqain";
	else
		cout<<"Mokhtalef ul azla";
	
	return 0;
}
