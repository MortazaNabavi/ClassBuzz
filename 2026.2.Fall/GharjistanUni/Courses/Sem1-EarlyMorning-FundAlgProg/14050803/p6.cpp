#include <iostream>
using namespace std;
int main(){
	int birthYear, now=1405;
	cout <<"Enter Birth Year: ";
	cin >>birthYear;
	
	
	if (now-birthYear >= 18){
		cout <<" You can Vote!";
	}else{
		cout <<"You can NOT Vote!";
	}
	return 0;
}