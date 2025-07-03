/*Create a class Employee that takes name and salary in the constructor and displays 
them using a function.
*/
#include<iostream>
using namespace std;
class Employees
{
    private:
    string Destination;
    string Company_name;
    int salary;
    public:
    Employees(string D,string C,int S)
    {
        Destination   = D;
        Company_name  = C;
        salary        = S;
    }
        void display()
        {
            cout <<"Employees Destination  : " <<Destination <<endl;
            cout <<"Employees Company Name : " <<Company_name <<endl;
            cout <<"Employees Salary       : " <<salary <<endl;
        }
};
int main()
{
    Employees E1("HR","XYZ",25000);
    E1.display();
}