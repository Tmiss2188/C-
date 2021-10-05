#include <iostream>
using namespace std;
int main(){
    int salary,ot_hour;
    char choice_late,choice_OT;
    cout << "Enter Salary : ";
    cin >> salary;
    do{
        cout << "Late (Y/N) : ";
        cin >> choice_late;
    }
    while(!(choice_late == 'Y' || choice_late == 'y' || choice_late =='N' || choice_late == 'n'));

    if(choice_late == 'N' || choice_late == 'n'){
        salary = salary + 1000;          
    }
    do{
        cout << "Over Time Hour (Y/N) : ";
        cin >> choice_OT;
    }  
    while(!(choice_OT == 'Y' || choice_OT == 'y' || choice_OT == 'N' || choice_OT == 'n'));

    if(choice_OT == 'Y' || choice_OT == 'y')
    {
        cout << "Enter OT Hour : ";
        cin >> ot_hour;
        salary = salary + (ot_hour * 200);     
    }
    cout << "Salary : " << salary;
    return 0;
}