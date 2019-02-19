#include <cmath>
#include "Mortgage.h"
using namespace std;

// Default constructor
Mortgage::Mortgage() {}

// Constructor that instantiates all values
Mortgage::Mortgage(double amt, double rate, int years) {
	loanAmount = amt;
	interestRate = rate;
	time = years;
}

// Calculate the "term" as described in the book
double Mortgage::getTerm() {
	return pow(1 + (interestRate / 12.0), 12 * time);
}

// Setter for loan amount
void Mortgage::setLoanAmount(double amt) {
	loanAmount = amt;
}

// Setter for interest rate
void Mortgage::setInterestRate(double rate) {
	interestRate = rate;
}

// Setter for # years
void Mortgage::setYears(int years) {
	time = years;
}

// Calculate the monthly payment
double Mortgage::getMonthlyPayment() {
	return (loanAmount * (interestRate / 12.0) * getTerm()) / (getTerm() - 1);
}

// Calculate the total payment
double Mortgage::getTotalPaid() {
	return getMonthlyPayment() * 12 * time;
}
