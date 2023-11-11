//
// Created by nikolay on 11/11/23.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPalindrome(int x);

int get_size(int x);

int get_d(int number, int index);



int main() {
    int n;
    bool ans;
    cin >> n;
    int size = get_size(n);
    cout <<"size - " <<  size<<"\n";
    int digit = get_d(n, 5);
    cout << digit;


    ans = isPalindrome(n);

       cout <<"\nis poly - " <<  ans;
    return 0;
}

bool isPalindrome(int x) {

    if (x<0)
        return false;
    int size = get_size(x);
    for (long int i = 1; i <= size; ++i) {
        if(get_d(x, i) != get_d(x, size - i+1))
            return false;
    }
    return true;
}

int get_size(int x) {
    int scale = 1;
    if (x < 0)
        x = x * -1;
    for (int i = 10; i < x && i < 2147483647; i *= 10) {
        scale++;
    }
    if (x - pow(10, scale) == 0)
        scale += 1;
    return scale;
}

int get_d(int number, int index) {
    int ans;
    ans = (number / ((int)pow(10, index -1)));
    ans = (int) ans % 10;

    return ans;
}