#include <iostream>
#include "ServiceAccount.h"

int main() {
    ServiceAccount a("0112", "password", 1000.00);
    ServiceAccount b("9098", "password", 1000.00);

    if (a == b)
        std::cout << "Accounts are equal" << std::endl;
    else
        std::cout << "Accounts are not equal" << std::endl;
    return 0;
}