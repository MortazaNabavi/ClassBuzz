 #include <iostream>
 using namespace std;
 int main()
{
 	double w,h,bmi;
 	cin>>w>>h;
 	bmi=w/(h*h);
 	cout<<bmi;
 	
 	if (bmi<20)
 		cout<<"Kambood Vazn";
 	else if (bmi<25)
 		cout<<"Vazn Tait";
 	else if (bmi<30)
 		cout<<"Ezafa V.";
 	else if (bmi<35)
 		cout<<"Chagi 1";
 	else
 		cout<<"Chagi 2";
 		
 		
 		
 		
 		
 }