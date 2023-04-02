//
// Created by nikolay on 02/04/23.
//
//
// Created by nikolay on 02/04/23.
//
#include <iostream>
#include <vector>

using std::pair;
using std::vector;
using Intervals = std::vector<std::pair<int, int>>;

int main() {
    struct list{
        vector<pair<int,int>> list1;
        vector<pair<int,int>> list2;
    };

    list intersection1 {  {{8, 12}, {17, 22}},
                          {{5, 11}, {14, 18}, {20, 23}} };
    // {{8, 11}, {17, 18}, {20, 22}}

    list intersection2{
            {{9,  15}, {18, 21}},
            {{10, 14}, {21, 22}}
    }; // {{10, 14}}


    std::cout << "Hello, World!" << std::endl;
    return 0;
}

Intervals inter(const Intervals& i1, const Intervals& i2) {
    //
    return Intervals(0);
}


/*
for(int i = 0; i<std::max(intersection1.list1.size(),intersection1.list2.size(),),++i){
if(intersection1.list1[i].first)
}
*/

