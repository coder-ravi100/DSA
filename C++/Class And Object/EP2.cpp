/*Using Multiple Object In Single Class*/
#include<iostream>
using namespace std;
class student{
    public:
    int roll;
    string name;
};
int main()
{
    student s1,s2,s3;
    cout <<"\n Enter The Roll No : ";
    cin >>s1.roll;
    cout <<"\nEnter The Name  : ";
    cin >>s1.name;

    cout <<"\n Enter The Roll No : ";
    cin >>s2.roll;
    cout <<"\nEnter The Name  : ";
    cin >>s2.name;

    cout <<"\n Enter The Roll No : ";
    cin >>s3.roll;
    cout <<"\nEnter The Name  : ";
    cin >>s3.name;

    cout <<"\n===First Student Info===";
    cout <<"\n Student Roll Number :" <<s1.roll;
    cout <<"\n Student Name :" <<s1.name;
    cout <<endl;
    cout <<"\n===Second Student Info===";
    cout <<"\n Student Roll Number :" <<s2.roll;
    cout <<"\n Student Name :" <<s2.name;

    cout <<endl;
    cout <<"\n===Third Student Info===";
    cout <<"\n Student Roll Number :" <<s3.roll;
    cout <<"\n Student Name :" <<s3.name;
    return 0;
}