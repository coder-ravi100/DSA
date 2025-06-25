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
/*How To Works Array
i = 0 then 0 cond true print 0 = 10
i = 1 then 1 cond true print 1 = 20
i = 2 then 2 cond true print 2 = 30
i = 3 then 3 cond true print 3 = 40
i = 4 then 0 cond true print 4 = 50
i = 5 then 5 cond flase statement is Execute
Array 10 20 30 40 50
*/