/*
    Assignment: Chapter 4 Excersize 10
   
    Programmer: Vincent Epefanio
   
    Date: 10/24/2024

Requirements: Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year. The program should then display the number of days in that month. Use the following criteria to identify leap years:

Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4. For example, 2008 is a leap year but 2009 is not.
 */





#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    } else {
        return year % 4 == 0;
    }
}


int daysInMonth(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 ||
        month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else {
        return -1; 
    }
}

int main() {
    int month, year;

    cout << "Enter a month (1–12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    int days = daysInMonth(month, year);

    if (days != -1) {
        cout << days << " days" << endl;
    } else {
        cout << "Invalid month" << endl;
    }

    return 0;
}
