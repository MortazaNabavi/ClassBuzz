#include <iostream>
using namespace std;
int main(){
	
	int BirthYear;
	
	cout<<"Enter BirthYear: "; 
	cin>>BirthYear;
	
	int year;
	year=2025-BirthYear;
	
	int month=year*12;
	int day=year*365;
	int week=day/7;
	int hour=day*24;
	int minute;
	minute=hour*60;
	int second=minute*60;
	
	cout<<"Year: "<<year<<endl;
	cout<<"Month: "<<month<<"\n";
	cout<<"Day: "<<day<<endl;
	cout<<"Week: "<<week<<endl;
	cout<<"Hour: "<<hour<<"\n";
	cout<<"Minute: "<<minute<<"\n";
	cout<<"Second: "<<second<<endl;
	
	return 0;
}