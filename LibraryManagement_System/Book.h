//
// Created by mostafa on 8/21/23.
//

#ifndef LIBRARYMANAGEMENT_SYSTEM_BOOK_H
#define LIBRARYMANAGEMENT_SYSTEM_BOOK_H
#include <iostream>
using std::string,std::cin,std::cout,std::move,std::endl;
class Book {
    friend void showData(const Book& book);
private:
    ///default values
    static constexpr const char *def_name="No Name\0";
    static constexpr const char *def_bookRate="No Rate";
    static constexpr const int def_readTime=0;
protected:
    string *bookName;
    string *bookRate;
    int *readTime;
public:
    static int Active_Books;
    /// Constructor and Destructors
    Book(string bookName=def_name,string bookRate=def_bookRate,int readTime=def_readTime);//constructor to instulize the class
    Book(const Book& source); //deep copy constructor
    Book(Book&& source)noexcept; //move constructor
    ~Book(); //destructor
    ///===============================
    string get_name()const{return *bookName;}
    string get_Rate()const{return *bookRate;}
    int get_readTimes()const{return *readTime;}
    int get_Active_Books(){return Active_Books;}
    void set_name(string newName){
        *bookName=std::move(newName);
    }
    void set_rate(string newRate){
        *bookName=std::move(newRate);
    }
    void set_readTime(int newReadTimes){
        *readTime=newReadTimes;
    }

};

#endif //LIBRARYMANAGEMENT_SYSTEM_BOOK_H
