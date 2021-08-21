
typedef unsigned char BYTE;
typedef char SBYTE;

typedef unsigned short WORD;
typedef short SWORD;

typedef struct REG {
    union {
        struct {
            BYTE F;
            BYTE A;
        };
        WORD AF;
    };
    union {
        struct {
            BYTE C;
            BYTE B;
        };
        WORD BC;
    };
    union {
        struct {
            BYTE E;
            BYTE D;
        };
        WORD DE;
    };
    union {
        struct {
            BYTE L;
            BYTE H;
        };
        WORD HL;
    };
} REG;


typedef struct instruction {
    char *mnemonic;
    BYTE cycles;   
    void *func;
} instruction;