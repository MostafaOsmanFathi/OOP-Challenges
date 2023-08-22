//
// Created by mostafa on 8/22/23.
//

#include "Saving_Account.h"
Saving_Account::Saving_Account(std::string name, double balance, int int_rate): Account(name,balance),int_rate(int_rate){

}

bool Saving_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

void Saving_Account::print(std::ostream &os) const {
    os<<"Saving Account Name:"<<name<<" Balance: "<<balance<<" increase rate:"<<int_rate<<"%"<<endl;
}