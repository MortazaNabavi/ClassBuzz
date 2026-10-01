#include <iostream>
using namespace std;
int main(){
	float myArray[10]={3.14, 4.14, 5.14, 6.14,
	2.55, -44, -100, 0, 0, 199};
	float x;
	cin>>x;
	bool isInArray=false;
	
	for (int i=0 ; i<10; i++)
		if (myArray[i]==x)
			isInArray=true;
	
	if (isInArray)
		cout<<x<<" is in array!";
	else
		cout<<x<<" is NOT in array!";
	
	return 0;
}