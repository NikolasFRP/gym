//
// Created by nikolay on 02/04/23.
//
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;


int main() {
    int count;
    cin >> count;
    vector<int> list1;
    vector<int> list2;
    int d = 0;
    for (int i = 0; i < count; ++i) {
        cin >> d;
        list1.push_back(d);
    }

    for (int i = 0; i < count; ++i) {
        cin >> d;
        list2.push_back(d);
    }

    for (int i = 0; i < count; ++i) {
        cout << list1[i] << " " << list2[i] << " ";
    }

    return 0;
}