#include<iostream>  // this are predefined # is inclusive preprocessor directives
#include<string>
using namespace std;  // namespace is in built methode that is used for saving header of cin cout cerr


int main() {
    float incresePer;
    cout << "Enter the per increse of tea" << endl;
    cin >>incresePer;

    float teaPrice = 429.99;
    int roundOfPrice = (int) teaPrice;

    int teaQuantity = 2;
    double bill = teaPrice * teaQuantity;

    float incresed = (teaPrice*incresePer)/100;
    float newPrice = teaPrice + incresed;


    cout << newPrice << endl;
    return 0;
}