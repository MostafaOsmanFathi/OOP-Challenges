//
// Created by mostafa on 8/22/23.
//
#include "Account_Utility.h"

void Deposit_All_Account(vector<Account*>&data,double Amount){
    for (const auto& data:data) {
        if(data->deposit(Amount)){
            cout<<"Deposite for"<<(*data)<<endl;
        }else cout<<"Error"<<endl;
    }
}
void Withdraw(vector<Account*>&data,double Amount){
    for (const auto& data:data) {
        if(data->deposit(Amount)){
            cout<<"Withdraw for"<<(*data)<<endl;
        }else cout<<"Error"<<endl;    }
}
void print(vector<Account*>&data){
    for (const auto& data:data) {
        cout<<(*data);
    }

}