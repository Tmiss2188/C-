#include <iostream>
using namespace std;
int main()
{
    int Book;
    int Toy;
    int Model;
    int Stationery;
    int Sale;
    float Payment;
    cout << "Input number of Books :";
    cin >> Book;
    cout << "Input number of Toys :";
    cin >> Toy;
    cout << "Input number of Model :";
    cin >> Model;
    cout << "Input number of Stationery :";
    cin >> Stationery;
    Sale = (Book*120)+(Toy*80)+(Model*50)+(Stationery*15);
    if (Sale <= 0){
        Payment = 1000-((1000*50)/100);
    }else if (Sale <= 4999){
        Payment = 1000-((1000*10)/100);
    }else if (Sale <= 9999){
        Payment = 1000;
    }else if (Sale <= 99999){
        Payment = 1000+((Sale*5)/100);
    }else{
        Payment = 1000+((Sale*10)/100);
    }
    cout << "Sale : " << Sale <<endl;
    cout << "Payment : " << Payment <<endl;
    return(0);
}