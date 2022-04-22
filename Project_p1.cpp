#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
    BankAccount *acct1, *acct2, *acct3;

    acct1 = new CheckingAccount();
    acct2 = new CheckingAccount(1000, 0.03);
    acct3 = new SavingsAccount(15, 0.04);

    acct1->Dep(100);
    acct1->Print();

    acct2->With(300);
    acct2->Print();
    acct2->With(800);
    acct2->Print();
    acct2->Dep(2000);
    acct2->Print();
    acct2->calc();
    acct2->Print();

    acct3->With(10);
    acct3->Print();
    acct3->Dep(15);
    acct3->Print();
    acct3->With(10);
    acct3->Print();
    acct3->calc();
    acct3->Print();
}
