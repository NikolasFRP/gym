//
// Created by nikolay on 03/04/23.
//
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main() {
    int count = 0;
    cin >> count;
    count++;
    vector<int> arr;
    int d;
    arr.resize(count);
    for (int i = 1; i < count - 2; ++i) {
        cin >> d;
        arr[d] = 1;
    }
    for (int i = 1; i < count; ++i) {
        if (arr[i] != 1)
            cout << i << ' ';
    }

    return 0;
}
