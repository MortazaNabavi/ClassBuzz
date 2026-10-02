#include <iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	
	// Replacing x & y if x is greater than y
	if (x>y){
		int temp=x;
		x=y;
		y=temp;
	}
	
	// Printing [x - y]
	there:
	if (x<=y){
		// Print only EVEN numbers
		if (x%2==0){
			cout<<x<<"\t";
		}
		x++;
		goto there;	
	}
	return 0;
}