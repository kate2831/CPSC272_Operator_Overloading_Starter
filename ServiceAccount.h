//
// Created by Christopher Vaughn on 9/15/25.
//

#ifndef CPSC272_OPERATOR_OVERLOADING_STARTER_SERVICEACCOUNT_H
#define CPSC272_OPERATOR_OVERLOADING_STARTER_SERVICEACCOUNT_H
#include <string>


class ServiceAccount {
private:
    std::string accountIdentifier;
    std::string accountPassword;
    double accountBalance;
public:
    ServiceAccount(std::string, std::string, double);
    ServiceAccount();
    double getBalance() const;
    std::string getIdentifier() const;
    std::string getPassword() const;
    void setPassword(std::string);
    void setIdentifier(std::string);
    void setBalance(double);
};
bool operator==(const ServiceAccount&, const ServiceAccount&);
bool operator>(const ServiceAccount&, const ServiceAccount&);

#endif //CPSC272_OPERATOR_OVERLOADING_STARTER_SERVICEACCOUNT_H