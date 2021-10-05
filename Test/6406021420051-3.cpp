#include <iostream>
using namespace std;
int main(){
    int day,month,year;
    int diff;
    do{
        cout << "Please enter day : ";
        cin >> day;
    }
    while (!(day <= 30 && day >= 1));{

    }
    do{
        cout << "Please enter month : ";
        cin >> month;
    }
    while (!(month <= 12 && month >= 1));{

    }
    do{
        cout << "Please enter year : ";
        cin >> year;
    }
    while (!(year <= 2599 && year >= 2513));{

    }
    diff = ((year-2513)*12*30)+((month-1)*30)+(day-1);

    cout << "The difference is about "<< diff <<" days.";
    return(0);
}