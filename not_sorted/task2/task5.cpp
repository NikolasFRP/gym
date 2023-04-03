//
// Created by nikolay on 03/04/23.
//
#include <iostream>
#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;
using std::cin;
using std::cout;

void inputArr(vector<int> &);

void outputArr(const vector<int>& ,const vector<int>& );

vector<int> twoSum(vector<int> &arr, int sum);

int main() {
    int size = 0;
    int sum = 0;
    vector<int> arr;
    vector<int> ans;

    cin >> size;
    arr.resize(size);
    ans.resize(2);

    inputArr(arr);
    cin >> sum;
    ans = twoSum(arr, sum);
    if (ans[0] == ans[1])
        cout << "None";
    else
        outputArr(arr,ans);

    return 0;
}

void inputArr(vector<int> &arr) {
    for (int &i: arr)
        cin >> i;
}

void outputArr(const vector<int>& arr, const vector<int>& index) {
    for (int i: index)
        cout << arr[i] << ' ';
}

vector<int> twoSum(vector<int> &arr, int sum) {
    unordered_map<int, int> visited;
    for (int i = 0; i < arr.size(); ++i) {
        int n = arr[i];
        int sumnumber = sum - n;
        if (visited.count(sumnumber)) {
            return {visited[sumnumber], i};
        }
        visited[n] = i;
    }
    return {0,0};
}