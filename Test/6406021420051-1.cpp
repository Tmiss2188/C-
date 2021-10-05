#include <iostream>
using namespace std;
int main()
{
    int Year;
    cout << "Please enter year : ";
    cin >> Year;
    if (Year%100||Year%400 == 0){
        cout << "Year " << Year << " is a leap year";
    }else if (Year%4 == 0&&Year%100 != 0){
        cout << "Year " << Year << " is a leap year";
    }else{
        cout << "Year " << Year << " is not a leap year";
    }
    return(0);
}