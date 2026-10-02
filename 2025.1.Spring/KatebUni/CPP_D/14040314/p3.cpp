#include <iostream>
using namespace std;
int main (){
	int x;
	cin>>x;
	
	int counter, factorial;
	counter=1; factorial=1;
	back:
	if (counter<=x){
		factorial=factorial*counter;
		counter=counter+1;
		goto back;
	}
	cout<<factorial;
}