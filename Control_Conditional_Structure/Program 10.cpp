//Write a program to determine the eligibility of a person to vote based on their age (age ≥ 18 is eligible).
#include <iostream>
using namespace std;

int main() {
    int age;
        cout << "Enter your age: ";
            cin >> age;

                if (age >= 18)
                        cout << "You are eligible to vote.";
                            else
                                    cout << "You are not eligible to vote.";

                                        return 0;
                                        }

