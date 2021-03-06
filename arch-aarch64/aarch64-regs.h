#include <assert.h>

#define aarch64_mrs(V, SR) __asm__ __volatile__ ("mrs\t%0, " SR "\n" : "=r" (V))
#define aarch64_msr(SR, V) __asm__ __volatile__ ("msr\t" SR ", %0\n" : : "r" (V))

static inline uint32_t aarch64_esr(unsigned int el)
{
	uint32_t esr = 0;

	switch (el) {
	case 0:
		assert(0);
		break;
	case 1:
		aarch64_mrs(esr, "ESR_EL1");
		break;
	case 2:
		aarch64_mrs(esr, "ESR_EL2");
		break;
	case 3:
		aarch64_mrs(esr, "ESR_EL3");
		break;
	}
	return esr;
}

static inline uint32_t aarch64_sctlr(unsigned int el)
{
	uint32_t v = 0;

	switch (el) {
	case 0:
		assert(0);
		break;
	case 1:
		aarch64_mrs(v, "SCTLR_EL1");
		break;
	case 2:
		aarch64_mrs(v, "SCTLR_EL2");
		break;
	case 3:
		aarch64_mrs(v, "SCTLR_EL3");
		break;
	}
	return v;
}

static inline uint32_t aarch64_spsr(unsigned int el)
{
	uint32_t v = 0;

	switch (el) {
	case 0:
		assert(0);
		break;
	case 1:
		aarch64_mrs(v, "SPSR_EL1");
		break;
	case 2:
		aarch64_mrs(v, "SPSR_EL2");
		break;
	case 3:
		aarch64_mrs(v, "SPSR_EL3");
		break;
	}
	return v;
}

static inline uint64_t aarch64_elr(unsigned int el)
{
	uint64_t v = 0;

	switch (el) {
	case 0:
		assert(0);
		break;
	case 1:
		aarch64_mrs(v, "ELR_EL1");
		break;
	case 2:
		aarch64_mrs(v, "ELR_EL2");
		break;
	case 3:
		aarch64_mrs(v, "ELR_EL3");
		break;
	}
	return v;
}

static inline void aarch64_set_elr(unsigned int el, uint64_t v)
{
	switch (el) {
	case 0:
		assert(0);
		break;
	case 1:
		aarch64_msr("ELR_EL1", v);
		break;
	case 2:
		aarch64_msr("ELR_EL2", v);
		break;
	case 3:
		aarch64_msr("ELR_EL3", v);
		break;
	}
}

static inline void aarch64_set_sctlr(unsigned int el, uint64_t v)
{
	switch (el) {
	case 0:
		assert(0);
		break;
	case 1:
		aarch64_msr("SCTLR_EL1", v);
		break;
	case 2:
		aarch64_msr("SCTLR_EL2", v);
		break;
	case 3:
		aarch64_msr("SCTLR_EL3", v);
		break;
	}
}

#define HCR_VM        (1ULL << 0)
#define HCR_SWIO      (1ULL << 1)
#define HCR_PTW       (1ULL << 2)
#define HCR_FMO       (1ULL << 3)
#define HCR_IMO       (1ULL << 4)
#define HCR_AMO       (1ULL << 5)
#define HCR_VF        (1ULL << 6)
#define HCR_VI        (1ULL << 7)
#define HCR_VSE       (1ULL << 8)
#define HCR_FB        (1ULL << 9)
#define HCR_DC        (1ULL << 12)
#define HCR_TWI       (1ULL << 13)
#define HCR_TWE       (1ULL << 14)
#define HCR_TID0      (1ULL << 15)
#define HCR_TID1      (1ULL << 16)
#define HCR_TID2      (1ULL << 17)
#define HCR_TID3      (1ULL << 18)
#define HCR_TSC       (1ULL << 19)
#define HCR_TIDCP     (1ULL << 20)
#define HCR_TACR      (1ULL << 21)
#define HCR_TSW       (1ULL << 22)
#define HCR_TPC       (1ULL << 23)
#define HCR_TPU       (1ULL << 24)
#define HCR_TTLB      (1ULL << 25)
#define HCR_TVM       (1ULL << 26)
#define HCR_TGE       (1ULL << 27)
#define HCR_TDZ       (1ULL << 28)
#define HCR_HCD       (1ULL << 29)
#define HCR_TRVM      (1ULL << 30)
#define HCR_RW        (1ULL << 31)
#define HCR_CD        (1ULL << 32)
#define HCR_ID        (1ULL << 33)

#define SCR_NS        (1U << 0)
#define SCR_IRQ       (1U << 1)
#define SCR_FIQ       (1U << 2)
#define SCR_EA        (1U << 3)
#define SCR_SMD       (1U << 7)
#define SCR_HCE       (1U << 8)
#define SCR_SIF       (1U << 9)
#define SCR_RW        (1U << 10)
#define SCR_ST        (1U << 11)
#define SCR_TWI       (1U << 12)
#define SCR_TWE       (1U << 13)

#define SCTLR_M       (1U << 0)
#define SCTLR_A       (1U << 1)
#define SCTLR_C       (1U << 2)
#define SCTLR_SA      (1U << 3)
#define SCTLR_I       (1U << 12)

#define PAR_F		(1 << 0)
#define PAR_PTW		(1 << 8)
#define PAR_S		(1 << 9)
