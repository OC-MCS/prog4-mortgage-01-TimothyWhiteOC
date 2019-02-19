// Timothy White - Assignment 4 - Mortgage
#include <iostream>
#include <iomanip>
#include <string>
#include "Mortgage.h"
using namespace std;

int parseInt(string str);
double parseDouble(string str);

int main() {
	Mortgage m;			// Mortgage object to be used
	string input;		// Tmp var for user input
	double amt, rate;	// Tmp vars for user input (loan amount & interest rate)
	int years;			// Tmp var for user input (# years)

	do {
		cout << "Enter loan amount: ";
		cin >> input;
		amt = parseDouble(input);
		if (amt < 0) {
			cout << "Invalid input. Try again." << endl;
		}
	}
	while (amt < 0);
	m.setLoanAmount(amt);

	do {
		cout << "Enter interest rate (e.g. 0.05 for 5%): ";
		cin >> input;
		rate = parseDouble(input);
		if (rate < 0) {
			cout << "Invalid input. Try again." << endl;
		}
	}
	while (rate < 0);
	m.setInterestRate(rate);

	do {
		cout << "Enter loan duration (years): ";
		cin >> input;
		years = parseInt(input);
		if (years < 0) {
			cout << "Invalid input. Try again." << endl;
		}
	}
	while (years < 0);
	m.setYears(years);

	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly Payment: $" << m.getMonthlyPayment() << endl;
	cout << "Total Payment: $" << m.getTotalPaid() << endl;

	return 0;
}

// int parseInt(): takes a string and attempts to convert it to an int
// string str: string to be converted
// returns: the converted int if successful, otherwise -1 (we know negative values are not valid)
int parseInt(string str) {
	int val;
	try {
		val = stoi(str);
	}
	catch (const exception&) {
		val = -1;
	}
	return val;
}

// double parseDouble(): takes a string and attempts to convert it to a double
// string str: string to be converted
// returns: the converted double if successful, otherwise -1 (we know negative values are not valid)
double parseDouble(string str) {
	double val;
	try {
		val = stod(str);
	}
	catch (const exception&) {
		val = -1;
	}
	return val;
}