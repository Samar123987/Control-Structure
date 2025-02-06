// Write a program to print the factorial of a number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
        cout << "Enter a number: ";
            cin >> num;

                int i = 1;
                    while (i <= num) {
                            fact =fact* i;
                                    i++;
                                        }

                                            cout << "Factorial of " << num << " is " << fact;
                                                return 0;
                                                }

