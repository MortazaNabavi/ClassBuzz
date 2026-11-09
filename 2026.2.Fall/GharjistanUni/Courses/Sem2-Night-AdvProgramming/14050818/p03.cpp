#include <iostream>
using namespace std;


void print(int theArray[], int size, int pt1, int pt2){
	cout<<"i: "<<pt1<<"\tj:"<<pt2<<"\nArray:\n\t";
	for (int i=0; i<size; i++)
		cout<<theArray[i]<<"\t";
	cout<<endl<<endl;
}


int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	for (int i=0; i<size-1; i++){
		for (int j=0; j<size-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
			print(arr,size,i,j);
		}	
	}
	
	cout<<"After:\n\n\n\t";
	for (int i=0; i<size; i++){
		cout<<arr[i]<<"\t";
	}
	
	
	
	
}