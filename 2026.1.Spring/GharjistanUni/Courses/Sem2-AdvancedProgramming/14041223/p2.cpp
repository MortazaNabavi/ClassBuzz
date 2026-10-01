#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int counter=0, answer=1;
	while (counter<b){
		answer*=a;
		counter+=1; // counter++
	}
	cout<<answer;
}