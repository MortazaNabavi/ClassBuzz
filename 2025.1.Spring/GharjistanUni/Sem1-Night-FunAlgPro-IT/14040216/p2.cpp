#include <iostream>
using namespace std;
int main(){
	
	int BirthYear;
	cout<<"Enter Birth Year: ";
	cin>>BirthYear;
	
	int year;
	year=2025-BirthYear;
	cout<<"Year: "<<year<<endl;
	
	int month=year*12;
	cout<<"Month: "<<month<<endl;
	
	int day=year*365;
	cout<<"Day: "<<day<<endl;
	
	int week=year*52;
	cout<<"Week: "<<week<<endl;
	
	int hour=day*24;
	cout<<"Hour: "<<hour<<endl;
	
	int minute;
	minute=hour*60;
	cout<<"Minute: "<<minute<<endl;
	
	int second=minute*60;
	cout<<"Second: "<<second;
	
	return 0;
}