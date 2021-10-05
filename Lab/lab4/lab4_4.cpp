/*  Program 4_4 : Use nested switch case statement */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Please enter a simple expression ";
    cout << "(number oeprator number) : ";
    int LeftOperand, RightOperand;
    char Operator;
    cin >> LeftOperand >> Operator >> RightOperand;
    int Result;
    switch (Operator)
    {
        case '+':Result = LeftOperand + RightOperand;
                break;
        case '-':Result = LeftOperand + RightOperand;
                break;
        case '*':Result = LeftOperand + RightOperand;
                break;
        case '/':Result = LeftOperand + RightOperand;
                break;
        default:cout << Operator << " is unrecognized operation.";
                cout << endl;
                return(1);
    }
    // Display result
    cout << LeftOperand << " " << Operator << " ";
    cout << RightOperand << " " << Operator << " ";
    return(0);
}