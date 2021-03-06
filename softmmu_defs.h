#ifndef SOFTMMU_DEFS_H
#define SOFTMMU_DEFS_H

uint8_t REGPARM __ldb_mmu(target_ulong addr, int mmu_idx);
void REGPARM __stb_mmu(target_ulong addr, uint8_t val, int mmu_idx);
uint16_t REGPARM __ldw_mmu(target_ulong addr, int mmu_idx);
void REGPARM __stw_mmu(target_ulong addr, uint16_t val, int mmu_idx);
uint32_t REGPARM __ldl_mmu(target_ulong addr, int mmu_idx);
void REGPARM __stl_mmu(target_ulong addr, uint32_t val, int mmu_idx);
uint64_t REGPARM __ldq_mmu(target_ulong addr, int mmu_idx);
void REGPARM __stq_mmu(target_ulong addr, uint64_t val, int mmu_idx);

uint8_t REGPARM __ldb_cmmu(target_ulong addr, int mmu_idx);
void REGPARM __stb_cmmu(target_ulong addr, uint8_t val, int mmu_idx);
uint16_t REGPARM __ldw_cmmu(target_ulong addr, int mmu_idx);
void REGPARM __stw_cmmu(target_ulong addr, uint16_t val, int mmu_idx);
uint32_t REGPARM __ldl_cmmu(target_ulong addr, int mmu_idx);
void REGPARM __stl_cmmu(target_ulong addr, uint32_t val, int mmu_idx);
uint64_t REGPARM __ldq_cmmu(target_ulong addr, int mmu_idx);
void REGPARM __stq_cmmu(target_ulong addr, uint64_t val, int mmu_idx);

#if 1
uint8_t REGPARM io_readb_mmu(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writeb_mmu(target_phys_addr_t physaddr, uint8_t val, target_ulong addr, void *retaddr);
uint16_t REGPARM io_readw_mmu(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writew_mmu(target_phys_addr_t physaddr, uint16_t val, target_ulong addr, void *retaddr);
uint32_t REGPARM io_readl_mmu(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writel_mmu(target_phys_addr_t physaddr, uint32_t val, target_ulong addr, void *retaddr);
uint64_t REGPARM io_readq_mmu(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writeq_mmu(target_phys_addr_t physaddr, uint64_t val, target_ulong addr, void *retaddr);
#endif

#ifdef CONFIG_S2E

uint8_t REGPARM io_readb_mmu_s2e_trace(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writeb_mmu_s2e_trace(target_phys_addr_t physaddr, uint8_t val, target_ulong addr, void *retaddr);
uint16_t REGPARM io_readw_mmu_s2e_trace(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writew_mmu_s2e_trace(target_phys_addr_t physaddr, uint16_t val, target_ulong addr, void *retaddr);
uint32_t REGPARM io_readl_mmu_s2e_trace(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writel_mmu_s2e_trace(target_phys_addr_t physaddr, uint32_t val, target_ulong addr, void *retaddr);
uint64_t REGPARM io_readq_mmu_s2e_trace(target_phys_addr_t physaddr, target_ulong addr, void *retaddr);
void REGPARM io_writeq_mmu_s2e_trace(target_phys_addr_t physaddr, uint64_t val, target_ulong addr, void *retaddr);

uintptr_t s2e_notdirty_mem_write(target_phys_addr_t ram_addr);
int s2e_ismemfunc(void *f);

uint8_t REGPARM __ldb_mmu_s2e_trace(target_ulong addr, int mmu_idx);
void REGPARM __stb_mmu_s2e_trace(target_ulong addr, uint8_t val, int mmu_idx);
uint16_t REGPARM __ldw_mmu_s2e_trace(target_ulong addr, int mmu_idx);
void REGPARM __stw_mmu_s2e_trace(target_ulong addr, uint16_t val, int mmu_idx);
uint32_t REGPARM __ldl_mmu_s2e_trace(target_ulong addr, int mmu_idx);
void REGPARM __stl_mmu_s2e_trace(target_ulong addr, uint32_t val, int mmu_idx);
uint64_t REGPARM __ldq_mmu_s2e_trace(target_ulong addr, int mmu_idx);
void REGPARM __stq_mmu_s2e_trace(target_ulong addr, uint64_t val, int mmu_idx);

#endif

#endif
