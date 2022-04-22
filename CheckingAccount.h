#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
//#include <iostream>
#include "BankAccount.h"
using namespace std;

class CheckingAccount: public BankAccount
{
public:
    CheckingAccount(): BankAccount()
    {
        
    }

    CheckingAccount(double balance, double rate): BankAccount(balance, rate)
    {
    
    }

    void With(double amount)
    {
        if (getBalance() < amount)
        {
            setBalance(getBalance() - 15);
        }
        else
        {
            BankAccount::With(amount);
        }
    }
};

#endif

