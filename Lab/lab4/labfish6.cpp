#include <iostream>
using namespace std;
int main()
{
    int fish=100,tomato=500;
    int cf,ct;
    cf = fish/3;
    ct= tomato/2;
    if(cf<=ct){
        cout<<"The factory will be able to produce canned fish : ";
        cout<< cf <<endl;
    }else{
        cout<<"The factory will be able to produce canned fish : ";
        cout<< ct <<endl;
    }
    return(0);
}