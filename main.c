#include <stdio.h>

long int pow_two(int index);

void print_arr(const int *arr, int size);

void multiply(int *bin1, int *bin2, int size1, int size2, int *res);

void s21_add_int(const int *bin1, const int *bin2, int *binans, int binsize);

long int from_decimal_to_int(const int *bin, int bin_size);

void from_int_to_decimal(long int num, int *bin, int bin_size);

void shift_left(const int *bin1, int shift, int size, int *res);

void shift_right(const int *bin1, int shift, int size, int *res);

#define SIZE 32

int main() {
    int a[SIZE] = {0};
    int b[SIZE] = {0};
    int res[SIZE] = {0};
    long int number1 = 1;
    long int number2 = 45; // 225
    from_int_to_decimal(number1, a, SIZE);
    from_int_to_decimal(number2, b, SIZE);

    print_arr(a, SIZE);
    printf("\n");
    print_arr(b, SIZE);
    printf("\n");
    printf("\n");

    multiply(a,b,SIZE,SIZE,res);


    long int intres = from_decimal_to_int(res, SIZE);

    printf("\n%ld", intres);
//    for (int i = 0; i < 28; ++i) {
//        printf("%d - %d\n", i, pow_two(i));
//    }
    return 0;
}

long int from_decimal_to_int(const int *bin, int bin_size) {
    long int ans = 0;
    for (int i = SIZE -1; i >= 0; --i) {
        int pow = SIZE-i-1;

        int cell = bin[i];
        ans = ans + cell * pow_two(pow);;
    }
    return ans;
}

void from_int_to_decimal(long int num, int *bin, int bin_size) {
    for (int i = bin_size - 1; i >= 0; --i) {
        bin[i] = num % 2;
        num = num / 2;
    }
}

void shift_left(const int *bin1, int shift, int size, int *res) {
    for (int i = 0; i < size - 1; ++i) {
        int m = bin1[i + 1];
        res[i] = m;
    }
    res[size-1] = 0;
}

void shift_right(const int *bin1, int shift, int size, int*res) {
    for (int i = size - 1; i >= 1; --i) {
        res[i] = bin1[i - 1];
    }
    res[0] = 0;
}

void multiply(int *bin1, int *arr2, int size1, int size2, int *res) {
    int shift = 0;
    int* temp[SIZE] = {0};
    int* one[SIZE] = {0};
    long int on = 1;
    from_int_to_decimal(on, (int*)&one, SIZE);
    for (int i = size1-1; i >=0; ++i) {
        ++shift;
        if(arr2[i] == 1){
            printf("\n-shift left-\n");

            shift_left(arr2,shift,SIZE,temp);
            print_arr(temp,SIZE);
            printf("\n");
            s21_add_int(temp,one,res,SIZE);
            shift=0;
        }
    }
}

void s21_add_int(const int *bin1, const int *bin2, int *binans, int binsize) {
    //todo process owerflow
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

void print_arr(const int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        int m = arr[i];
        printf("%d ", m);
    }
}

long int pow_two(int index) {
    long int current = 1;
    for (int i = 0; i < index; ++i) {
        current = current * 2;
    }
    return current;
}
