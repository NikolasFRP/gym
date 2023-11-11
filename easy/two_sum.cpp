//
// Created by nikolay on 11/11/23.
//
#include <iostream>
#include <vector>
#include <map> // for O(n)

using namespace std;

vector<int> twoSum(vector<int> &nums, int target);
vector<int> twoSum2(vector<int> &nums, int target);
/*
 *
 *
 * Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
input
4
2 7 11 15
9
output
0 1
- -
3 2 4
6
output
1 2

 */
int main() {
    vector<int> arr;
    int size = 0, target = 0;
    cin >> size;

    for (int i = 0; i < size; ++i) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> target;
    vector<int> ans;
    ans = twoSum2(arr, target);
    for (int an : ans) {
        printf("%d ", an);
    }
}
//O(n^2)
vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size() - 1; ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target)
                return vector<int>{i, j};
        }
    }
}
//O(n)
vector<int> twoSum2(vector<int> &nums, int target) {
    map<int,int> hashmap;

    for (int i = 0; i < nums.size(); ++i) {
        int temp = target - nums[i];
        if(hashmap.count(temp))
            return vector<int> {hashmap[temp], i};
        hashmap[nums[i]] = i;
    }
    return vector<int> {};
}
