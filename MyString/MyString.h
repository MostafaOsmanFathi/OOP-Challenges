//
// Created by mostafa on 8/21/23.
//

#ifndef MYSTRING_MYSTRING_H
#define MYSTRING_MYSTRING_H
#include <cstring>
#include "iostream"
using std::cout,std::cin,std::istream,std::ostream,std::endl;
class MyString {
friend ostream& operator<<(ostream& os,const MyString& rhs);
friend istream& operator>>(istream& is,MyString& rhs);
private:
    char *str;
public:
    MyString();
    MyString(char* buffer);
    MyString(const MyString& source);
    MyString(MyString&& source)noexcept;
    ~MyString();

    MyString& operator=(const MyString& rhs);
    MyString& operator=(MyString&& rhs)noexcept;

    bool operator==(const MyString& rhs)const;
    bool operator==(const MyString&& rhs)const;

    bool operator!=(const MyString& rhs)const;
    bool operator!=(const MyString&& rhs)const;

    bool operator>(const MyString& rhs)const;
    bool operator>(const MyString&& rhs)const;

    bool operator<(const MyString& rhs)const;
    bool operator<(const MyString&& rhs)const;

    bool operator>=(const MyString& rhs)const;
    bool operator>=(const MyString&& rhs)const;

    bool operator<=(const MyString& rhs)const;
    bool operator<=(const MyString&& rhs)const;


    MyString operator-()const;

    MyString& operator--();
    MyString operator--(int);

    MyString operator+(const MyString& rhs)const;
    MyString& operator++();
    MyString operator++(int);

    MyString operator*(int n)const;
    MyString& operator*=(int n);
    char operator[](int poss)const;


};


#endif //MYSTRING_MYSTRING_H
