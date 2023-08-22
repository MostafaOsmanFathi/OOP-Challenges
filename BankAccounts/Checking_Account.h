//
// Created by mostafa on 8/22/23.
//

#ifndef POLYMOREPHISMECHALLANGE_CHECKING_ACCOUNT_H
#define POLYMOREPHISMECHALLANGE_CHECKING_ACCOUNT_H
#include "Account.h"
class Checking_Account:public Account {
private:
    constexpr static const char* def_name="No Name";
    constexpr static const double def_balance=0.0;
    constexpr static const double def_transaction_fee=3;
protected:
    double transaction_fee;
public:
    explicit Checking_Account(string name=def_name,double balance=def_balance,double transaction_fee=def_transaction_fee);
    bool deposit(double amount)override;
    void print(ostream& os)const override;

};


#endif //POLYMOREPHISMECHALLANGE_CHECKING_ACCOUNT_H
