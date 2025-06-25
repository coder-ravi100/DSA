/*Definition : Wrapping Of Data and function into a single unit (class)*/
/*Incapsulation For Use METHOD GETTER AND SETTER*/
#include<iostream>
using namespace std;
class sample
{
    private:
    int Roll;
    string Name;
    public:
    void set(int r,string n)/*Set Set of Value*/
    {
        Roll = r;
        Name = n;
    }
    void get()/*Get Display Value*/
    {
        cout <<"\n Student roll Number Is : " <<Roll;
        cout <<"\n Student Name is : " <<Name;
    }
};
int main()
{
    sample s1,s2,s3,s4;
    cout <<"\n===First Student Infro===";
    s1.set(101,"Ravi");
    s1.get();
    cout <<endl;
    cout <<"\n===Second Student Infro===";
    s2.set(102,"Radhika");
    s2.get();
    cout <<endl;
    cout <<"\n===Third Student Infro===";
    s3.set(103,"Rohit");
    s3.get();
    cout <<endl;
    cout <<"\n===Fourth Student Infro===";
    s4.set(104,"Radha");
    s4.get();
    return 0;
}