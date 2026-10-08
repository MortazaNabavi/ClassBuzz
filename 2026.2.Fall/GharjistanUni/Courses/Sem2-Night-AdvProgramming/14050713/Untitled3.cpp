#include <iostream>
using namespace std;

int square (int x){
	return x*x;
}
int main(){
	int a;
	cin>>a;
	int b=square(a);
	cout<<b;
}