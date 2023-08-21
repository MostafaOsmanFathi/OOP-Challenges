#include <iostream>
#include "Book.h"
int main() {
    Book mostafa{"mostafa","novel",2};
    cout<<mostafa.get_Active_Books()<<endl;
    Book nasser{mostafa};//test copy
    cout<<Book::Active_Books<<endl;
    const Book moc{std::move(Book{"atomic habit","good",10})};//test move constructor
    cout<<moc.get_name()<<" "<<moc.get_Rate()<<" "<<moc.get_readTimes()<<endl;
    ///moc.set_name("afafa")/// Error
    mostafa.set_name("nem mostafa");
    mostafa.set_rate("google");
    mostafa.set_readTime(12);
    showData(mostafa);

    return 0;
}
