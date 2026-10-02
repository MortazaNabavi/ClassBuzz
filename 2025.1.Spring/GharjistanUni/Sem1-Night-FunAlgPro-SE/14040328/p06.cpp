#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	bool checkA=a<b+c;
	bool checkB=b<a+c;
	bool checkC=c<a+b;
	if(checkA&&checkB&&checkC)
		cout<<"Triangle";
	else
		cout<<"NOT Triangle";
	return 0;
}