/*Level 1: Basic Constructor Practice
Create a class Laptop with a constructor that displays a message "Laptop object created".
*/
#include<iostream>
using namespace std;
class Laptop
{
    public:
    Laptop()
    {
        cout <<"Laptop object created" <<endl;
    }
};
int main()
{
    Laptop l;
    return 0;
}