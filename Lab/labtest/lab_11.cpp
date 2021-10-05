#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "\nEnter a Month number: ";
    cin >> num;
    cout << endl;
    if (num == 1)  
        cout << "Jan.\n";
    else if (num == 2)  
        cout << "Feb.\n";
    else if (num == 3)  
        cout << "Mar.\n";
    else if (num == 4)  
        cout << "Apr.\n";
    else if (num == 5)
        cout << "May.\n";
    else if (num == 6)  
        cout << "Jun.\n";
    else if (num == 7)  
        cout << "Jul.\n";
    else if (num == 8)  
        cout << "Aug.\n";
    else if (num == 9)
        cout << "Sep.\n";
    else if (num == 10)  
        cout << "Oct.\n";
    else if (num == 11)  
        cout << "Nov.\n";
    else if (num == 12)  
        cout << "Dec.\n";
    else
        cout << "Don't have this month";
    return(0);
}