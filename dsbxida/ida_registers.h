#pragma once

#include <stdint.h>

#define RC_GEN (1 << 0)
#define RC_SEG (1 << 1)
#define RC_FPU (1 << 2)

enum class DBG_REGS : uint8_t {
    R_AX,
    R_AX_DS,
    R_AX_CS,
    R_BX,
    R_BX_DS,
    R_BX_CS,
    R_CX,
    R_CX_DS,
    R_CX_CS,
    R_DX,
    R_DX_DS,
    R_DX_CS,
    R_SI,
    R_SI_DS,
    R_DI,
    R_DI_ES,
    R_BP,
    R_BP_SS,
    R_SP,
    R_SP_SS,
    R_IP,
    R_IP_CS,
    R_EFL,
    R_CS,
    R_CS_BASE,
    R_DS,
    R_DS_BASE,
    R_ES,
    R_ES_BASE,
    R_FS,
    R_FS_BASE,
    R_GS,
    R_GS_BASE,
    R_SS,
    R_SS_BASE,
    R_ST0,
    R_ST1,
    R_ST2,
    R_ST3,
    R_ST4,
    R_ST5,
    R_ST6,
    R_ST7,
    R_SEG_FIRST = R_CS,
    R_SEG_LAST = R_SS,
};

enum class dosbox_insn_type_t : uint16 {
    DOSBOX_callback = CUSTOM_INSN_ITYPE,
};
