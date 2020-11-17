#pragma once

/*
 * 8-bit
 */
class CPU
{
public:
    CPU();
    ~CPU() {}; // TODO: any memory allocated?
    // TODO: Op Functions
    void* Fetch(); // Fetch instruction, return function ptr?
    // void* Decode(); Needed? or can fetch decode and return the program ptr
    void Execute(void *func);

    // OP CODES
    // GMB 8 bit-LoadCommands
    // GMB 16 bit-Load Commands
    // GMB 8 bit-Arithmetic/logical Commands
    // GMB 16 bit-Arithmetic/logical commands
    // ?? add, inc, dec ... again
    // GMB Rotate and Shift Commands
    // GMB Singlebit Operation Commands
    // GMB CPU-Controlcommands
    // GMB Jumpcommands



private:
    // 16bit registers
    uint8_t reg_A = 0; // Accumulator
    uint8_t reg_F = 0;
    uint8_t reg_B = 0;
    uint8_t reg_C = 0;
    uint8_t reg_D = 0;
    uint8_t reg_E = 0;
    uint8_t reg_H = 0;
    uint8_t reg_L = 0;
    uint8_t reg_SP = 0; // Stack Pointer
    uint8_t reg_PC = 0; // Program Counter

    // AF Register Flags
    const uint8_t reg_AF_zero_flag = 128; // Bit 7
    const uint8_t reg_AF_add_sub_flag = 64; // Bit 6
    const uint8_t reg_AF_half_carry_flag = 32; // Bit 5
    const uint8_t reg_AF_carry_flag = 16; // Bit 4, Bits (3-0) are unused and always 0

    // Memory
    uint8_t memory[0xFFFF] = {0};
    uint8_t memory_bus[0xFFFF] = {0};

    // Clocks
    uint8_t clock_m = 0;
    uint8_t clock_t = 0;

};

