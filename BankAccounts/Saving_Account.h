//
// Created by mostafa on 8/22/23.
//

#ifndef POLYMOREPHISMECHALLANGE_SAVING_ACCOUNT_H
#define POLYMOREPHISMECHALLANGE_SAVING_ACCOUNT_H
#include "Account.h"

class Saving_Account: public Account{
private:
    constexpr static const char* def_name="No Name";
    constexpr static const double def_balance=0.0;
    constexpr static const int def_int_rate=3;
protected:
    double int_rate;
public:
    explicit Saving_Account(string name=def_name,double balance=def_balance,int int_rate=def_int_rate);
    bool deposit(double amount) override;
    void print(std::ostream& os)const override;
    ~Saving_Account() override =default;
};
#endif //POLYMOREPHISMECHALLANGE_SAVING_ACCOUNT_H
