#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter a number : ";
    cin >> num;
    cout << endl;
    if (num >= 80)  
        cout << "A\n";
    else  if (num >= 70)  
        cout << "B\n";
    else  if (num >= 60)  
        cout << "C\n";
    else  if (num >= 50)  
        cout << "D\n";
    else
        cout << "F\n";
    return(0);
}