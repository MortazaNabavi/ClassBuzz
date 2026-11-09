#include <iostream>
using namespace std;
int main(){
	int arr1[]={2, 3, 4, 4, 4, 10, 100,1000};
	int arr2[]={-20, 0, 0, 20, 21, 31, 41, 51};
	
	int size1=sizeof (arr1)/ sizeof(arr1[0]);
	int size2=sizeof (arr2)/ sizeof(arr2[0]);
	int size3=size1+size2;
	
	int arr3[size3];
	
	int pointer1=0, pointer2=0, pointer3=0;
	
	while (pointer1<size1 and pointer2<size2){
		if (arr1[pointer1]<=arr2[pointer2])
				arr3[pointer3++]=arr1[pointer1++];
		else
			arr3[pointer3++]=arr2[pointer2++];
	}
	
	while (pointer1<size1)
		arr3[pointer3++]=arr1[pointer1++];
		
	while (pointer2<size2)
		arr3[pointer3++]=arr2[pointer2++];
		
	for(int i=0; i<size3; i++)
		cout<<arr3[i]<<"\t";
	
}