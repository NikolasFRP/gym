//
// Created by nikolay on 16/04/23.
//
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::unordered_map;
using std::vector;

int isIsomorphic(const string &, const string &);

int main() {
    string s1;// = "aab";
    string s2;// = "xyz";
    cin >> s1 >> s2;
    cout << (isIsomorphic(s1, s2) ? "yes" : "no");
    return 0;
}

int isIsomorphic(const string &s1, const string &s2) {
    if (s1.size() != s2.size())
        return false;
    vector<int> marked(256, 0);
    unordered_map<char, char> map = {};
    for (int i = 0; i < s1.size(); ++i) {
        if (map.count(s1[i]) == 0) {
            if (marked[(int) s2[i]] == 1)
                return false;
            map.insert({s1[i], s2[i]});
            marked[(int) s2[i]] = 1;
        } else {
            if (map[s1[i]] != s2[i])
                return false;
        }
    }
    return true;
}
