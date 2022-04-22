#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
//#include <iostream>
#include "BankAccount.h"
using namespace std;

class SavingsAccount: public BankAccount
{
    bool status;
public:
    SavingsAccount(): BankAccount()
    {
        status = false;
    }

    SavingsAccount(double balance, double rate): BankAccount(balance, rate)
    {
        if (balance < 25)
        {
            status = false;
        }
    }

    void With(double amount)
    {
        if (getBalance() >= 25)
        {
            BankAccount::With(amount);
        }

        if (getBalance() < 25)
        {
            status = false;
        }
    }

   
    void Dep(double amount)
    {
        BankAccount::Dep(amount);
        if (!status && getBalance() >= 25)
        {
            status = true;
        }
    }

   
    bool getStatus(void)
    {
        return status;
    }

 
    void print(void)
    {
        BankAccount::Print();
        cout << "Account Status: ";
        if (status)
            cout << "Active\n";
        else
            cout << "Inactive\n";
    }
};

#endif
