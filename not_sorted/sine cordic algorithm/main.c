#include <stdio.h>
#include <math.h>
#include "sin.c"

int main() {
    printf("Hello, World!\n");
//    long double ans;
 //   ans =
    double p;
    int s, c;
    int i;
    p = (i / 50.0) * M_PI / 2;
//    double f = 0.5;
//    printf("%f\n", sinf(f));

    for (i = 0; i < 50; i++) {

        p = (i / 50.0) * M_PI / 2;
        //use 32 iterations
        cordicSin((p * MUL), &s, &c, 32);

        printf("%f : %f\n", s/MUL, sin(p));
    }
    return 0;
}
