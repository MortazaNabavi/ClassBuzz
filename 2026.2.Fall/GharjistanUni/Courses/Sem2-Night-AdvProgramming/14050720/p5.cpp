#include <iostream>
using namespace std;
int main(){
	int numbers[5]={20, -20, 0, 3, 100};
	int max, min;
	max=numbers[0];
	min=numbers[0];
	
	for (int i=1; i<5; i++){
	
		if (numbers[i]>max)
			max =numbers[i];
		
		if (numbers[i]<min)
			min =numbers[i];
	}
	cout <<"Max: "<<max<<"\tMin: "<<min;
	return 0;
}