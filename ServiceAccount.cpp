//
// Created by Christopher Vaughn on 9/15/25.
//
#include "ServiceAccount.h"
#include <iostream>


ServiceAccount::ServiceAccount() {
    this->setBalance(0.0);
    this->setPassword("");
    this->setIdentifier("default");
}
ServiceAccount::ServiceAccount(std::string id, std::string passwd, double balance) {
    this->setBalance(balance);
    this->setPassword(passwd);
    this->setIdentifier(id);
}

double ServiceAccount::getBalance() const {
    return this->accountBalance;
}
std::string ServiceAccount::getIdentifier() const {
    return this->accountIdentifier;
}
std::string ServiceAccount::getPassword() const {
    return this->accountPassword;
}
void ServiceAccount::setPassword(std::string password) {
    if (password.length() >= 8)
        this->accountPassword = password;
    else
        std::cout << "Password must be at least 8 characters" << std::endl;
}
void ServiceAccount::setIdentifier(std::string identifier) {
    if (identifier.length() == 4)
        this->accountIdentifier = identifier;
    else
        std::cout << "Identifier must be 4 characters" << std::endl;
}
void ServiceAccount::setBalance(double balance) {
    if (balance>=0)
        this->accountBalance = balance;
    else
        std::cout << "Balance cannot be negative" << std::endl;
}
bool operator==(const ServiceAccount& a, const ServiceAccount& b) {
    return a.getBalance() == b.getBalance();
}
bool operator>(const ServiceAccount& a, const ServiceAccount& b) {
    return a.getBalance() > b.getBalance();
}



