#include "stdafx.h"
#include "SalesReport.h"
#include <iostream>


SalesReport::SalesReport(){

	totalExpenses = 0.0;
	totalSales = 0.0;

}

SalesReport::SalesReport(double sales, double expenses) {
	this->totalSales = sales;
	this->totalExpenses = expenses;
}

void SalesReport::getTotals(vector<Salesman>& salesmen) {
	vector<Salesman>::iterator it = salesmen.begin();

	for (unsigned i = 0; i < salesmen.size(); i++){
		totalExpenses += salesmen.at(i).expenses;
		totalSales += salesmen.at(i).sales;
	}

}

double SalesReport::getPercentage(double base, double total){
	return (base / total) * 100;

}


void SalesReport::report(vector<Salesman>& salesmen) {

	int temp;
	do {
		cout << "\t\tEnter the number fo how you want the table sorted" << endl << endl;
		cout << endl << "\t1> By Name" << "\t2> By Sales(%)" << "\t3> By Expenses(%) \t0> Exit\n\n>";
		cin >> temp;
		cout << endl;
		if (temp == 0)
			break;
		sortVector(salesmen, temp);

		cout << setw(30) << "Sales" << setw(22) << "Expenses" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cout << setw(26) << "% of:" << setw(8) << "Total:" << setw(12) << "% of:" << setw(8) << "Total:" << endl;
		cout << "----------------------------------------------------------------" << endl;

		for (unsigned i = 0; i < salesmen.size(); i++){
			int size = salesmen.at(i).fname.size() + salesmen.at(i).lname.size();

			cout << fixed << setprecision(2);
			cout << salesmen.at(i).fname << ' '
				<< salesmen.at(i).lname
				<< setw(20 - size) << " "
				<< getPercentage(salesmen.at(i).sales, totalSales) << setw(10)
				<< salesmen.at(i).sales << setw(10)
				<< getPercentage(salesmen.at(i).expenses, totalExpenses) << setw(9)
				<< salesmen.at(i).expenses << endl << endl;
		}

		cout << "\n\t\tPress any key to continue..." << endl;
		_getch();
		system("cls");
	} while (temp != 0);

}


void SalesReport::sortVector(vector<Salesman>& salesmen, int choice){

	Salesman temp;
	int iteration;
	int index;

	int length = salesmen.size();

	for (iteration = 1; iteration < length; iteration++) {


		for (index = 0; index < length - iteration; index++) {

			switch (choice){
			case 1:
				if (salesmen.at(index).fname > salesmen.at(index + 1).fname) {
					temp = salesmen.at(index);
					salesmen.at(index) = salesmen.at(index + 1);
					salesmen.at(index + 1) = temp;
				}
				break;
			case 2:
				if (salesmen.at(index).sales < salesmen.at(index + 1).sales) {
					temp = salesmen.at(index);
					salesmen.at(index) = salesmen.at(index + 1);
					salesmen.at(index + 1) = temp;
				}
				break;
			case 3:
				if (salesmen.at(index).expenses < salesmen.at(index + 1).expenses) {
					temp = salesmen.at(index);
					salesmen.at(index) = salesmen.at(index + 1);
					salesmen.at(index + 1) = temp;
				}
				break;
			}
		}
	}




}



