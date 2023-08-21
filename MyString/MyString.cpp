//
// Created by mostafa on 8/21/23.
//

#include "MyString.h"

ostream& operator<<(ostream& os,const MyString& rhs){
    os<<rhs.str;
    return os;
}
istream& operator>>(istream& is,MyString& rhs){
    is>>rhs.str;
    return is;
}

MyString::MyString() {
    str=new char [1];
    str[0]='\0';
}
MyString::MyString(char *buffer) {
    str=new char [std::strlen(buffer)+1];
    std::strcpy(str,buffer);
}
MyString::MyString(const MyString &source) {
    str=new char [strlen(source.str)+1];
    std::strcpy(str,source.str);
}
MyString::MyString(MyString &&source)noexcept:str(source.str){
    source.str= nullptr;
}
MyString::~MyString() {
    if (str!= nullptr)
            delete [] str;
}
MyString& MyString::operator=(const MyString& rhs){
    if (this==&rhs)return *this;
    delete [] str;
    str=new char [strlen(rhs.str)+1];
    strcpy(str,rhs.str);
    return *this;
}
MyString& MyString::operator=(MyString&& rhs)noexcept{
    if (this==&rhs)return *this;
    str=rhs.str;
    rhs.str= nullptr;
}
///================bool operator ========================
bool MyString::operator==(const MyString& rhs)const{
    return (strcmp(str,rhs.str)==0);
}
bool MyString::operator==(const MyString&& rhs)const{
    return (strcmp(str,rhs.str)==0);
}

bool MyString::operator!=(const MyString& rhs)const{
    return (strcmp(str,rhs.str)!=0);
}
bool MyString::operator!=(const MyString&& rhs)const{
    return (strcmp(str,rhs.str)!=0);
}

bool MyString::operator>(const MyString& rhs)const{
    return (strcmp(str,rhs.str)>0);
}
bool MyString::operator>(const MyString&& rhs)const{
    return (strcmp(str,rhs.str)>0);
}

bool MyString::operator<(const MyString& rhs)const{
    return (strcmp(str,rhs.str)<0);
}
bool MyString::operator<(const MyString&& rhs)const{
    return (strcmp(str,rhs.str)<0);
}
bool MyString::operator>=(const MyString& rhs)const{
    return (MyString::operator==(rhs)||MyString::operator>(rhs));
}
bool MyString::operator>=(const MyString&& rhs)const{
    return (MyString::operator==(rhs)||MyString::operator>(rhs));
}

bool MyString::operator<=(const MyString& rhs)const{
    return (MyString::operator==(rhs),MyString::operator<(rhs));
}
bool MyString::operator<=(const MyString&& rhs)const{
    return (MyString::operator==(rhs),MyString::operator<(rhs));
}
///=================================
MyString MyString::operator-()const{
    char* buffer=new char [strlen(str)+1];
    strcpy(buffer,str);
    int size=strlen(buffer);
    for (int i = 0; i < size; ++i) {
        buffer[i]= tolower(buffer[i]);
    }
    MyString tmp{buffer};
    delete [] buffer;
    return tmp;
}

MyString& MyString::operator--(){
    *this=MyString::operator-();
    return *this;
}
MyString MyString::operator--(int){
    MyString tmp{*this};
    MyString::operator--();
    return tmp;
}

MyString MyString::operator+(const MyString& rhs)const{
    char* buffer=new char[strlen(str)+ strlen(rhs.str)+1];
    strcpy(buffer,str);
    strcat(buffer,rhs.str);
    MyString tmp{buffer};
    delete [] buffer;
    return tmp;
}
MyString& MyString::operator++(){
    int size= strlen(str);
    for (int i = 0; i < size; ++i) {
        str[i]= toupper(str[i]);
    }
    return *this;
}
MyString MyString::operator++(int){
    MyString tmp{*this};
    operator++();
    return tmp;
}

MyString MyString::operator*(int n)const{
    char* buffer=new char [(strlen(str)*n)+1];
    strcpy(buffer,str);
    --n;
    while (n--){
        strcat(buffer,str);
    }
    MyString tmp{buffer};
    delete [] buffer;
    return tmp;
}
MyString& MyString::operator*=(int n){
    *this=operator*(n);
    return *this;
}