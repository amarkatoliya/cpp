#include<iostream>

using namespace std;

int totalTea(int chai[],int size){
    int total = 0;
    for(int i = 0; i < size ;i++) {
        total += chai[i];
    }
    return total;
}

int main() {
    int chaiServe[5] = {10,20,00,40,50};
    
    int total = totalTea(chaiServe, 5);
    cout << "Total tea is :" << total <<endl;

    return 0;
}