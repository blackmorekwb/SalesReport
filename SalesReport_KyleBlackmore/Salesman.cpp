#include "stdafx.h"
#include "Salesman.h"
#include <iostream>

Salesman::Salesman(){
	fname = "Test";
	lname = "Run";
	expenses = 400.0;
	sales = 2000.50;

}

Salesman::Salesman(string fname, string lname){
	this->fname = fname;
	this->lname = lname;

}

Salesman::Salesman(string fname, string lname, double expenses, double sales){
	this->fname = fname;
	this->lname = lname;
	this->expenses = expenses;
	this->sales = sales;
}


