#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double money,rate,pay,total,interest,balance;
	cout << "Enter initial loan : ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (int i = 1 ;; i++){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << money;
	interest = money*rate/100;
	cout << setw(13) << left << interest;
	total = interest + money;
	cout << setw(13) << left << total;
	if(pay > total) {
		pay = total;
		cout << setw(13) << left << pay;
	}
	else cout << setw(13) << left << pay;
	balance = total-pay;
	cout << setw(13) << left << balance;
	if(balance == 0) break;
	money = balance;
	cout << "\n";	
	}
	return 0;
}
