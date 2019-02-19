#pragma once
// header file for Mortgage class
class Mortgage {
private:
	double loanAmount, interestRate;
	int time;
	double getTerm();
public:
	Mortgage();
	Mortgage(double amt, double rate, int years);
	void setLoanAmount(double amt);
	void setInterestRate(double rate);
	void setYears(int years);
	double getMonthlyPayment();
	double getTotalPaid();
};