#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter a Pay : ";
    cin >> num;
    cout << endl;
    if (num <= 100000)  
        cout << "pay tax 5 %\n";
    else  if (num <= 500000)  
        cout << "pay tax 10 %\n";
    else  if (num <= 1000000)  
        cout << "pay tax 20 %\n";
    else  if (num <= 4000000)  
        cout << "pay tax 30 %\n";
    else  if (num > 4000001)
        cout << "pay tax 37 %\n";
    else
        cout << "no tax";
    return(0);
}