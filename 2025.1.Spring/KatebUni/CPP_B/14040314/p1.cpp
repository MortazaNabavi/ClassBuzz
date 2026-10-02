#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int sum=0;
	int counter=1;
	while(n>=counter){
		int number;
		cin>>number;
		sum+=number;
		counter++;
	}
	cout<<"Sum: "<<sum<<"\nAv:\t"<<sum/n;
}