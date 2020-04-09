#include <vector>
#include<iostream>
#include <memory>
#include "checking_account.h"
#include "savings_account.h"

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:
    
    Customer(std::vector<std::unique_ptr <BankAccount>>& acts) : accounts{ std::move(acts) }
    {
        
    }
    friend std::ostream& operator << (std::ostream& out, const Customer& c);
    
private:    //reference to bank account
    std::vector<std::unique_ptr<BankAccount>> accounts;


};





#endif // !CUSTOMER_H
