#include<iostream>
#include<string>
#include<cctype> // for tolower()

using namespace std;

string function(string str) {
    int i = 0;
    int j = str.size() - 1;

    while (i < j) {
        // Skip non-alphabetic characters
        while (i < j && !isalpha(str[i])) i++;
        while (i < j && !isalpha(str[j])) j--;

        if (tolower(str[i]) != tolower(str[j])) {
            return "false";
        }

        i++;
        j--;
    }

    return "true";
}

int main() {
    cout << function("Abc deff dc -- Ba!") << endl;  // Expected: true
    return 0;
}
