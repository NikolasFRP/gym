//
// Created by nikolay on 02/04/23.
//
#include <stdio.h>

struct point{
    int x;
    int y;

};
struct point init(int x, int y){
    struct point new;
    new.x = x;
    new.y = y;
    return new;
}

int main(){
    struct point p = init(5,5);


    return 0;
}