#include <iostream>
using namespace std;
int main(){
	float numbers[10]={3, 3.14, -10.56, 66,
	99, 89, 0.003, 23, 77, 19};
	float max= numbers[0];
	for (int i=1; i<10; i++)
		if (numbers[i] > max)
			max=numbers[i];
	cout<<max;
}