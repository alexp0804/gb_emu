/*
    Alexander Peterson
    August 20 2021
*/

#include "definitions.h"
#include <stdio.h>

int main(void) {
    REG r;
    r.A = 0x1;
    printf("A: 0x%02X\nF: 0x%02X\nAF: 0x%04X", r.A, r.F, r.AF);
    return 0;
}