#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	there:
	if (x<=y){
		cout<<x<<"\t";
		x++;
		goto there;	
	}
	return 0;
}