/*
*Simple program that calculates the toll amount for travel along a toll road or toll lane.
*Total amount is based on time of day, day of the week and number of people in the vehicle
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int timeHour;      //Time of travel hour (24 hour format)
	int timeMinute;    //Time of travel minute
	int typeOfDay;     //0-means weekday, 1-means weekend /holiday
	int numPersons;    // Persons in Vehicle
	char inputColon;   //Used to read time format
	double tollAmount;

	cout << "Enter time of travel (HH:MM in 24 hour format):";

	//Read an integer (hour), colon (char), and integer (minute)
	cin >> timeHour >> inputColon >> timeMinute;

	cout << "Enter type of day (0 - weekday, 1 - weekend/holiday): ";
	
	cin >> typeOfDay;

	cout << "Enter number of pepol in the car ";
	cin >> numPersons; // the input construct will generate a newLine character there is no need for you to generate one

	if (typeOfDay == 0) { //Weekday time and rates
		//Determine toll based on hour of travel
//Determine toll based on hour of travel 
		if (timeHour < 6) {            //Before 6:00 am
			tollAmount = 1.55;
		}
		else if (timeHour < 10) {    // 6 am to 9:59 am
			tollAmount = 4.56;
		}
		else if (timeHour < 18) {    // 10 am to 5:59 pm
			tollAmount = 2.35;
		}
		else {                      // 6 pm and after
			tollAmount = 1.55;
		}
	}
	else {
		//sets type of day to weekend/holiday time and rates
		//Determine toll based on hour of travel
		if (timeHour < 8) {      // Before 8:00am
			tollAmount = 1.55;
		}
		else if (timeHour < 12) { // 12 pm to 3:59pm
			tollAmount = 3.05;
		}
		else if (timeHour < 16) {
			tollAmount = 3.45;
		}
		else if (timeHour < 19) {
			tollAmount = 3.60;
		}
		else if (timeHour < 22) {
			tollAmount = 3.05;
		}
		else {
			tollAmount = 1.55;
		}

	}

	// Check if a carpool discount is applied
	if (numPersons >= 3) {
		if ((typeOfDay == 0) && (timeHour >= 6) && (timeHour < 10)) {
			tollAmount = tollAmount * 0.5;
		}
		else {
			tollAmount = 0.0;
		}
	}


	//Output time and toll amount am/pm format
	cout << "Toll at " << timeHour << ":";

	//Ouput hour adjusting for am/pm format
	if (timeHour == 0) {
		cout << "12:";
	}
	else if (timeHour <= 12) {
		cout << timeHour << ":";
	}
	else {
		cout << timeHour - 12 << ":";
	}

	//output minute with formatting to print two digits for minutes
	cout << setw(2) << setfill('0') << timeMinute;
	cout << " is " << tollAmount << endl;

	// Output am/pm
	if (timeHour < 12) {
		cout << " am";
	}
	else {
		cout << " pm";
	}

	cout << " is " << tollAmount << endl;

	return 0;

}