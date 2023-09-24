#include <stdio.h>
#include "new.h"

int pow_two(int index);

void print_arr(int *arr, int size);

void multiply(int *bin1, int *bin2, int size1, int size2, int *res);

void s21_add_int(const int *bin1, const int *bin2, int *binans, int binsize);
int from_decimal_to_int(const int*bin, int bin_size);
void from_int_to_decimal(int num, int* bin, int bin_size);

int main() {
    int a[32] = {0};
    int b[32] = {0};
    int res[32] = {0};
    from_int_to_decimal(45, a, 32);
    from_int_to_decimal(5, b, 32);
    s21_add_int(a,b,res, 32);
    print_arr(res,32);
    int intres = from_decimal_to_int(res,32);

    printf("\n%d", intres);
//    for (int i = 0; i < 28; ++i) {
//        printf("%d - %d\n", i, pow_two(i));
//    }
    return 0;
}

void from_int_to_decimal(int num, int* bin, int bin_size){
    int index = 0;
    for (int i = bin_size-1; i >=0 ; --i) {
        bin[i] = num%2;
        num=num/2;
    }
}

void multiply(int *bin1, int *arr2, int size1, int size2, int *res) {
    
}
int from_decimal_to_int(const int*bin, int bin_size){
    int ans = 0;
    for (int i = bin_size-1; i >=0; --i) {
        ans = ans + bin[i] * pow_two(31-i);
    }
    return ans;
}
void s21_add_int(const int *bin1, const int *bin2, int *binans, int binsize) {
    int cur = 0;
    int mem = 0;
    for (int i = binsize; i >= 0; --i) {
        cur = bin1[i];
        cur += bin2[i];
        cur += mem;
        if (cur > 1) {
            binans[i] = (cur) % 2;
            mem = 1;
        } else {
            binans[i] = cur;
            mem = 0;
        }
    }
}
void print_arr(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}

int pow_two(int index) {
    int current = 1;
    for (int i = 0; i < index; ++i) {
        current = current * 2;
    }
    return current;
}
