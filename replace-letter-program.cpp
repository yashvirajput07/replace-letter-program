#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] == 'z') ? 'a' : str[i] + 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] == 'Z') ? 'A' : str[i] + 1;
        }
    }

    cout << "New string: " << str;

    return 0;
}

