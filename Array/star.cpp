/*User Enter The Value then Traverse an Array (Print all elements)*/
#include<iostream>
using namespace std;
int main()
{
    int arr[25],size;
    cout <<"Enter The Size Of Array : ";
    cin >>size;
    for (int i = 0; i < size; i++)
    {
        cout <<"Enter The Element Of Arr " <<i <<"[%d] = ";
        cin >>arr[i];
    }
    cout <<"Array Elements" <<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] <<" ";
    }
    
    return 0;
}