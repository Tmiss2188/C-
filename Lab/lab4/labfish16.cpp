#include <iostream>
using namespace std;
int main()
{
    int fish=100,tomato=500;
    int cf,ct,remaincf,remainct;
    cf = fish/3;
    ct = tomato/2;
    
    if(cf<=ct){
        remaincf = fish%3;
        remainct = (ct-cf)*2 ;
        cout<<"The factory will be able to produce canned fish : ";
        cout<< cf <<endl;
    }else{
        remaincf = (cf-ct)*3;
        remainct = tomato%2 ;
        cout<<"The factory will be able to produce canned fish : ";
        cout<< ct <<endl;
    }
        cout<<"\nSardinesremain : ";
        cout<< remaincf <<endl;
        cout<<"\nTomatoremain : ";
        cout<< remainct <<endl;
    return(0);
}