#include <iostream>
using namespace std;
int main(){
	
		int a;
		cout<<"\nEnter a Number: ";
		cin>>a;
		int flag=0;
		for (int counter=1; counter<=a; counter++){
			if (a%counter==0)
				flag++;
		}
		if (flag==2)
			cout<<a<<" is Prime Number!";
		else
		cout<<a<<" is NOT Prime Number!";
	
	
}