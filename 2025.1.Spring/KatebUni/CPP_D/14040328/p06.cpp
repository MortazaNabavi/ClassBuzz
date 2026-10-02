 #include <iostream>
 using namespace std;
 bool check(double a1, double a2, double a3){
  	return a1+a2>a3;
 }
 int main(){
 	double a, b, c;
 	cin>>a>>b>>c;
 	
 	if (check(a,b,c) && check(a,c,b) && check (c,b,a))
 		cout<<"Triangle";
 	else
 		cout<<"NOT Triangle";
 	
 	return 0;
 }