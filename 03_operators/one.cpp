#include<iostream>  // this are predefined # is inclusive preprocessor directives
#include<string>
using namespace std;  // namespace is in built methode that is used for saving header of cin cout cerr


int main() {
    int cups;
    double pricePerCup, discount,discountPrice;
    cout << "Enter the num of cup" << endl;
    cin >>cups;

    cout << "Enter the price prt cup" << endl;
    cin >>pricePerCup;

    cout << "Enter the discount for cup" << endl;
    cin >>discount;

    double total = cups*pricePerCup;

    discountPrice = (total*discount)/100;

    if(total>=100) {
        total = total - discountPrice;
        cout << "total price is:" <<total << endl;

    }else{
        cout << "total price is:" <<total << endl;

    }

    
    return 0;
}