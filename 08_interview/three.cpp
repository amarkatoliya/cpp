#include <iostream>
#include <sstream>
#include <map>
using namespace std;

// __define-ocg__: Count words with length > 3 and return their frequencies
void saltCount(string input) {
    istringstream varOcg(input); // Used to split the input by spaces
    map<string, int> varFiltersCg; // To store word -> frequency
    string word;

    while (varOcg >> word) {
        if (word.length() > 3) {
            varFiltersCg[word]++;
        }
    }

    if (varFiltersCg.empty()) {
        cout << "No Salt" << endl;
    } else {
        for (auto& pair : varFiltersCg) {
            cout << pair.first << " : " << pair.second << endl;
        }
    }
}

int main() {
    string input = "Paracetamol 650 mg + Dolo 650 + Midotab 2.5 mg + Midotab 5 mg + Paracetamol 500 mg + Urimax 4 mg + Dolo 500 + Urimax 2 mg + Paracetamol + Urimax 8 mg";
    saltCount(input);
    return 0;
}
