//
// Created by mostafa on 8/22/23.
//

#include "Printable.h"
ostream& operator<<(ostream& os,Printable& rhs){
    rhs.print(os);
    return os;
}
