//	This program calculates the gross pay for employees

#include <iostream>
using namespace std;
int main()
{
	//Calculating gross pay and taxes
	int weekly_working_hours = 0;
	int Dependents_number;
	
	
	cout << "Enter worked hours and number of dependents:\n";
	cin >> weekly_working_hours >> Dependents_number;
	double Gross_pay = weekly_working_hours * 16.78;
	double Overtime_pay = ((weekly_working_hours - 40) * 16.78 * 1.5);
	double Social_security_tax = Gross_pay * .06;
	double Fedral_income_tax = Gross_pay * .014;
	double State_income_tax = Gross_pay * .05;
	int Union_dues_tax = 10;
	double Additional_pay = 40*16.78 + (weekly_working_hours - 40) * 16.78 * 1.5;
	//Check if there is additional pay or not and calculate it
	if (weekly_working_hours <= 40)
	{
		cout << "Your gross pay is " << Gross_pay + (weekly_working_hours - 40 * 16.78 * 1.5) << " $" << endl;
		cout << "Social security tax = " << Social_security_tax << " $ " << endl;
		cout << "Fedral income tax = " << Fedral_income_tax  << " $ " << endl;
		cout << "State income tax = " << State_income_tax << " $ " << endl;
		cout << "Union dues tax = " << Union_dues_tax << " $ " << endl;
		if (Dependents_number >= 3)
		{
			Gross_pay -= 35;
			cout << "There are 35$ withheld because your number of dependents is more than or equal three members" << endl;
		}
		
		cout << "Your salary after deduction all taxes is " << Gross_pay - Social_security_tax - Fedral_income_tax - State_income_tax - Union_dues_tax << " $ " << endl;

	}

	// calculate the additional pay
	else {

		cout << "Your gross pay is " << Additional_pay << " $" << endl;
		cout << "Social security tax = " << Additional_pay * .06 << " $ " << endl;
		cout << "Fedral income tax = " << Additional_pay*.14 << " $ " << endl;
		cout << "State income tax = " << Additional_pay * .05 << " $ " << endl;
		cout << "Union dues tax = " << Union_dues_tax << endl;
		if (Dependents_number >= 3){
			Gross_pay -= 35;
			cout << "There are 35$ withheld because your number of dependents is more than or equal three members" << endl;


		cout << "Your salary after deduction all taxes is " << Additional_pay - (Additional_pay * .06) - (Additional_pay * .14) - (Additional_pay * .05) - Union_dues_tax - 35 << " $ " << endl;


		
		}
		else
			cout << "Your salary after deduction all taxes is " << Additional_pay - (Additional_pay * .06) - (Additional_pay * .14) - (Additional_pay * .05) - Union_dues_tax << " $ " << endl;

	}
}
