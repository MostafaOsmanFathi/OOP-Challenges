//
// Created by mostafa on 8/22/23.
//

#ifndef POLYMOREPHISMECHALLANGE_ACCOUNT_H
#define POLYMOREPHISMECHALLANGE_ACCOUNT_H
#include "Printable.h"
class Account:public Printable{
private:
    constexpr static const char* def_name="No Name";
    constexpr static const double def_balance=0.0;
protected:
    string name;
    double balance;
public:
    explicit Account(string name=def_name,double balance=def_balance);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    virtual double get_balance();
    virtual ~Account()=default;
    void print(ostream& os)const override;
};

#endif //POLYMOREPHISMECHALLANGE_ACCOUNT_H
