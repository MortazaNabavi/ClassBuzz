#include <iostream>
using namespace std;
int main(){
	int x, y, i;
	cin>>x>>y;
	i=x;
	back:
	if(i<=y){
		cout<<i<<"\t";
		i++;
		goto back;
	}
	return 0;
}