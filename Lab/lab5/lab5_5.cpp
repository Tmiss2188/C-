#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    float Raduis,Angle;
    const int WIDTH = 9;
    cout << "+" << setw(44) << "+" << endl;
    cout << ": Angle : Sine : Cosine : Tangent : "<<endl;
    cout << "+" << setfill('=')<<setw(44)<<"+"<<endl;
    cout << setfill(' ');
    for (Angle = 0.0;Angle <= 360.0 ; Angle += 20){
        Raduis = (Angle >0.0) ? (180.0f*3.14)/Angle : 0.0;
        cout << ":" << setw(WIDTH) << fixed << setprecision(2);
        cout << Angle;
        cout << " :" << setw(WIDTH) << setprecision(4) << sin(Raduis);
        cout << " :" << setw(WIDTH) << setprecision(4) << cos(Raduis);
        cout << " :" << setw(WIDTH) << setprecision(4) << tan(Raduis);
        cout << " :" << endl;
    }
    cout << "+" << setfill('=') << setw(44) << "+" << endl;
    return(0);
}