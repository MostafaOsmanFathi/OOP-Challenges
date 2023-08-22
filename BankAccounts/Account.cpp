//
// Created by mostafa on 8/22/23.
//

#include "Account.h"
Account::Account(std::string name, double balance):name(name),balance(balance) {}

bool Account::deposit(double amount) {
    if (amount<=0)return false;
    balance+=amount;
    return true;
}
bool Account::withdraw(double amount) {
    if (amount>balance)return false;
    balance-=amount;
    return true;
}
double Account::get_balance() {
    return balance;
}
void Account::print(ostream& os)const{
    os<<"Account Name: "<<name<<" Balance: "<<balance<<endl;
}