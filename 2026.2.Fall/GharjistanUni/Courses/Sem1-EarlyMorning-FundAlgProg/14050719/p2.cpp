#include <iostream>
using namespace std;
int main(){
	float a, b, c, sum, ave;
	cout <<"Enter 1st Number: ";
	cin>> a;
	cout<< "Enter 2nd Number: ";
	cin>> b;
	cout<<"Enter 3rd Number: ";
	cin>> c;
	sum=a+b+c;
	ave=sum/3;
	cout<< "SUM is "<< sum<<endl;
	cout<< "AVE is "<< ave;
}