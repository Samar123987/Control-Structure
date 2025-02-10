// Write a program that checks whether a year entered by the user is a leap year or not using if-else.
#include <iostream>
using namespace std;

int main() {
    int year;
        cout << "Enter a year: ";
            cin >> year;

                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                        cout << year << " is a leap year.";
                            else
                                    cout << year << " is not a leap year.";

                                        return 0;
                                        }

