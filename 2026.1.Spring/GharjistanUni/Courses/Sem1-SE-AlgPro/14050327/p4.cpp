#include <iostream>
using namespace std;
int main(){
	int x, y;
	cin>>x>>y;
	back:
	if(x<=y){
		cout<<x<<"\t";
		x++;
		goto back;
	}
	
}