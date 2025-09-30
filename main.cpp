//
// Kate Rivera
// Date: 9/22/25
// Project: 272 Forking & Overloading Exercise
//
#include <iostream>
#include "ServiceAccount.h"

/**
 * @brief Main function demonstrating ServiceAccount operator overloading
 * 
 * This program demonstrates the functionality of the ServiceAccount class,
 * specifically testing the overloaded equality (==) and greater-than (>) operators.
 * 
 * The program creates two ServiceAccount objects and compares them using
 * custom operators that compare based on account balance.
 * 
 * @return 0 on successful execution
 */
int main() {
    // Create first ServiceAccount with identifier "0112", password "password", and balance $1000.00
    // ServiceAccount a("0112", "password", 1000.00);
    
    // Create second ServiceAccount with identifier "9098", same password, and same balance $1000.00
    // ServiceAccount b("9098", "password", 1000.00);
    
    // Create two new ServiceAccount objects to verify operator works
    ServiceAccount a("0112", "password", 1000.00);
    ServiceAccount b("9098", "password", 500.00);

    // Test equality operator (==) - compares accounts based on balance only
    if (a == b)
        std::cout << "Accounts are equal" << std::endl;
    else
        std::cout << "Accounts are not equal" << std::endl;
    
    // Modify account 'a' balance to $10.00 to demonstrate the greater-than operator
    a.setBalance(10.00);
    
    // Test greater-than operator (>) - compares accounts based on balance only
    if (a > b)
        std::cout << "Account a has more money" << std::endl;
    else
        std::cout << "Account b has more money" << std::endl;
    
    // Test less-than operator (<) - compares accounts based on balance only
    if (a > b)
        std::cout << "Account a has less money" << std::endl;
    else
        std::cout << "Account b has less money" << std::endl;
    
    return 0;  // Indicate successful program execution
}
