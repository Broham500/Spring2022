#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
#include<iomanip>
using namespace std;

class BankAccount
{
private:

    double Balance;
    int NumDep;
    int NumWith;
    double Rate;
    double MonRate;
    double MonInt;

public:
    BankAccount()
    {
        Balance = 0.0;
        NumDep = 0;
        NumWith = 0;
        Rate = 0.0;
    }

    BankAccount(double Balance, double Rate)
    {
        this->Balance = Balance;
        this->Rate = Rate;
        NumDep = 0;
        NumWith = 0;
    }

    //Get Methods

    double getBalance(void)
    {
        cout << setprecision(2) << fixed << showpoint;
        return Balance;
    }

    double getRate(void)
    {
        return Rate;
    }

    int getNumDep(void)
    {
        return NumDep;
    }

    int getNumWith(void)
    {
        return NumWith;
    }

    //Set Methods

    void setBalance(double Balance)
    {
        this->Balance = Balance;
    }

    void setRate(double Rate)
    {
        this->Rate = Rate;
    }

    void setNumDep(int NumDep)
    {
        this->NumDep = NumDep;
    }

    void setNumWith(int NumWith)
    {
        this->NumWith = NumWith;
    }

    //Polymorphic Withdraw Function

    virtual void With(double amount)
    {
        Balance -= amount;
        NumWith++;
    }

    //Polymorphic Deposit Function

    virtual void Dep(double amount)
    {
        Balance += amount;
        NumWith++;
    }

    //Polymorphic Print Function

    virtual void Print(void)
    {
        cout << "\n     Taylor's Bank Account Information     \n\n";
        cout << "His Balance: " << Balance << endl;
        cout << "His Interest Rate: " << Rate << endl;
        cout << "His Number of Deposits: " << NumDep << endl;
        cout << "His Number of Withdrawls: " << NumWith << endl;
    }
    
    virtual void calc(void)
    {
        MonRate = (Rate/12);
        MonInt = Balance * MonRate;
        Balance = Balance + MonInt;
    }
    
};

#endif 
