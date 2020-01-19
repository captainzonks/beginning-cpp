// Section 8 Challenge
/*
 * For this program I will be using US dollars and cents
 * 
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should then display how to provide that change to the user
 * 
 * In the US:
 * 1 dollar is 100 cents
 * 1 quarter is 25 cents
 * 1 dime is 10 cents
 * 1 nickel is 5 cents
 * 1 penny is 1 cent
 * 
 * Here is a sample run:
 * 
 * Enter an amount in cents: 92
 * 
 * You can provide this change as follows:
 * dollars: 0
 * quarters: 3
 * dimes: 1
 * nickels: 1
 * pennies: 2
 * 
 */ 

#include <iostream>

using namespace std;

int main() {
    
    const int dollar_to_cents {100}, quarter_to_cents {25}, dime_to_cents {10}, nickel_to_cents {5}, penny_to_cents {1};
    int total_dollars {}, total_quarters {}, total_dimes {}, total_nickels {}, total_pennies {};
    
    int total_cents {};
    cout << "Please enter an amount in cents: ";
    cin >> total_cents;
    
    total_dollars = total_cents / dollar_to_cents;
    total_cents %= dollar_to_cents;
    
    total_quarters = total_cents / quarter_to_cents;
    total_cents %= quarter_to_cents;
    
    total_dimes = total_cents / dime_to_cents;
    total_cents %= dime_to_cents;
    
    total_nickels = total_cents / nickel_to_cents;
    total_cents %= nickel_to_cents;
    
    total_pennies = total_cents;
    
    cout << "\n=======================" << endl;
    cout << "Your total change can be divided as: " << endl;
    cout << "Dollars: " << total_dollars << endl;
    cout << "Quarters: " << total_quarters << endl;
    cout << "Dimes: " << total_dimes << endl;
    cout << "Nickels: " << total_nickels << endl;
    cout << "Pennies: " << total_pennies << endl;
    
    cout << endl;
    return 0;
}