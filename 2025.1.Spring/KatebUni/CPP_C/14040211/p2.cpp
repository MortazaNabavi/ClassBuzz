#include <iostream>
using namespace std;
int main(){
	
	int BirthYear;
	cout<<"Enter Year of Birth: ";
	cin>>BirthYear;
	
	int year=2025-BirthYear;
	cout<<"Year: "<<year<<endl;
	
	int month=year*12;
	cout<<"Month: "<<month<<"\n";
	
	int day=year*365;
	cout<<"Day: "<<day<<"\n";
	
	int week=year*52;
	cout<<"Week: "<<week<<endl;
	
	int hour=day*24;
	cout<<"Hour: "<<hour<<endl;
	
	int minute=hour*60;
	cout<<"Minute: "<<minute;
	
	int second=minute*60;
	cout<<"\nSecond: "<<second<<endl;
	
	int season=year*4;
	cout<<"Season: "<<season<<endl;
	
	int century=year/100;
	cout<<"Century: "<<century;
	
	return 0;
}