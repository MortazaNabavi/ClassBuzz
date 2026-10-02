#include <iostream>
using namespace std;
int main(){
	
	cout<<"Enter Your BirthYear: ";
	int BirthYear;
	cin>>BirthYear;
	
		
	int year=2025-BirthYear;
	cout<<"Year: "<<year<<endl;
	
	double century= year/100;
	cout<<"Century: "<<century<<"\n";
	
	int month=year*12;
	cout<<"Month: "<<month<<"\n";
	
	int day=year*365;
	cout<<"Day: "<<day<<endl;
	
	int week=year*52;
	cout<<"Week: "<<week<<endl;
	
	int _hour=day*24;
	cout<<"Hour: "<<_hour<<"\n";
	
	int minute= _hour*60;
	cout<<"Minute: "<<minute<<endl;
	
	int second=minute*60;
	cout<<"Second: "<<second;
		
	return 0;
}