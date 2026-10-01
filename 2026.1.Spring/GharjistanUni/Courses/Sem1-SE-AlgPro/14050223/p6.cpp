#include<iostream>
using namespace std;
int main(){
	int number;
	cin>>number;
	
	if (number==0)
		cout<<"Sefr";
	else if (number==1)
		cout<<"Yak";
	else if (number==2)
		cout<<"Do";
	else if (number==3)
		cout<<"Se";
	else if (number==4)
		cout<<"Chahar";
	else if (number==5)
		cout<<"Panj";
	else if (number>5)
		cout<<"Bishtar az Panj";
	else
		cout<<"Manfi";
	
}