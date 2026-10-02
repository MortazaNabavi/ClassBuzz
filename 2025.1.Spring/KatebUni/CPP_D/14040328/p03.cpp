 #include <iostream>
 using namespace std;
 int main(){
 	double a, b, c;
 	cin>>a>>b>>c;
 	bool C=a+b>c;
 	bool B=a+c>b;
 	bool A=b+c>a;
 	if (A && B && C)
 		cout<<"Triangle";
 	else
 		cout<<"NOT Triangle";
 	
 	return 0;
 }