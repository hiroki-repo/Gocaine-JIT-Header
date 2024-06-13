#define GEN_ADD_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x8b000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_ADC_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x9a000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SUB_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0xcb000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SBC_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0xda000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_AND_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x8a000000|(((_flagreq&1)*3)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_OR_64(_reg1,_reg2,_reg3,_flagreq)  EMIT_JIT_CODE(0xaa000000|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)));if (_flagreq) GEN_AND_64(31,_reg1,_reg1,_flagreq)
#define GEN_XOR_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0xca000000|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)));if (_flagreq) GEN_AND_64(31,_reg1,_reg1,_flagreq)
#define GEN_BIC_64(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x8a200000|(((_flagreq&1)*3)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))

#define GEN_ADD_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x0b000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_ADC_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x1a000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SUB_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x4b000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SBC_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x5a000000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_AND_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x0a000000|(((_flagreq&1)*3)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_OR_32(_reg1,_reg2,_reg3,_flagreq)  EMIT_JIT_CODE(0x2a000000|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)));if (_flagreq) GEN_AND_32(31,_reg1,_reg1,_flagreq)
#define GEN_XOR_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x4a000000|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)));if (_flagreq) GEN_AND_32(31,_reg1,_reg1,_flagreq)
#define GEN_BIC_32(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x0a200000|(((_flagreq&1)*3)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))

#define GEN_ADD_16(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x0b00a000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_ADC_16(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x1a00a000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SUB_16(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x4b00a000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SBC_16(_reg1,_reg2,_reg3,_flagreq) EMIT_JIT_CODE(0x5a00a000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))

#define GEN_ADD_8(_reg1,_reg2,_reg3,_flagreq)  EMIT_JIT_CODE(0x0b008000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_ADC_8(_reg1,_reg2,_reg3,_flagreq)  EMIT_JIT_CODE(0x1a008000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SUB_8(_reg1,_reg2,_reg3,_flagreq)  EMIT_JIT_CODE(0x4b008000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))
#define GEN_SBC_8(_reg1,_reg2,_reg3,_flagreq)  EMIT_JIT_CODE(0x5a008000|((_flagreq&1)<<29)|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_reg3&0x1f)<<(20)))

#define GEN_TST_64(_reg1,_reg2) GEN_AND_64(31,_reg1,_reg2,1)
#define GEN_TST_32(_reg1,_reg2) GEN_AND_32(31,_reg1,_reg2,1)

#define GEN_CMP_64(_reg1,_reg2) GEN_SUB_64(31,_reg1,_reg2,1)
#define GEN_CMP_32(_reg1,_reg2) GEN_SUB_32(31,_reg1,_reg2,1)

#define GEN_NEG_64(_reg1,_reg2,_flagreq) GEN_SUB_64(_reg1,31,_reg2,_flagreq)
#define GEN_NEG_32(_reg1,_reg2,_flagreq) GEN_SUB_32(_reg1,31,_reg2,_flagreq)

#define GEN_SETIMM_64(_reg1,_imm64) EMIT_JIT_CODE(0xd2800000|(((((UINT64)_imm64)>>(16*0))&0xFFFF)<<(5))|((_reg1&0x1f)<<0)); if ((((UINT64)_imm64)>>(16*1))&0xFFFF) EMIT_JIT_CODE(0xf2a00000|(((((UINT64)_imm64)>>(16*1))&0xFFFF)<<(5))|((_reg1&0x1f)<<0)); if ((((UINT64)_imm64)>>(16*2))&0xFFFF) EMIT_JIT_CODE(0xf2c00000|(((((UINT64)_imm64)>>(16*2))&0xFFFF)<<(5))|((_reg1&0x1f)<<0)); if ((((UINT64)_imm64)>>(16*3))&0xFFFF) EMIT_JIT_CODE(0xf2e00000|(((((UINT64)_imm64)>>(16*3))&0xFFFF)<<(5))|((_reg1&0x1f)<<0))

#define GEN_LDR(_reg1,_reg2,_datasize) EMIT_JIT_CODE(0x39400000|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_datasize&3)<<30))
#define GEN_STR(_reg1,_reg2,_datasize) EMIT_JIT_CODE(0x39000000|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(5))|((_datasize&3)<<30))

#define GEN_LDP_64(_reg1,_reg2,_reg3,_imm) EMIT_JIT_CODE(0xa8c003e0|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(10))|((_reg3&0x1f)<<(5))|(((_imm)&0xFF8)<<12))
#define GEN_LDP_32(_reg1,_reg2,_reg3,_imm) EMIT_JIT_CODE(0x28c003e0|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(10))|((_reg3&0x1f)<<(5))|(((_imm)&0x7FC)<<13))

#define GEN_STP_64(_reg1,_reg2,_reg3,_imm) EMIT_JIT_CODE(0xa98003e0|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(10))|((_reg3&0x1f)<<(5))|(((_imm)&0xFF8)<<12))
#define GEN_STP_32(_reg1,_reg2,_reg3,_imm) EMIT_JIT_CODE(0x298003e0|((_reg1&0x1f)<<(0))|((_reg2&0x1f)<<(10))|((_reg3&0x1f)<<(5))|(((_imm)&0x7FC)<<13))

#define GEN_BR(_reg1)  EMIT_JIT_CODE(0xd61f0000|((_reg1&0x1f)<<(5)));
#define GEN_BLR(_reg1) EMIT_JIT_CODE(0xd63f0000|((_reg1&0x1f)<<(5)));

#define GEN_CALL(_addr) GEN_STP_64(30,9,31,-16); GEN_SETIMM_64(9,_addr); GEN_BLR(9); GEN_LDP_64(30,9,31,16)
#define GEN_JMP(_addr)  GEN_SETIMM_64(9,_addr); GEN_BR(9)

#define GEN_RET() EMIT_JIT_CODE(0xd65f03c0)
