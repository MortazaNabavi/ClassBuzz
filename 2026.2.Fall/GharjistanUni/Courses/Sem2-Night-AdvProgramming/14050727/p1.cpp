#include <iostream>
using namespace std;
int main(){
	int arrSize= 5;
	int myArr[arrSize]={4, 5, 2, 6, 0};
	
	int max= myArr[0];
	int location= 0;
	
	for (int i=1; i<arrSize; i++){
		if (myArr[i]>max){
			max= myArr[i];
			location= i;
		}
	}
	
	cout<<max<<" at "<<location;
	return 0;
}