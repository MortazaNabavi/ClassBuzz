#include <iostream>
using namespace std;
int main(){
	int arrSize=5;
	int arr[arrSize]={22, 33, 44, 22, 55, 66};
	
	int q;
	cin >>q;
	
	int counter= 0;
	
	for (int i=0; i<arrSize; i++)
		if (arr[i]==q)
			counter++;
	
	cout<<q<<" was found "<<counter<<" time(s) in array.";
	
	return 0;
}