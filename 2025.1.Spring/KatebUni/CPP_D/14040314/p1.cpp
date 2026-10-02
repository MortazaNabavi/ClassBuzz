#include <iostream>
using namespace std;
int main(){
	int n, counter, sum;
	cin>>n;
	counter=0;
	sum=0;
	
	FolanJa:
	if (n>counter){
		int number;
		cin>>number;
		sum+=number; 	//	sum=sum+number;
		counter+=1;	//counter=counter+1;
		goto FolanJa;
	}else{
		cout<<"SUM: "<<sum;
		cout<<endl;
		cout<<"AV: "<<sum/n;	
	}
	return 0;
}