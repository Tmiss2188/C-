#include <iostream>
using namespace std;
int main()
{
    //int A[] = {1,2,3,4,5,6,7,8,9,10};
    const int Array_Size = 10;
    int Sum = 0;
    for(int i = 1 ; i < Array_Size ; i++) Sum = Sum + i;
    cout << "Total of array elements : " << Sum << endl;
    return(0);
}