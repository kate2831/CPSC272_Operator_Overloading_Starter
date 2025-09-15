//
// Created by Christopher Vaughn
// Date: 9/15/25
// Project: 272 Forking & Overloading Exercise
//

#ifndef CPSC272_OPERATOR_OVERLOADING_STARTER_SERVICEACCOUNT_H
#define CPSC272_OPERATOR_OVERLOADING_STARTER_SERVICEACCOUNT_H
#include <string>

/**
 * @class ServiceAccount
 * @brief Represents a service account with identifier, password, and balance management
 * 
 * This class encapsulates account information including a 4-character identifier,
 * password (minimum 8 characters), and account balance (non-negative).
 * Provides operator overloading for equality and greater-than comparisons based on balance.
 */
class ServiceAccount {
private:
    std::string accountIdentifier;  ///< 4-character account identifier
    std::string accountPassword;    ///< Account password (minimum 8 characters)
    double accountBalance;          ///< Account balance (must be non-negative)

public:
    /**
     * @brief Parameterized constructor
     * @param identifier 4-character account identifier
     * @param password Account password (minimum 8 characters)
     * @param balance Initial account balance (must be non-negative)
     */
    ServiceAccount(std::string, std::string, double);
    
    /**
     * @brief Default constructor
     * Initializes account with default values: identifier="default", password="", balance=0.0
     */
    ServiceAccount();
    
    /**
     * @brief Get the current account balance
     * @return Current balance as a double
     */
    double getBalance() const;
    
    /**
     * @brief Get the account identifier
     * @return Account identifier as a string
     */
    std::string getIdentifier() const;
    
    /**
     * @brief Get the account password
     * @return Account password as a string
     */
    std::string getPassword() const;
    
    /**
     * @brief Set a new password for the account
     * @param password New password (must be at least 8 characters)
     * @note Prints error message if password is less than 8 characters
     */
    void setPassword(std::string);
    
    /**
     * @brief Set a new identifier for the account
     * @param identifier New identifier (must be exactly 4 characters)
     * @note Prints error message if identifier is not exactly 4 characters
     */
    void setIdentifier(std::string);
    
    /**
     * @brief Set a new balance for the account
     * @param balance New balance (must be non-negative)
     * @note Prints error message if balance is negative
     */
    void setBalance(double);
};

/**
 * @brief Equality operator overload for ServiceAccount objects
 * @param lhs Left-hand side ServiceAccount object
 * @param rhs Right-hand side ServiceAccount object
 * @return true if both accounts have the same balance, false otherwise
 * @note Comparison is based solely on account balance
 */
bool operator==(const ServiceAccount&, const ServiceAccount&);

/**
 * @brief Greater-than operator overload for ServiceAccount objects
 * @param lhs Left-hand side ServiceAccount object
 * @param rhs Right-hand side ServiceAccount object
 * @return true if left account has greater balance than right account, false otherwise
 * @note Comparison is based solely on account balance
 */
bool operator>(const ServiceAccount&, const ServiceAccount&);

#endif //CPSC272_OPERATOR_OVERLOADING_STARTER_SERVICEACCOUNT_H