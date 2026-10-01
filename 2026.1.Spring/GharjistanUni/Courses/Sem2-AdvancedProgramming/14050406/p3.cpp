#include <iostream>
using namespace std;
int main(){
	float myArray[10]={3.14, 4.14, 5.14, 6.14,
	2.55, -44, -100, 0, 0, 199};
	float x;
	cin>>x;
	int counter=0;
	for (int i=0 ; i<10; i++)
		if (myArray[i]==x)
			counter++;
	cout<<counter;
	return 0;
}