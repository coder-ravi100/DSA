
#include<iostream>
using namespace std;
int main()
{    
    int Z[5],size,i;
    cout <<"\n\n-----------------------------------------";
    cout <<"\nTravasal Array";
    cout <<"\nEnter The Size Of Array = ";
    cin >>size;
    
    for ( i = 0; i < size; i++)
    {
        cout <<"\n Enter The Element of size =";
        cin >>Z[i];
    }
    for ( i = 0; i < size; i++)
    {
        cout <<Z[i] <<" ";
    }
    
    cout <<"\n-----------------------------------------";

    cout <<"\n\n-----------------------------------------";
    cout <<"\nIndex And Element";
    cout <<"\nArray First Element index 0 = "  <<Z[0] <<" " <<"Element";
    cout <<"\nArray First Element index 1 = "  <<Z[1] <<" " <<"Element";
    cout <<"\nArray First Element index 2 = "  <<Z[2] <<" " <<"Element";
    cout <<"\nArray First Element index 3 = "  <<Z[3] <<" " <<"Element";
    cout <<"\nArray First Element index 4 = "  <<Z[4] <<" " <<"Element";

     cout <<"\n-----------------------------------------";
return 0;
}