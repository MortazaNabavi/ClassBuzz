#include <iostream>
using namespace std;
int main(){
	float r;
	cout<<"Enter R: ";
	cin>>r;
	float Pi=3.14;
	float circle=Pi*r*r;
	float x=r*2;
	float square=x*x;
	float red=square-circle;
	
	cout<<"Square: "<<square<<endl<<"Circle: "<<circle;
	cout<<endl<<"Red: "<<red;
}