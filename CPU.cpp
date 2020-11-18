#include "CPU.h"

CPU::CPU() {
    // set PC to 0x200
    reg_PC = (uint8_t) 0x200;
    // TODO what needs initialized?
}

void CPU::Execute() {
    // Take the SP and see what memory it points to, map memory and function ptrs
    uint8_t op = memory[reg_PC];
    switch(op) // Entire Op Code Map
    {
        case 0x0:
            // NOP
            break;
        case 0x1:
            // LD BC, nn
            break;
        case 0x2:
            // LD (BC), A
            break;
        case 0x3:
            // INC BC
            break;
        case 0x4:
            // INC B
            break;
        case 0x5:
            // DEC B
            break;
        case 0x6:
            // LD B, n
            break;
        case 0x7:
            // RLC A
            break;
        case 0x8:
            // LD (nn), SP
            break;
        case 0x9:
            // ADD HL, BC
            break;
        case 0xa:
            // LD A, (BC)
            break;
        case 0xb:
            // DEC BC
            break;
        case 0xc:
            // INC C
            break;
        case 0xd:
            // DEC C
            break;
        case 0xe:
            // LD C, n
            break;
        case 0xf:
            // RRC A
            break;
        case 0x10:
            // STOP
            break;
        case 0x11:
            // LD DE, nn
            break;
        case 0x12:
            // LD (DE), A
            break;
        case 0x13:
            // INC DE
            break;
        case 0x14:
            // INC D
            break;
        case 0x15:
            // DEC D
            break;
        case 0x16:
            // LD D, n
            break;
        case 0x17:
            // RL A
            break;
        case 0x18:
            // JR n
            break;
        case 0x19:
            // ADD HL, DE
            break;
        case 0x1a:
            // LD A, (DE)
            break;
        case 0x1b:
            // DEC DE
            break;
        case 0x1c:
            // INC E
            break;
        case 0x1d:
            // DEC E
            break;
        case 0x1e:
            // LD E, n
            break;
        case 0x1f:
            // RR A
            break;
        case 0x20:
            // JR NZ, n
            break;
        case 0x21:
            // LD HL, nn
            break;
        case 0x22:
            // LDI (HL), A
            break;
        case 0x23:
            // INC HL
            break;
        case 0x24:
            // INC H
            break;
        case 0x25:
            // DEC H
            break;
        case 0x26:
            // LD H, n
            break;
        case 0x27:
            // DAA
            break;
        case 0x28:
            // JR Z, n
            break;
        case 0x29:
            // ADD HL, HL
            break;
        case 0x2a:
            // LDI A, (HL)
            break;
        case 0x2b:
            // DEC HL
            break;
        case 0x2c:
            // INC L
            break;
        case 0x2d:
            // DEC L
            break;
        case 0x2e:
            // LD L, n
            break;
        case 0x2f:
            // CPL
            break;
        case 0x30:
            // JR NC, n
            break;
        case 0x31:
            // LD SP, nn
            break;
        case 0x32:
            // LDD (HL), A
            break;
        case 0x33:
            // INC SP
            break;
        case 0x34:
            // INC (HL)
            break;
        case 0x35:
            // DEC (HL)
            break;
        case 0x36:
            // LD (HL), n
            break;
        case 0x37:
            // SCF
            break;
        case 0x38:
            // JR C, n
            break;
        case 0x39:
            // ADD HL, HL
            break;
        case 0x3a:
            // LDI A, (HL)
            break;
        case 0x3b:
            // DEC HL
            break;
        case 0x3c:
            // INC L
            break;
        case 0x3d:
            // DEC L
            break;
        case 0x3e:
            // LD L, n
            break;
        case 0x3f:
            // CPL
            break;
        case 0x40:
            // LD B, B
            break;
        case 0x41:
            // LD B, C
            break;
        case 0x42:
            // LD B, D
            break;
        case 0x43:
            // LD B, E
            break;
        case 0x44:
            // LD B, H
            break;
        case 0x45:
            // LD B, L
            break;
        case 0x46:
            // LD B, (HL)
            break;
        case 0x47:
            // LD B, A
            break;
        case 0x48:
            // LD C, B
            break;
        case 0x49:
            // LD C, C
            break;
        case 0x4a:
            // LD C, D
            break;
        case 0x4b:
            // LD C, E
            break;
        case 0x4c:
            // LD C, H
            break;
        case 0x4d:
            // LD C, L
            break;
        case 0x4e:
            // LD C, (HL)
            break;
        case 0x4f:
            // LD C, A
            break;
        case 0x50:
            // LD D, B
            break;
        case 0x51:
            // LD D, C
            break;
        case 0x52:
            // LD D, D
            break;
        case 0x53:
            // LD D, E
            break;
        case 0x54:
            // LD D, H
            break;
        case 0x55:
            // LD D, L
            break;
        case 0x56:
            // LD D, (HL)
            break;
        case 0x57:
            // LD D, A
            break;
        case 0x58:
            // LD E, B
            break;
        case 0x59:
            // LD E, C
            break;
        case 0x5a:
            // LD E, D
            break;
        case 0x5b:
            // LD E, E
            break;
        case 0x5c:
            // LD E, H
            break;
        case 0x5d:
            // LD E, L
            break;
        case 0x5e:
            // LD E, (HL)
            break;
        case 0x5f:
            // LD E, A
            break;
        case 0x60:
            // LD H, B
            break;
        case 0x61:
            // LD H, C
            break;
        case 0x62:
            // LD H, D
            break;
        case 0x63:
            // LD H, E
            break;
        case 0x64:
            // LD H, H
            break;
        case 0x65:
            // LD H, L
            break;
        case 0x66:
            // LD H, (HL)
            break;
        case 0x67:
            // LD H, A
            break;
        case 0x68:
            // LD L, B
            break;
        case 0x69:
            // LD L, C
            break;
        case 0x6a:
            // LD L, D
            break;
        case 0x6b:
            // LD L, E
            break;
        case 0x6c:
            // LD L, H
            break;
        case 0x6d:
            // LD L, L
            break;
        case 0x6e:
            //
            break;
        case 0x6f:
            //
            break;
        case 0x70:
            //
            break;
        case 0x71:
            //
            break;
        case 0x72:
            //
            break;
        case 0x73:
            //
            break;
        case 0x74:
            //
            break;
        case 0x75:
            //
            break;
        case 0x76:
            // HALT
            break;
    }
}
