#include<iostream>
using namespace std;
class student{
    public:
    int roll = 101;
    string name = "Ravi";
};
int main()
{
    student s1;
    cout <<"\nRoll No : " <<s1.roll;
    cout <<"\nName No : " <<s1.name;
    return 0;
}