#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    int num;
    float circum;
    float area,pi = 3.14;
    double volume;
    cout << "Enter the number of radious : ";
    cin >> r;
    cout << "1. Calculate the circumference of circle"<<endl;
    cout << "2. Calculate the area of circle"<<endl;
    cout << "3. Calculate the volume of phere"<<endl;
    cout << "Enter the choice : ";
    cin >> num;
    if (num = 1){
        circum = 2.0*pi*r;
        cout << "circumference of circle is : "<< circum;
    }else if(num = 2){
        area = pi*pow(r,2);
        cout << "area of circle is : "<< area;
    }else if(num = 3){
        volume = (4.0/3.0) * pi *pow(r,3);
        cout << "Volume of circle is : "<<volume;
    }
    return(0);
}