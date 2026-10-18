#include <iostream>
using namespace std;
int main(){
	int arrSize=5;
	int arr[arrSize]={22, 33, 44, 55, 66};
	
	int q;
	cin >>q;
	
	bool found=false;
	
	for (int i=0; i<arrSize; i++){
		if (arr[i]==q){
			found=true;
			break;
		}	
	}
	
	if (found)
		cout<<q<<" was FOUND!";
	else
		cout<<q<<" was NOT FOUND!";
	
	return 0;
}