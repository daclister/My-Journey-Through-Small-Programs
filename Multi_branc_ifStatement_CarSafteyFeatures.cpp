/*
*Here we write mulltiple if statements in order to figure out what saftey features
*our car has or lacks.
*/
//A program with Multiple distinct if statements.

#include <iostream>
using namespace std;

int main (){
	int carYear;
	
	cout << "Enter your cars year" << endl;
	cin >> carYear;
	
	if (carYear < 1886){
		cout << "Cars have yet to be invented." << endl;
	}else{
		if(carYear < 1903){
			cout << "Very little to no safety features were implemented." << endl;
		}
		if (carYear > 1903){
			cout << "Probably has windshield wiper blades." << endl;
		}
		if (carYear > 1911){
			cout << "Probably has Rear-view Mirrors." << endl;
		}
		if (carYear > 1927){
			cout << "Probably has laminated glass also known as safety glass." << endl;
		}
		if (carYear > 1950){
			cout << "Probably has Airbags invited by walter Linder." << endl;
		}
		if (carYear > 1959){
			cout << "Probably has a three-point belt system." << endl;
		}
		if (carYear > 1968) {
			cout << "Probably has a collapsible steering column to help \nthe car trasfer energy from the steering wheel into the gearbox." << endl;
			cout << "Probably has Side Marker Lights." << endl;
		}
		if (carYear > 1971){
			cout << "Probably has head rests." << endl;
		}
		if (carYear > 1990) {
			cout << "Probably has Electronic Stability Control.\nWhich helps a vehicle maintain control, and prevents extreme movements." << endl;
		}
		if (carYear > 1994) {
			cout << "Probably has side impact protection and knee air bags." << endl;
		}
		if (carYear > 2000){
			cout << "Can have theses saftey features implemented.\n*Tire-pressure monitor\n*blind spot Detection\n*Lane departure warning\n*Automatic Braking\n*Anit-skid Assitstance\n*Backup Cameras" << endl;
		}
		
	}
	return 0;
}


/*
*In this program multiple if statements can execute giving you the effect of each condition running
*if each check is satisfied
*/