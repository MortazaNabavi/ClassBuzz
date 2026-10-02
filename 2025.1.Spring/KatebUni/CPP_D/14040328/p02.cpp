 #include <iostream>
 using namespace std;
 int main(){
 	double a, b, c;
 	cin>>a>>b>>c;
 	
 	if (a+b>c && a+c>b and c+b>a)
 		cout<<"Triangle";
 	else
 		cout<<"NOT Triangle";
 	
 	return 0;
 }