#include <iostream>
using namespace std;
int main(){
	int m;cin>>m;
	
	switch (m){
		case 1:
		case 2:
		case 3: cout<<"Bahar";break;	
		
		case 4:	case 5: case 6: cout<<"Tabestan";break;	
			
		case 7:	case 8: case 9: cout<<"Khazan";break;
		
		case 10: 
		case 11:
		case 12: cout<<"Zamestan";break;
		default: cout<<"Error!";
	}
		
	return 0;
}