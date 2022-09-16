// CGT113-lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;

// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int spacer = 0;
	string statement = " ";
	int total = 1;
	int counter = 1;
	bool negative = true;
	string str;
	

	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> spacer;

	//this loop keeps going until it is a positive number
	while (negative) {
		if (spacer < 0) {
			cout << "You're good...I'm better. Enter a positive number: ";
			cin >> spacer;
		}
		else {
			negative = false;
		}

	}

	stringstream ss;
	ss << spacer;
	ss >> str;

	statement = str + "! = ";
	str = "";

	for (size_t i = 1; i <= spacer; i++) {
		total = total * i;
		stringstream ss;
		ss << i;
		ss >> str;
		if (i == spacer) {
			statement += str + " ";
		}
		else {
			statement += str + " * ";
		}
	}
	stringstream st;
	st << total;
	st >> str;

	statement += "= " + str;
	
	cout << statement << endl;
}
void arithmetic() {
	int startNum = 0;
	int addNum = 0;
	int totalNum = 0;
	int total = 0;
	string str;
	string statement = "";
	int number = 0;


	cout << "Arithmatic: " << endl;
	cout << "Enter number to start at: ";
	cin >> startNum;

	cout << endl << "Enter number to add each time: ";
	cin >> addNum;

	cout << endl << "Enter the number of elements in the series: ";
	cin >> totalNum;

	number = startNum;
	total = startNum;

	stringstream ss;
	ss << startNum;
	ss >> str;

	statement = str + " + ";

	
	for (size_t i = 1; i < totalNum; i++) {
		number = number + addNum;
		total += number;

		stringstream ss;
		ss << number;
		ss >> str;

		if (i == (totalNum - 1)) {
			statement += str + " = ";
		}
		else {
			statement += str + " + ";
		}
	}

	stringstream st;
	st << total;
	st >> str;

	statement += str;

	cout << statement << endl;

}
void geometric() {
	int startNum = 0;
	int mulNum = 0;
	int totalNum = 0;
	int total = 0;
	int num = 0;
	string statement = "";
	string str;
	
	cout << "Geometric" << endl;
	cout << "Enter a number to start at: ";
	cin >> startNum;

	cout << endl << "Enter a number to multipy by each time: ";
	cin >> mulNum;

	cout << endl << "Enter the number of elements in the series: ";
	cin >> totalNum;

	total = startNum;
	num = startNum;

	stringstream ss;
	ss << startNum;
	ss >> str;

	statement = str + " + ";

	for (size_t i = 1; i < totalNum; i++) {
		num = (num * mulNum);
		total += num;

		stringstream ss;
		ss << num;
		ss >> str;

		if (i == (totalNum - 1)) {
			statement += str + " = ";
		}
		else {
			statement += str + " + ";
		}
	}

	stringstream st;
	st << total;
	st >> str;

	statement += str;

	cout << statement << endl;


}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

