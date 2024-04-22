//Example of comparing floating-point numbers for equality: Body temperature.

#include <iostring>
#include <cmath>

int main(){
	double bodyTemp;
	
	cout << "Enter body temperature in Fahrenheit: ";
	cin >> bodyTemp;
	
	if (fabs(bodyTemp - 98.6) < 0.0001){
		cout << "Tempreature is exactly normal." << endl;
	}
	else if(bodyTemp > 98.6){
		cout << "Tempreature is above normal." << endl;
	}
	else {
		cout << "Tempreature is below normal." << endl;
	}
	
	return 0;
}

