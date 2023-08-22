//
// Created by mostafa on 8/22/23.
//

#ifndef POLYMOREPHISMECHALLANGE_ACCOUNT_UTILITY_H
#define POLYMOREPHISMECHALLANGE_ACCOUNT_UTILITY_H
#include <vector>
#include <iostream>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
using namespace std;
void Deposit_All_Account(vector<Account*>&data,double Amount);
void Withdraw(vector<Account*>&data,double Amount);
void print(vector<Account*>&data);
#endif //POLYMOREPHISMECHALLANGE_ACCOUNT_UTILITY_H
