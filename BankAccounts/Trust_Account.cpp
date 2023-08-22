//
// Created by mostafa on 8/22/23.
//

#include "Trust_Account.h"
Trust_Account::Trust_Account(std::string name, double balance, double int_rate, double increase_After,double increase_Num)
        : Saving_Account(name,balance,int_rate),increase_After(increase_After),increase_Num(increase_Num),withdrawTime(0){

}

bool Trust_Account::deposit(double amount) {
    if (amount>=increase_After)amount+=increase_Num;
    return Saving_Account::deposit(amount);
}
bool Trust_Account::withdraw(double amount) {
    if (amount>((def_Limit_persentage/100)*balance)&&withdrawTime<def_withdraw_TimeLimit)return false;
    if (Account::withdraw(amount)){++withdrawTime;return true;}
    else return false;
}