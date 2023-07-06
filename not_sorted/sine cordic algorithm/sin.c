//
// Created by nikolay on 07/07/23.
//
#include "sin.h"

void cordicSin(int theta, int *s, int *c, int n) {
    int k, d, tx, ty, tz;
    int x = cordic_1K, y = 0, z = theta;
    n = (n > CORDIC_NTAB) ? CORDIC_NTAB : n;
    for (k = 0; k < n; ++k) {
        d = z >> 15;
//get sign. for other architectures, you might want to use the more portable version
//        d = z>=0 ? 0 : -1;
        tx = x - (((y >> k) ^ d) - d);
        ty = y + (((x >> k) ^ d) - d);
        tz = z - ((cordic_ctab[k] ^ d) - d);
        x = tx;
        y = ty;
        z = tz;
    }
    *c = x;
    *s = y;
}