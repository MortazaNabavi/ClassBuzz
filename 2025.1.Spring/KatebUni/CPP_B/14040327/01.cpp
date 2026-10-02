#include <iostream>
using namespace std;
int main(){
	while (true){
		int a;
		cout<<"\nEnter a Number: ";
		cin>>a;
		
		int flag=0;
		int counter=1;
		
		while (counter <= a){
			if (a%counter==0)
				flag++;
			counter++;
		}
		
		if (flag!=2)
			cout<<a<<" is NOT Prime Number!";
		else
			cout<<a<<" is Prime Number!";
	}
}