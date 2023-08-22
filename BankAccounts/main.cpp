#include <iostream>
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Utility.h"
using namespace std;
int main() {
    vector<Account*>data;
    data.push_back(new Account{"mostafa",150});
    data.push_back(new Saving_Account{"Ahmed",30,7});
    data.push_back(new Checking_Account{"Solver",150,50});
    data.push_back(new Trust_Account{"Killer",70,8});

    Deposit_All_Account(data,500);

    Withdraw(data,200);


    return 0;
}
