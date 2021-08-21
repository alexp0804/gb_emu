
#include "definitions.h"

// RR: WORD register
// R: BYTE register

WORD NN;

// NN: WORD immediate
// N: BYTE immediate

BYTE N;

REG reg;

// Mnemonic, cycles, function pointer
instruction instructions[0xFF] = {
    {"NOP", 1, &NOP},                       // 0x00
    {"LD BC NN", 3, &LD_RR_NN},             // 0x01
    {"LD (BC) A", 2, &LD_ADDR_A}            // 0x02
};

void NOP(void) {                            
    return;
}

void LD_RR_NN(WORD *reg, WORD immediate) {
    // The first byte of immediate data is stored in bits 0-7,
    // The second byte is stored in bits 8-15.
    *reg = ((immediate << 8) & 0xFF00) | ((immediate >> 8) & 0x00FF);
}
// TODO
void LD_ADDR_A(WORD reg, BYTE A) {
    return; 
}

