#include <iostream>
using namespace std;
int main(){
	int a=1, b=1, c=1,d=1;
	for (int i=1; i<=3; i++){
		cout<<"First Loop, i= "<<a++<<"\n\t";
		for (int j=1; j<=4; j++){
			cout<<"Second Loop, j= "<<b++<<"\n\t";
			for(int k=1; k<=7; k++){
				cout<<"\tThird Loop, k= "<<c++<<"\n\t";
			}
		}
	}
}