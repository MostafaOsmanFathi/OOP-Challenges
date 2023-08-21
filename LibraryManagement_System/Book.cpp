//
// Created by mostafa on 8/21/23.
//

#include "Book.h"
int Book::Active_Books{0};
void showData(const Book& book){
    cout<<"Book name: ["<<*book.bookName<<"] Book Rate: ["<<*book.bookRate<<"] Book read Times: ["<<*book.readTime<<"]"<<endl;
}

Book::Book(std::string bookName, std::string bookRate, int readTime){
    this->bookName=new string(std::move(bookName));
    this->bookRate=new string(std::move(bookRate));
    (*this).readTime=new int(readTime);
   cout<<"Constructor for ";
    showData(*this);
        ++Active_Books;
}

Book::Book(const Book &source): Book(*source.bookName,*source.bookRate,*source.readTime){
  cout<<"Book has been copied and it's info is ";showData(*this);
}

Book::Book(Book &&source)noexcept:bookName(source.bookName),bookRate(source.bookRate),readTime(source.readTime){
    source.bookName= nullptr,source.bookRate= nullptr,source.readTime= nullptr; //steeling the data form the source
    cout<<"Book has been Moved and it's info is ";showData(*this);

    ++Active_Books;
}

Book::~Book(){
    cout<<"Destructor for ";
    showData(*this);
    delete bookName;delete bookRate;delete readTime;
    --Active_Books;
}