//
// Created by nikolay on 03/07/23.
//


#define cordic_1K 0x000026DD
#define half_pi 0x00006487
#define MUL 16384.000000
#define CORDIC_NTAB 16
int cordic_ctab[] = {0x00003243, 0x00001DAC, 0x00000FAD, 0x000007F5, 0x000003FE, 0x000001FF, 0x000000FF, 0x0000007F,
                     0x0000003F, 0x0000001F, 0x0000000F, 0x00000007, 0x00000003, 0x00000001, 0x00000000, 0x00000000,};

void cordicSin(int theta, int *s, int *c, int n);
//Print out sin(x) vs fp CORDIC sin(x)

