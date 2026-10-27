#include <iostream>
using namespace std;
int main(){
	int myArray[8]={4, 4, -4, 0, 2, 10, 8, 0};
	int sum=0;
	
	for (int i= 0; i <8; i++)
		sum+=myArray[i];
	
	int average= sum/8;
	
	cout <<"Sum: "<<sum<<"\nAverage: "
	<<average<<"\n\nNumbers Greater than average:\n\t";
	
	for (int i=0;i <8; i++)
		if (myArray[i]>average)
			cout <<myArray[i]<<"\t";
			
	return 0;
}