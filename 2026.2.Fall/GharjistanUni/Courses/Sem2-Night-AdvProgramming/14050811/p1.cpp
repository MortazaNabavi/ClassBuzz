#include <iostream>
using namespace std;

int binarySearch(int ar[], int x, int size){
	int l=0;
	int r= size-1;
	int i=1;
	while (l<=r){
		int mid= l+((r-l)/2);
		
		cout<<"iteration: "<<i<<".\tL: "
		<<l<<"\tM: "<<mid<<"\tR: "<<r<<endl;
		
		if (ar[mid]==x)
			return mid;
		else if (ar[mid]<x)
			l=mid+1;
		else if(ar[mid]>x)
			r=mid-1;
		
		i++;
	}
	return -1;
}
int main(){
	int myArray[]={1,2,3,4,5,6,7,8,9,10};
	int s=sizeof(myArray)/sizeof(myArray[0]);
	int n;
	cin >>n;
	int loc=binarySearch(myArray, n,s);
	if (loc==-1)
		cout<<n<< " was not found";
	else
		cout<<n<<" was found in ["<<loc<<"]";
	return 0;
}