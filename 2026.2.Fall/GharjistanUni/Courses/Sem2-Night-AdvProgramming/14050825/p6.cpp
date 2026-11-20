#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >>str;
	
	int flag=0;
	for (int i=0; i<str.length(); i++){
		char c=str[i];
		if(c=='a' or c=='i' or c=='u' or c=='o' or c=='e')
			flag++;
	}
	cout<<flag;
	return 0;
}