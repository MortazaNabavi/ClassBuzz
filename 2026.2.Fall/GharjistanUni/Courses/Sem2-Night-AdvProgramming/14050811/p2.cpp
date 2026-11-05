// Selection Sort
#include <iostream>
using namespace std;
int main(){
	int ar[]={10, 0, 2, 3, -3, 3, 55, 66, 0, -10,4};
	int arSize=sizeof(ar)/sizeof(ar[0]);
	
	cout<<"Array befor sorting:\n\t";
	for (int i=0; i<arSize; i++)
		cout<<ar[i]<<", ";
	
	for (int i=0; i<arSize-1; i++){
		int minVal= ar[i];
		int minLoc= i;
		
		for (int j=i+1; j<arSize; j++)
			if (ar[j]<minVal){
				minVal=ar[j];
				minLoc=j;
			}
		
		int temp=ar[i];
		ar[i]=	ar[minLoc];
		ar[minLoc]=temp;
	}	
	
	cout<<"\n\nArray befor sorting:\n\t";
	for (int i=0; i<arSize; i++)
		cout<<ar[i]<<", ";
	return 0;
}