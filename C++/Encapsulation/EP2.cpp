/* 1. Create a class Book
Data: title, author, price
Use setDetails() and getDetails() to assign and print values.*/
#include<iostream>
using namespace std;
class Book
{
    public:
    string Title;
    string Author;
    int Price;
    void setDetails(string Title,string Author,int Price)
    {
        this->Title  = Title;
        this->Author = Author;
        this->Price  = Price;  
    }
    void getDetails()
    {
        cout <<"Book Title  : " <<Title <<endl;
        cout <<"Book Author : " <<Author <<endl;
        cout <<"Book Price  : " <<Price <<endl;
    }
};
int main()
{
    Book B1;
    B1.setDetails("C++","E Balagurusamy",450);
    B1.getDetails();
    B1.setDetails("Python","Chris Williamson",1718);
    B1.getDetails();
     B1.setDetails("Ansi 'C'","E Balagurusamy",599);
    B1.getDetails();
}