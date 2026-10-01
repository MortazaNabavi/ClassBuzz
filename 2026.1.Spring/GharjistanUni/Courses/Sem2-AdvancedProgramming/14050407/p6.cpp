#include <iostream>
using namespace std;

int sigma(int n){
	int answer=0;
	for (int i=1; i<=n; i++)
		answer+=i;
	return answer;
}

int main(){
	cout<<sigma(5)<<endl<<sigma(6)
	<<endl<<sigma(15);
	return 0;
}