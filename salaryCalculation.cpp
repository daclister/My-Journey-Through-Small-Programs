//Salary calculation wtih branches:

#include <iostream>
using namespace std;

int main(){
	int hourlWage;
	int weeklyHours;
	int weeklySalary;
	int overTimeHours;
	const int WEEKLY_LIMIT = 40;
	
	cout << "Enter hourly wage: " << endl;
	cin >> hourlywage;
	
	cin >> weeklyHours;
	
	if (weeklyHours <= WEEKLY_LIMIT) {
		weeklySalary = weeklyHours * hourlWage;
	}
	else{
		overTimeHours = weeklyHours - WEEKLY_LIMIT;
		weeklySalary = static_cast<int>((hourlWage * WEEKLY_LIMIT) + (hourlyWage * overTimeHours * 1.5));
	}
	cout << "Weekly salary is: " << weeklySalary << endl;
	
	return 0;
}