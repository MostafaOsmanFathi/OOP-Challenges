//
// Created by mostafa on 8/22/23.
//

#ifndef POLYMOREPHISMECHALLANGE_TRUST_ACCOUNT_H
#define POLYMOREPHISMECHALLANGE_TRUST_ACCOUNT_H
#include "Saving_Account.h"
class Trust_Account: public Saving_Account{
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_increase_After=5000.0;
    static constexpr double def_increase_Num=50.0;
    static constexpr double def_Limit_persentage=20.0;
    static constexpr int def_withdraw_TimeLimit=3;
protected:
    double increase_After;
    double increase_Num;
    int withdrawTime;
public:
    explicit Trust_Account(std::string name=def_name,double balance =def_balance, double int_rate = def_int_rate,double increase_After=def_increase_After,double increase_Num=def_increase_Num);
    ~Trust_Account()override=default;
    bool deposit(double amount)override;
    bool withdraw(double amount)override;//should only allow 3 withdrawals per year and each of these must be less than 20%

};


#endif //POLYMOREPHISMECHALLANGE_TRUST_ACCOUNT_H
