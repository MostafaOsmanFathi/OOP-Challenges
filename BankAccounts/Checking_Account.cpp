//
// Created by mostafa on 8/22/23.
//

#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double transaction_fee):
        Account(name,balance),transaction_fee(transaction_fee){

}

bool Checking_Account::deposit(double amount) {
    amount-=transaction_fee;
    return Account::deposit(amount);
}
void Checking_Account::print(std::ostream &os) const {
    os<<"Checking Account Name:"<<name<<" Balance: "<<balance<<" increase rate:"<<transaction_fee<<"$"<<endl;
}