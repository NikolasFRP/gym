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
    int d = 0;
    vector<vector<int>> arr;
    cin >> count;

    arr.resize(count);
    for (int i = 0; i < count; ++i) {
        arr[i].resize(count);
    }
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < count; ++j) {
            cin >> d;
            arr[i][j] = d;
        }
    }

    int y = count / 2;
    int x = y - 1;
    int step = 0;
    int index = 0;
    int max = count * count-1;
    cout << arr[y][++x] << '\n';
    for (int i = 0; i < count * count && index < max; ++i) {

        for (int j = 0; j <= step && index < max; ++j, ++index)
            cout << arr[--y][x] << '\n';
        for (int j = 0; j <= step && index < max; ++j, ++index)
            cout << arr[y][++x] << '\n';
        step++;
        for (int j = 0; j <= step && index < max; ++j, ++index)
            cout << arr[++y][x] << '\n';
        for (int j = 0; j <= step && index < max; ++j, ++index)
            cout << arr[y][--x] << '\n';
        step++;
    }
    
    return 0;
}
