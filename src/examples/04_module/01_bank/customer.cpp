//customer.cpp

#include "customer.h"

std::ostream& operator<<(std::ostream& out, const Customer& c)
{
    for (auto& bank_account : c.accounts)
    {                       //telling c++ i want the value not the address
        out << "Balance: " << *bank_account << "\n";
    }
        return out;
}
