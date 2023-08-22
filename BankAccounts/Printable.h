//
// Created by mostafa on 8/22/23.
//

#ifndef POLYMOREPHISMECHALLANGE_PRINTABLE_H
#define POLYMOREPHISMECHALLANGE_PRINTABLE_H
#include <iostream>
using std::string,std::cout,std::endl,std::ostream;
class Printable {
public:
    friend ostream& operator<<(ostream& os,Printable& rhs);
    virtual void print(ostream& os)const=0;
};


#endif //POLYMOREPHISMECHALLANGE_PRINTABLE_H
