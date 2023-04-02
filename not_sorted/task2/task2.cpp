//
// Created by nikolay on 02/04/23.
//

#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main() {
    string str;
    int d = 0;
    cin >> d;

    str = std::to_string(d);

    if (str.length() == 1) {
        cout << str;
        return 0;
    }
    int indexend = (int) str.length() - 1;
    while (str[indexend] == '0')
        --indexend;
    if (d < 0) cout << '-';
    for (int i = indexend; i >= 0 && str[i] != '-'; --i) {
        cout << str[i];
    }
    return 0;
}