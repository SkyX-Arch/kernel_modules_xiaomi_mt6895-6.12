savedcmd_/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o := clang -Wp,-MMD,/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/.mcupm_v3.mod.o.d -nostdinc -I/home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include -I./arch/arm64/include/generated -I/home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include -I./include -I/home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I/home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi -I./include/generated/uapi -include /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler-version.h -include /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kconfig.h -include /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler_types.h -D__KERNEL__ -DOPLUS_FEATURE_CHG_BASIC --target=aarch64-linux-gnu -fintegrated-as -Werror=unknown-warning-option -Werror=ignored-optimization-argument -Werror=option-ignored -Werror=unused-command-line-argument -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -fmacro-prefix-map=/home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/= -Werror -std=gnu11 -fshort-wchar -funsigned-char -fno-common -fno-PIE -fno-strict-aliasing -DOPLUS_FEATURE_CHG_BASIC -mgeneral-regs-only -DCONFIG_CC_HAS_K_CONSTRAINT=1 -Wno-psabi -fasynchronous-unwind-tables -mbranch-protection=pac-ret -Wa,-march=armv8.5-a -DARM64_ASM_ARCH='"armv8.5-a"' -ffixed-x18 -DKASAN_SHADOW_SCALE_SHIFT= -fno-delete-null-pointer-checks -O2 -fstack-protector-strong -fno-omit-frame-pointer -fno-optimize-sibling-calls -ftrivial-auto-var-init=zero -fno-stack-clash-protection -fno-lto -flto=thin -fsplit-lto-unit -fvisibility=default -falign-functions=4 -fstrict-flex-arrays=3 -fno-strict-overflow -fno-stack-check -Wall -Wundef -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Werror=strict-prototypes -Wno-format-security -Wno-trigraphs -Wno-frame-address -Wno-address-of-packed-member -Wframe-larger-than=2048 -Wno-gnu -Wno-format-overflow-non-kprintf -Wno-format-truncation-non-kprintf -Wvla -Wno-pointer-sign -Wcast-function-type -Wimplicit-fallthrough -Werror=date-time -Werror=incompatible-pointer-types -Wenum-conversion -Wextra -Wunused -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-format-overflow -Wno-override-init -Wno-pointer-to-enum-cast -Wno-tautological-constant-out-of-range-compare -Wno-unaligned-access -Wno-enum-compare-conditional -Wno-missing-field-initializers -Wno-type-limits -Wno-shift-negative-value -Wno-enum-enum-conversion -Wno-sign-compare -Wno-unused-parameter -g -gdwarf-5 -gz=zstd -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1808 -fsanitize=array-bounds -fsanitize=local-bounds -fsanitize-trap=undefined -fdebug-info-for-profiling -mllvm -enable-fs-discriminator=true -mllvm -improved-fs-discriminator=true -DMODULE -DOPLUS_FEATURE_CHG_BASIC -DKBUILD_BASENAME='"mcupm_v3.mod"' -DKBUILD_MODNAME='"mcupm_v3"' -D__KBUILD_MODNAME=kmod_mcupm_v3 -c -o /home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o /home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.c

source_/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o := /home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.c

deps_/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o := \
    $(wildcard include/config/MODULE_UNLOAD) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler_types.h \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/PAHOLE_HAS_BTF_TAG) \
    $(wildcard include/config/FUNCTION_ALIGNMENT) \
    $(wildcard include/config/CC_HAS_SANE_FUNCTION_ALIGNMENT) \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/ARM64) \
    $(wildcard include/config/LD_DEAD_CODE_DATA_ELIMINATION) \
    $(wildcard include/config/LTO_CLANG) \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_COUNTED_BY) \
    $(wildcard include/config/UBSAN_SIGNED_WRAP) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler_attributes.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler-clang.h \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/compiler.h \
    $(wildcard include/config/ARM64_PTR_AUTH_KERNEL) \
    $(wildcard include/config/ARM64_PTR_AUTH) \
    $(wildcard include/config/BUILTIN_RETURN_ADDRESS_STRIPS_PAC) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/module.h \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/SYSFS) \
    $(wildcard include/config/MODULES_TREE_LOOKUP) \
    $(wildcard include/config/LIVEPATCH) \
    $(wildcard include/config/STACKTRACE_BUILD_ID) \
    $(wildcard include/config/ARCH_USES_CFI_TRAPS) \
    $(wildcard include/config/GENERIC_BUG) \
    $(wildcard include/config/KALLSYMS) \
    $(wildcard include/config/SMP) \
    $(wildcard include/config/TRACEPOINTS) \
    $(wildcard include/config/TREE_SRCU) \
    $(wildcard include/config/BPF_EVENTS) \
    $(wildcard include/config/DEBUG_INFO_BTF_MODULES) \
    $(wildcard include/config/JUMP_LABEL) \
    $(wildcard include/config/TRACING) \
    $(wildcard include/config/EVENT_TRACING) \
    $(wildcard include/config/FTRACE_MCOUNT_RECORD) \
    $(wildcard include/config/KPROBES) \
    $(wildcard include/config/HAVE_STATIC_CALL_INLINE) \
    $(wildcard include/config/KUNIT) \
    $(wildcard include/config/PRINTK_INDEX) \
    $(wildcard include/config/CONSTRUCTORS) \
    $(wildcard include/config/FUNCTION_ERROR_INJECTION) \
    $(wildcard include/config/DYNAMIC_DEBUG_CORE) \
    $(wildcard include/config/MITIGATION_RETPOLINE) \
    $(wildcard include/config/MODULE_SIG) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/list.h \
    $(wildcard include/config/LIST_HARDENED) \
    $(wildcard include/config/DEBUG_LIST) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/container_of.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/build_bug.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/compiler.h \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/OBJTOOL) \
    $(wildcard include/config/64BIT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/rwonce.h \
    $(wildcard include/config/LTO) \
    $(wildcard include/config/AS_HAS_LDAPR) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/alternative-macros.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/const.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/const.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/const.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/bits.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/cpucaps.h \
    $(wildcard include/config/ARM64_PAN) \
    $(wildcard include/config/ARM64_EPAN) \
    $(wildcard include/config/ARM64_SVE) \
    $(wildcard include/config/ARM64_SME) \
    $(wildcard include/config/ARM64_CNP) \
    $(wildcard include/config/ARM64_PSEUDO_NMI) \
    $(wildcard include/config/ARM64_MTE) \
    $(wildcard include/config/ARM64_BTI) \
    $(wildcard include/config/ARM64_TLB_RANGE) \
    $(wildcard include/config/UNMAP_KERNEL_AT_EL0) \
    $(wildcard include/config/ARM64_ERRATUM_843419) \
    $(wildcard include/config/ARM64_ERRATUM_1742098) \
    $(wildcard include/config/ARM64_ERRATUM_2645198) \
    $(wildcard include/config/ARM64_ERRATUM_2658417) \
    $(wildcard include/config/CAVIUM_ERRATUM_23154) \
    $(wildcard include/config/NVIDIA_CARMEL_CNP_ERRATUM) \
    $(wildcard include/config/ARM64_WORKAROUND_REPEAT_TLBI) \
    $(wildcard include/config/ARM64_ERRATUM_3194386) \
  arch/arm64/include/generated/asm/cpucap-defs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/types.h \
  arch/arm64/include/generated/uapi/asm/types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/int-ll64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/int-ll64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/bitsperlong.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitsperlong.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/bitsperlong.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/posix_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/stddef.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/stddef.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/posix_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/posix_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/insn-def.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/brk-imm.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/stringify.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/rwonce.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kasan-checks.h \
    $(wildcard include/config/KASAN_GENERIC) \
    $(wildcard include/config/KASAN_SW_TAGS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kcsan-checks.h \
    $(wildcard include/config/KCSAN) \
    $(wildcard include/config/KCSAN_WEAK_MEMORY) \
    $(wildcard include/config/KCSAN_IGNORE_ATOMICS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/poison.h \
    $(wildcard include/config/ILLEGAL_POINTER_VALUE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/barrier.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/barrier.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/stat.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/stat.h \
    $(wildcard include/config/COMPAT) \
  arch/arm64/include/generated/uapi/asm/stat.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/stat.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/time.h \
    $(wildcard include/config/POSIX_TIMERS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/cache.h \
    $(wildcard include/config/ARCH_HAS_CACHE_LINE_SIZE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/kernel.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/sysinfo.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/cache.h \
    $(wildcard include/config/KASAN_HW_TAGS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bitops.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bits.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/bits.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/typecheck.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/generic-non-atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/bitops.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/builtin-__ffs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/builtin-ffs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/builtin-__fls.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/builtin-fls.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/ffz.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/fls64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/sched.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/hweight.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/arch_hweight.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/const_hweight.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/cmpxchg.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/lse.h \
    $(wildcard include/config/ARM64_LSE_ATOMICS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/atomic_ll_sc.h \
    $(wildcard include/config/CC_HAS_K_CONSTRAINT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/GENDWARFKSYMS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/linkage.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/alternative.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/init.h \
    $(wildcard include/config/MEMORY_HOTPLUG) \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/atomic_lse.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/atomic/atomic-arch-fallback.h \
    $(wildcard include/config/GENERIC_ATOMIC64) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/atomic/atomic-long.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/atomic/atomic-instrumented.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/instrumented.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kmsan-checks.h \
    $(wildcard include/config/KMSAN) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/instrumented-atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/lock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/instrumented-lock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/non-atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/non-instrumented-non-atomic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/le.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/byteorder.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/byteorder/little_endian.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/byteorder/little_endian.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/swab.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/swab.h \
  arch/arm64/include/generated/uapi/asm/swab.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/swab.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/byteorder/generic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kasan-enabled.h \
    $(wildcard include/config/KASAN) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/static_key.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/jump_label.h \
    $(wildcard include/config/HAVE_ARCH_JUMP_LABEL_RELATIVE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/jump_label.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/insn.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/cputype.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/sysreg.h \
    $(wildcard include/config/BROKEN_GAS_INST) \
    $(wildcard include/config/ARM64_PA_BITS_52) \
    $(wildcard include/config/ARM64_4K_PAGES) \
    $(wildcard include/config/ARM64_16K_PAGES) \
    $(wildcard include/config/ARM64_64K_PAGES) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kasan-tags.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/gpr-num.h \
  arch/arm64/include/generated/asm/sysreg-defs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bitfield.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/mte-def.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/math64.h \
    $(wildcard include/config/ARCH_SUPPORTS_INT128) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/math.h \
  arch/arm64/include/generated/asm/div64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/div64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/math64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/time64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/time64.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/time.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/time_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/time32.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timex.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/timex.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/param.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/param.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/param.h \
    $(wildcard include/config/HZ) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/param.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/timex.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/arch_timer.h \
    $(wildcard include/config/ARM_ARCH_TIMER_OOL_WORKAROUND) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/hwcap.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/hwcap.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/cpufeature.h \
    $(wildcard include/config/ARM64_SW_TTBR0_PAN) \
    $(wildcard include/config/ARM64_DEBUG_PRIORITY_MASKING) \
    $(wildcard include/config/ARM64_BTI_KERNEL) \
    $(wildcard include/config/ARM64_POE) \
    $(wildcard include/config/ARM64_PA_BITS) \
    $(wildcard include/config/ARM64_HW_AFDBM) \
    $(wildcard include/config/ARM64_AMU_EXTN) \
    $(wildcard include/config/ARM64_LPA2) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bug.h \
    $(wildcard include/config/BUG_ON_DATA_CORRUPTION) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/bug.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/asm-bug.h \
    $(wildcard include/config/DEBUG_BUGVERBOSE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/bug.h \
    $(wildcard include/config/BUG) \
    $(wildcard include/config/GENERIC_BUG_RELATIVE_POINTERS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/instrumentation.h \
    $(wildcard include/config/NOINSTR_VALIDATION) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/once_lite.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/panic.h \
    $(wildcard include/config/PANIC_TIMEOUT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/printk.h \
    $(wildcard include/config/MTK_PRINTK_DEBUG) \
    $(wildcard include/config/MESSAGE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_QUIET) \
    $(wildcard include/config/EARLY_PRINTK) \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/DYNAMIC_DEBUG) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/stdarg.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kern_levels.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/ratelimit_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/spinlock_types_raw.h \
    $(wildcard include/config/DEBUG_SPINLOCK) \
    $(wildcard include/config/DEBUG_LOCK_ALLOC) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/spinlock_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/qspinlock_types.h \
    $(wildcard include/config/NR_CPUS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/qrwlock_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/lockdep_types.h \
    $(wildcard include/config/PROVE_RAW_LOCK_NESTING) \
    $(wildcard include/config/LOCKDEP) \
    $(wildcard include/config/LOCK_STAT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kernel.h \
    $(wildcard include/config/PREEMPT_VOLUNTARY_BUILD) \
    $(wildcard include/config/PREEMPT_DYNAMIC) \
    $(wildcard include/config/HAVE_PREEMPT_DYNAMIC_CALL) \
    $(wildcard include/config/HAVE_PREEMPT_DYNAMIC_KEY) \
    $(wildcard include/config/PREEMPT_) \
    $(wildcard include/config/DEBUG_ATOMIC_SLEEP) \
    $(wildcard include/config/MMU) \
    $(wildcard include/config/PROVE_LOCKING) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/align.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/array_size.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/limits.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/limits.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/limits.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/hex.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kstrtox.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/log2.h \
    $(wildcard include/config/ARCH_HAS_ILOG2_U32) \
    $(wildcard include/config/ARCH_HAS_ILOG2_U64) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/minmax.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sprintf.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/static_call_types.h \
    $(wildcard include/config/HAVE_STATIC_CALL) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/instruction_pointer.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/wordpart.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/cpumask.h \
    $(wildcard include/config/FORCE_NR_CPUS) \
    $(wildcard include/config/HOTPLUG_CPU) \
    $(wildcard include/config/DEBUG_PER_CPU_MAPS) \
    $(wildcard include/config/CPUMASK_OFFSTACK) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/cleanup.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bitmap.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/errno.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/errno.h \
  arch/arm64/include/generated/uapi/asm/errno.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/errno.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/errno-base.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/find.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/string.h \
    $(wildcard include/config/BINARY_PRINTF) \
    $(wildcard include/config/FORTIFY_SOURCE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/args.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/err.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/overflow.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/string.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/string.h \
    $(wildcard include/config/ARCH_HAS_UACCESS_FLUSHCACHE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/fortify-string.h \
    $(wildcard include/config/CC_HAS_KASAN_MEMINTRINSIC_PREFIX) \
    $(wildcard include/config/GENERIC_ENTRY) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bitmap-str.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/cpumask_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/threads.h \
    $(wildcard include/config/BASE_SMALL) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/gfp_types.h \
    $(wildcard include/config/SLAB_OBJ_EXT) \
    $(wildcard include/config/CMA) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/numa.h \
    $(wildcard include/config/NODES_SHIFT) \
    $(wildcard include/config/NUMA_KEEP_MEMINFO) \
    $(wildcard include/config/NUMA) \
    $(wildcard include/config/HAVE_ARCH_NODE_DEV_GROUP) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/percpu.h \
    $(wildcard include/config/MEM_ALLOC_PROFILING) \
    $(wildcard include/config/RANDOM_KMALLOC_CACHES) \
    $(wildcard include/config/PAGE_SIZE_4KB) \
    $(wildcard include/config/NEED_PER_CPU_PAGE_FIRST_CHUNK) \
    $(wildcard include/config/HAVE_SETUP_PER_CPU_AREA) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/alloc_tag.h \
    $(wildcard include/config/MEM_ALLOC_PROFILING_DEBUG) \
    $(wildcard include/config/MEM_ALLOC_PROFILING_ENABLED_BY_DEFAULT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/codetag.h \
    $(wildcard include/config/CODE_TAGGING) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/preempt.h \
    $(wildcard include/config/PREEMPT_RT) \
    $(wildcard include/config/PREEMPT_COUNT) \
    $(wildcard include/config/DEBUG_PREEMPT) \
    $(wildcard include/config/TRACE_PREEMPT_TOGGLE) \
    $(wildcard include/config/PREEMPTION) \
    $(wildcard include/config/PREEMPT_NOTIFIERS) \
    $(wildcard include/config/PREEMPT_NONE) \
    $(wildcard include/config/PREEMPT_VOLUNTARY) \
    $(wildcard include/config/PREEMPT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/preempt.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/thread_info.h \
    $(wildcard include/config/THREAD_INFO_IN_TASK) \
    $(wildcard include/config/HAVE_ARCH_WITHIN_STACK_FRAMES) \
    $(wildcard include/config/HARDENED_USERCOPY) \
    $(wildcard include/config/SH) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/restart_block.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/current.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/thread_info.h \
    $(wildcard include/config/SHADOW_CALL_STACK) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/memory.h \
    $(wildcard include/config/ARM64_VA_BITS) \
    $(wildcard include/config/KASAN_SHADOW_OFFSET) \
    $(wildcard include/config/VMAP_STACK) \
    $(wildcard include/config/RANDOMIZE_BASE) \
    $(wildcard include/config/DEBUG_VIRTUAL) \
    $(wildcard include/config/EFI) \
    $(wildcard include/config/ARM_GIC_V3_ITS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sizes.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/page-def.h \
    $(wildcard include/config/PAGE_SHIFT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mmdebug.h \
    $(wildcard include/config/DEBUG_VM) \
    $(wildcard include/config/DEBUG_VM_IRQSOFF) \
    $(wildcard include/config/DEBUG_VM_PGFLAGS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/boot.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/sections.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/sections.h \
    $(wildcard include/config/HAVE_FUNCTION_DESCRIPTORS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/memory_model.h \
    $(wildcard include/config/FLATMEM) \
    $(wildcard include/config/SPARSEMEM_VMEMMAP) \
    $(wildcard include/config/SPARSEMEM) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/pfn.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/stack_pointer.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/percpu.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/percpu.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/percpu-defs.h \
    $(wildcard include/config/DEBUG_FORCE_WEAK_PER_CPU) \
    $(wildcard include/config/AMD_MEM_ENCRYPT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/smp.h \
    $(wildcard include/config/UP_LATE_INIT) \
    $(wildcard include/config/CSD_LOCK_WAIT_DEBUG) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/smp_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/llist.h \
    $(wildcard include/config/ARCH_HAVE_NMI_SAFE_CMPXCHG) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/smp.h \
    $(wildcard include/config/ARM64_ACPI_PARKING_PROTOCOL) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/irqflags.h \
    $(wildcard include/config/TRACE_IRQFLAGS) \
    $(wildcard include/config/IRQSOFF_TRACER) \
    $(wildcard include/config/PREEMPT_TRACER) \
    $(wildcard include/config/DEBUG_IRQFLAGS) \
    $(wildcard include/config/TRACE_IRQFLAGS_SUPPORT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/irqflags_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/irqflags.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/ptrace.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/ptrace.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/sve_context.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/irqchip/arm-gic-v3-prio.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched.h \
    $(wildcard include/config/VIRT_CPU_ACCOUNTING_NATIVE) \
    $(wildcard include/config/SCHED_INFO) \
    $(wildcard include/config/SCHEDSTATS) \
    $(wildcard include/config/SCHED_CORE) \
    $(wildcard include/config/FAIR_GROUP_SCHED) \
    $(wildcard include/config/RT_GROUP_SCHED) \
    $(wildcard include/config/RT_MUTEXES) \
    $(wildcard include/config/UCLAMP_TASK) \
    $(wildcard include/config/UCLAMP_BUCKETS_COUNT) \
    $(wildcard include/config/KMAP_LOCAL) \
    $(wildcard include/config/SCHED_CLASS_EXT) \
    $(wildcard include/config/CGROUP_SCHED) \
    $(wildcard include/config/BLK_DEV_IO_TRACE) \
    $(wildcard include/config/PREEMPT_RCU) \
    $(wildcard include/config/TASKS_RCU) \
    $(wildcard include/config/TASKS_TRACE_RCU) \
    $(wildcard include/config/MEMCG_V1) \
    $(wildcard include/config/LRU_GEN) \
    $(wildcard include/config/COMPAT_BRK) \
    $(wildcard include/config/CGROUPS) \
    $(wildcard include/config/BLK_CGROUP) \
    $(wildcard include/config/PSI) \
    $(wildcard include/config/PAGE_OWNER) \
    $(wildcard include/config/EVENTFD) \
    $(wildcard include/config/ARCH_HAS_CPU_PASID) \
    $(wildcard include/config/CPU_SUP_INTEL) \
    $(wildcard include/config/TASK_DELAY_ACCT) \
    $(wildcard include/config/STACKPROTECTOR) \
    $(wildcard include/config/ARCH_HAS_SCALED_CPUTIME) \
    $(wildcard include/config/CPU_FREQ_TIMES) \
    $(wildcard include/config/VIRT_CPU_ACCOUNTING_GEN) \
    $(wildcard include/config/NO_HZ_FULL) \
    $(wildcard include/config/POSIX_CPUTIMERS) \
    $(wildcard include/config/POSIX_CPU_TIMERS_TASK_WORK) \
    $(wildcard include/config/KEYS) \
    $(wildcard include/config/SYSVIPC) \
    $(wildcard include/config/DETECT_HUNG_TASK) \
    $(wildcard include/config/IO_URING) \
    $(wildcard include/config/AUDIT) \
    $(wildcard include/config/AUDITSYSCALL) \
    $(wildcard include/config/SCHED_PROXY_EXEC) \
    $(wildcard include/config/UBSAN) \
    $(wildcard include/config/UBSAN_TRAP) \
    $(wildcard include/config/COMPACTION) \
    $(wildcard include/config/TASK_XACCT) \
    $(wildcard include/config/CPUSETS) \
    $(wildcard include/config/X86_CPU_RESCTRL) \
    $(wildcard include/config/FUTEX) \
    $(wildcard include/config/PERF_EVENTS) \
    $(wildcard include/config/NUMA_BALANCING) \
    $(wildcard include/config/RSEQ) \
    $(wildcard include/config/SCHED_MM_CID) \
    $(wildcard include/config/FAULT_INJECTION) \
    $(wildcard include/config/LATENCYTOP) \
    $(wildcard include/config/FUNCTION_GRAPH_TRACER) \
    $(wildcard include/config/KCOV) \
    $(wildcard include/config/MEMCG) \
    $(wildcard include/config/UPROBES) \
    $(wildcard include/config/BCACHE) \
    $(wildcard include/config/SECURITY) \
    $(wildcard include/config/BPF_SYSCALL) \
    $(wildcard include/config/GCC_PLUGIN_STACKLEAK) \
    $(wildcard include/config/X86_MCE) \
    $(wildcard include/config/KRETPROBES) \
    $(wildcard include/config/RETHOOK) \
    $(wildcard include/config/ARCH_HAS_PARANOID_L1D_FLUSH) \
    $(wildcard include/config/RV) \
    $(wildcard include/config/USER_EVENTS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/sched.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/processor.h \
    $(wildcard include/config/KUSER_HELPERS) \
    $(wildcard include/config/ARM64_FORCE_52BIT) \
    $(wildcard include/config/HAVE_HW_BREAKPOINT) \
    $(wildcard include/config/ARM64_TAGGED_ADDR_ABI) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/android_vendor.h \
    $(wildcard include/config/ANDROID_VENDOR_OEM_DATA) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/processor.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/vdso/processor.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/hw_breakpoint.h \
    $(wildcard include/config/CPU_PM) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/virt.h \
    $(wildcard include/config/KVM) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/kasan.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/mte-kasan.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/pgtable-types.h \
    $(wildcard include/config/PGTABLE_LEVELS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/pgtable-nopud.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/pgtable-nop4d.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/pgtable-hwdef.h \
    $(wildcard include/config/ARM64_CONT_PTE_SHIFT) \
    $(wildcard include/config/ARM64_CONT_PMD_SHIFT) \
    $(wildcard include/config/ARM64_VA_BITS_52) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/pointer_auth.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/prctl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/random.h \
    $(wildcard include/config/VMGENID) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/random.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/ioctl.h \
  arch/arm64/include/generated/uapi/asm/ioctl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/ioctl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/ioctl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/irqnr.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/irqnr.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/prandom.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/once.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/spectre.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/fpsimd.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/sigcontext.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/pid_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sem_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/shm.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/page.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/personality.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/personality.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/getorder.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/shmparam.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/shmparam.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kmsan_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mutex_types.h \
    $(wildcard include/config/MUTEX_SPIN_ON_OWNER) \
    $(wildcard include/config/DEBUG_MUTEXES) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/osq_lock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/spinlock_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rwlock_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/plist_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/hrtimer_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timerqueue_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rbtree_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timer_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/seccomp_types.h \
    $(wildcard include/config/SECCOMP) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/nodemask_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/refcount_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/resource.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/resource.h \
  arch/arm64/include/generated/uapi/asm/resource.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/resource.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/resource.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/latencytop.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/prio.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/signal_types.h \
    $(wildcard include/config/OLD_SIGACTION) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/signal.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/signal.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/signal.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/signal.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/signal.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/signal-defs.h \
  arch/arm64/include/generated/uapi/asm/siginfo.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/siginfo.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/spinlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bottom_half.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/lockdep.h \
    $(wildcard include/config/DEBUG_LOCKING_API_SELFTESTS) \
  arch/arm64/include/generated/asm/mmiowb.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/mmiowb.h \
    $(wildcard include/config/MMIOWB) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/spinlock.h \
  arch/arm64/include/generated/asm/qspinlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/qspinlock.h \
  arch/arm64/include/generated/asm/qrwlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/qrwlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rwlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/spinlock_api_smp.h \
    $(wildcard include/config/INLINE_SPIN_LOCK) \
    $(wildcard include/config/INLINE_SPIN_LOCK_BH) \
    $(wildcard include/config/INLINE_SPIN_LOCK_IRQ) \
    $(wildcard include/config/INLINE_SPIN_LOCK_IRQSAVE) \
    $(wildcard include/config/INLINE_SPIN_TRYLOCK) \
    $(wildcard include/config/INLINE_SPIN_TRYLOCK_BH) \
    $(wildcard include/config/UNINLINE_SPIN_UNLOCK) \
    $(wildcard include/config/INLINE_SPIN_UNLOCK_BH) \
    $(wildcard include/config/INLINE_SPIN_UNLOCK_IRQ) \
    $(wildcard include/config/INLINE_SPIN_UNLOCK_IRQRESTORE) \
    $(wildcard include/config/GENERIC_LOCKBREAK) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rwlock_api_smp.h \
    $(wildcard include/config/INLINE_READ_LOCK) \
    $(wildcard include/config/INLINE_WRITE_LOCK) \
    $(wildcard include/config/INLINE_READ_LOCK_BH) \
    $(wildcard include/config/INLINE_WRITE_LOCK_BH) \
    $(wildcard include/config/INLINE_READ_LOCK_IRQ) \
    $(wildcard include/config/INLINE_WRITE_LOCK_IRQ) \
    $(wildcard include/config/INLINE_READ_LOCK_IRQSAVE) \
    $(wildcard include/config/INLINE_WRITE_LOCK_IRQSAVE) \
    $(wildcard include/config/INLINE_READ_TRYLOCK) \
    $(wildcard include/config/INLINE_WRITE_TRYLOCK) \
    $(wildcard include/config/INLINE_READ_UNLOCK) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK) \
    $(wildcard include/config/INLINE_READ_UNLOCK_BH) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK_BH) \
    $(wildcard include/config/INLINE_READ_UNLOCK_IRQ) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK_IRQ) \
    $(wildcard include/config/INLINE_READ_UNLOCK_IRQRESTORE) \
    $(wildcard include/config/INLINE_WRITE_UNLOCK_IRQRESTORE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/syscall_user_dispatch_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mm_types_task.h \
    $(wildcard include/config/ARCH_WANT_BATCHED_UNMAP_TLB_FLUSH) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/tlbbatch.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/netdevice_xmit.h \
    $(wildcard include/config/NET_EGRESS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/task_io_accounting.h \
    $(wildcard include/config/TASK_IO_ACCOUNTING) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/posix-timers_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/rseq.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/seqlock_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kcsan.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rv.h \
    $(wildcard include/config/RV_REACTORS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/livepatch_sched.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/uidgid_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/android_kabi.h \
  arch/arm64/include/generated/asm/kmap_size.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/kmap_size.h \
    $(wildcard include/config/DEBUG_KMAP_LOCAL) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/ext.h \
    $(wildcard include/config/EXT_GROUP_SCHED) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rhashtable-types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mutex.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/debug_locks.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/workqueue_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/clocksource/arm_arch_timer.h \
    $(wildcard include/config/ARM_ARCH_TIMER) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timecounter.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/timex.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/time32.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/time.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/compat.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/compat.h \
    $(wildcard include/config/COMPAT_FOR_U64_ALIGNMENT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/task_stack.h \
    $(wildcard include/config/STACK_GROWSUP) \
    $(wildcard include/config/DEBUG_STACK_USAGE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/magic.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/refcount.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kasan.h \
    $(wildcard include/config/KASAN_STACK) \
    $(wildcard include/config/KASAN_VMALLOC) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/stat.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/uidgid.h \
    $(wildcard include/config/MULTIUSER) \
    $(wildcard include/config/USER_NS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/highuid.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/buildid.h \
    $(wildcard include/config/VMCORE_INFO) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kmod.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/umh.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/gfp.h \
    $(wildcard include/config/HIGHMEM) \
    $(wildcard include/config/ZONE_DMA) \
    $(wildcard include/config/ZONE_DMA32) \
    $(wildcard include/config/ZONE_DEVICE) \
    $(wildcard include/config/CONTIG_ALLOC) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mmzone.h \
    $(wildcard include/config/ARCH_FORCE_MAX_ORDER) \
    $(wildcard include/config/PAGE_BLOCK_ORDER) \
    $(wildcard include/config/MEMORY_ISOLATION) \
    $(wildcard include/config/UNACCEPTED_MEMORY) \
    $(wildcard include/config/IOMMU_SUPPORT) \
    $(wildcard include/config/SWAP) \
    $(wildcard include/config/TRANSPARENT_HUGEPAGE) \
    $(wildcard include/config/LRU_GEN_STATS) \
    $(wildcard include/config/LRU_GEN_WALKS_MMU) \
    $(wildcard include/config/MEMORY_FAILURE) \
    $(wildcard include/config/PAGE_EXTENSION) \
    $(wildcard include/config/DEFERRED_STRUCT_PAGE_INIT) \
    $(wildcard include/config/HAVE_MEMORYLESS_NODES) \
    $(wildcard include/config/SPARSEMEM_EXTREME) \
    $(wildcard include/config/HAVE_ARCH_PFN_VALID) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/list_nulls.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/wait.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/seqlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/nodemask.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/pageblock-flags.h \
    $(wildcard include/config/HUGETLB_PAGE) \
    $(wildcard include/config/HUGETLB_PAGE_SIZE_VARIABLE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/page-flags-layout.h \
  include/generated/bounds.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/sparsemem.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/pgtable-prot.h \
    $(wildcard include/config/HAVE_ARCH_USERFAULTFD_WP) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mm_types.h \
    $(wildcard include/config/HAVE_ALIGNED_STRUCT_PAGE) \
    $(wildcard include/config/HUGETLB_PMD_PAGE_TABLE_SHARING) \
    $(wildcard include/config/SLAB_FREELIST_HARDENED) \
    $(wildcard include/config/USERFAULTFD) \
    $(wildcard include/config/ANON_VMA_NAME) \
    $(wildcard include/config/PER_VMA_LOCK) \
    $(wildcard include/config/HAVE_ARCH_COMPAT_MMAP_BASES) \
    $(wildcard include/config/MEMBARRIER) \
    $(wildcard include/config/AIO) \
    $(wildcard include/config/MMU_NOTIFIER) \
    $(wildcard include/config/SPLIT_PMD_PTLOCKS) \
    $(wildcard include/config/IOMMU_MM_DATA) \
    $(wildcard include/config/KSM) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/auxvec.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/auxvec.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/auxvec.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kref.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rbtree.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rcupdate.h \
    $(wildcard include/config/TINY_RCU) \
    $(wildcard include/config/RCU_STRICT_GRACE_PERIOD) \
    $(wildcard include/config/RCU_LAZY) \
    $(wildcard include/config/TASKS_RCU_GENERIC) \
    $(wildcard include/config/RCU_STALL_COMMON) \
    $(wildcard include/config/KVM_XFER_TO_GUEST_WORK) \
    $(wildcard include/config/RCU_NOCB_CPU) \
    $(wildcard include/config/TASKS_RUDE_RCU) \
    $(wildcard include/config/TREE_RCU) \
    $(wildcard include/config/DEBUG_OBJECTS_RCU_HEAD) \
    $(wildcard include/config/PROVE_RCU) \
    $(wildcard include/config/ARCH_WEAK_RELEASE_ACQUIRE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/context_tracking_irq.h \
    $(wildcard include/config/CONTEXT_TRACKING_IDLE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rcutree.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/maple_tree.h \
    $(wildcard include/config/MAPLE_RCU_DISABLED) \
    $(wildcard include/config/DEBUG_MAPLE_TREE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rwsem.h \
    $(wildcard include/config/RWSEM_SPIN_ON_OWNER) \
    $(wildcard include/config/DEBUG_RWSEMS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/completion.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/swait.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/uprobes.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/uprobes.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/debug-monitors.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/esr.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/probes.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/workqueue.h \
    $(wildcard include/config/DEBUG_OBJECTS_WORK) \
    $(wildcard include/config/FREEZER) \
    $(wildcard include/config/WQ_WATCHDOG) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timer.h \
    $(wildcard include/config/DEBUG_OBJECTS_TIMERS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/ktime.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/jiffies.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/jiffies.h \
  include/generated/timeconst.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/vdso/ktime.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timekeeping.h \
    $(wildcard include/config/GENERIC_CMOS_UPDATE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/clocksource_ids.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/debugobjects.h \
    $(wildcard include/config/DEBUG_OBJECTS) \
    $(wildcard include/config/DEBUG_OBJECTS_FREE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/percpu_counter.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/mmu.h \
    $(wildcard include/config/ARM64_E0PD) \
    $(wildcard include/config/CAVIUM_ERRATUM_27456) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/page-flags.h \
    $(wildcard include/config/PAGE_IDLE_FLAG) \
    $(wildcard include/config/ARCH_USES_PG_ARCH_2) \
    $(wildcard include/config/ARCH_USES_PG_ARCH_3) \
    $(wildcard include/config/HUGETLB_PAGE_OPTIMIZE_VMEMMAP) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/local_lock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/local_lock_internal.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/zswap.h \
    $(wildcard include/config/ZSWAP) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/memory_hotplug.h \
    $(wildcard include/config/ARCH_HAS_ADD_PAGES) \
    $(wildcard include/config/MEMORY_HOTREMOVE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/notifier.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/srcu.h \
    $(wildcard include/config/TINY_SRCU) \
    $(wildcard include/config/NEED_SRCU_NMI_SAFE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rcu_segcblist.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/srcutree.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rcu_node_tree.h \
    $(wildcard include/config/RCU_FANOUT) \
    $(wildcard include/config/RCU_FANOUT_LEAF) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/topology.h \
    $(wildcard include/config/USE_PERCPU_NUMA_NODE_ID) \
    $(wildcard include/config/SCHED_SMT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/arch_topology.h \
    $(wildcard include/config/GENERIC_ARCH_TOPOLOGY) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/topology.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/topology.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sysctl.h \
    $(wildcard include/config/SYSCTL) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/sysctl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/elf.h \
    $(wildcard include/config/ARCH_HAVE_EXTRA_ELF_NOTES) \
    $(wildcard include/config/ARCH_USE_GNU_PROPERTY) \
    $(wildcard include/config/ARCH_HAVE_ELF_PROT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/elf.h \
    $(wildcard include/config/COMPAT_VDSO) \
  arch/arm64/include/generated/asm/user.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/user.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/elf.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/elf-em.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/fs.h \
    $(wildcard include/config/READ_ONLY_THP_FOR_FS) \
    $(wildcard include/config/FS_POSIX_ACL) \
    $(wildcard include/config/CGROUP_WRITEBACK) \
    $(wildcard include/config/IMA) \
    $(wildcard include/config/FILE_LOCKING) \
    $(wildcard include/config/FSNOTIFY) \
    $(wildcard include/config/FS_ENCRYPTION) \
    $(wildcard include/config/FS_VERITY) \
    $(wildcard include/config/EPOLL) \
    $(wildcard include/config/UNICODE) \
    $(wildcard include/config/QUOTA) \
    $(wildcard include/config/FS_DAX) \
    $(wildcard include/config/BLOCK) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/wait_bit.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kdev_t.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/kdev_t.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/dcache.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rculist.h \
    $(wildcard include/config/PROVE_RCU_LIST) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rculist_bl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/list_bl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/bit_spinlock.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/lockref.h \
    $(wildcard include/config/ARCH_USE_CMPXCHG_LOCKREF) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/stringhash.h \
    $(wildcard include/config/DCACHE_WORD_ACCESS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/hash.h \
    $(wildcard include/config/HAVE_ARCH_HASH) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/path.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/list_lru.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/shrinker.h \
    $(wildcard include/config/SHRINKER_DEBUG) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/xarray.h \
    $(wildcard include/config/XARRAY_MULTI) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/mm.h \
    $(wildcard include/config/MMU_LAZY_TLB_REFCOUNT) \
    $(wildcard include/config/ARCH_HAS_MEMBARRIER_CALLBACKS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sync_core.h \
    $(wildcard include/config/ARCH_HAS_SYNC_CORE_BEFORE_USERMODE) \
    $(wildcard include/config/ARCH_HAS_PREPARE_SYNC_CORE_CMD) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/coredump.h \
    $(wildcard include/config/CORE_DUMP_DEFAULT_ELF_HEADERS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/radix-tree.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/pid.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/capability.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/capability.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/semaphore.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/fcntl.h \
    $(wildcard include/config/ARCH_32BIT_OFF_T) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/fcntl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/uapi/asm/fcntl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/asm-generic/fcntl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/openat2.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/migrate_mode.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/percpu-rwsem.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rcuwait.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/signal.h \
    $(wildcard include/config/MTK_AVOID_TRUNCATE_COREDUMP) \
    $(wildcard include/config/SCHED_AUTOGROUP) \
    $(wildcard include/config/BSD_PROCESS_ACCT) \
    $(wildcard include/config/TASKSTATS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/signal.h \
    $(wildcard include/config/DYNAMIC_SIGFRAME) \
    $(wildcard include/config/PROC_FS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/jobctl.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/task.h \
    $(wildcard include/config/GKI_DYNAMIC_TASK_STRUCT_SIZE) \
    $(wildcard include/config/GKI_TASK_STRUCT_VENDOR_SIZE_MAX) \
    $(wildcard include/config/HAVE_EXIT_THREAD) \
    $(wildcard include/config/ARCH_WANTS_DYNAMIC_TASK_STRUCT) \
    $(wildcard include/config/HAVE_ARCH_THREAD_STRUCT_WHITELIST) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/uaccess.h \
    $(wildcard include/config/ARCH_HAS_SUBPAGE_FAULTS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/fault-inject-usercopy.h \
    $(wildcard include/config/FAULT_INJECTION_USERCOPY) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/nospec.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/uaccess.h \
    $(wildcard include/config/CC_HAS_ASM_GOTO_OUTPUT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/kernel-pgtable.h \
    $(wildcard include/config/RELOCATABLE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/asm-extable.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/mte.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/extable.h \
    $(wildcard include/config/BPF_JIT) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/access_ok.h \
    $(wildcard include/config/ALTERNATE_USER_ADDRESS_SPACE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/cred.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/key.h \
    $(wildcard include/config/KEY_NOTIFICATIONS) \
    $(wildcard include/config/NET) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/assoc_array.h \
    $(wildcard include/config/ASSOCIATIVE_ARRAY) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/user.h \
    $(wildcard include/config/VFIO_PCI_ZDEV_KVM) \
    $(wildcard include/config/IOMMUFD) \
    $(wildcard include/config/WATCH_QUEUE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/ratelimit.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/posix-timers.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/alarmtimer.h \
    $(wildcard include/config/RTC_CLASS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/hrtimer.h \
    $(wildcard include/config/HIGH_RES_TIMERS) \
    $(wildcard include/config/TIME_LOW_RES) \
    $(wildcard include/config/TIMERFD) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/hrtimer_defs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/timerqueue.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rcu_sync.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/delayed_call.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/uuid.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/errseq.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/ioprio.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sched/rt.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/iocontext.h \
    $(wildcard include/config/BLK_ICQ) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/ioprio.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/fs_types.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mount.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/mnt_idmapping.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/slab.h \
    $(wildcard include/config/FAILSLAB) \
    $(wildcard include/config/KFENCE) \
    $(wildcard include/config/SLUB_TINY) \
    $(wildcard include/config/SLUB_DEBUG) \
    $(wildcard include/config/SLAB_BUCKETS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/percpu-refcount.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rw_hint.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/fs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/quota.h \
    $(wildcard include/config/QUOTA_NETLINK_INTERFACE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/dqblk_xfs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/dqblk_v1.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/dqblk_v2.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/dqblk_qtree.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/projid.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/uapi/linux/quota.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kobject.h \
    $(wildcard include/config/UEVENT_HELPER) \
    $(wildcard include/config/DEBUG_KOBJECT_RELEASE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/sysfs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kernfs.h \
    $(wildcard include/config/KERNFS) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/idr.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/kobject_ns.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/moduleparam.h \
    $(wildcard include/config/ALPHA) \
    $(wildcard include/config/PPC64) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/rbtree_latch.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/error-injection.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/error-injection.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/tracepoint-defs.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/dynamic_debug.h \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/arch/arm64/include/asm/module.h \
    $(wildcard include/config/DYNAMIC_FTRACE) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/asm-generic/module.h \
    $(wildcard include/config/HAVE_MOD_ARCH_SPECIFIC) \
    $(wildcard include/config/MODULES_USE_ELF_REL) \
    $(wildcard include/config/MODULES_USE_ELF_RELA) \
  /home/skyfox/Crdroid/kernel/xiaomi/mt6895-6.12/include/linux/export-internal.h \
    $(wildcard include/config/PARISC) \

/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o: $(deps_/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o)

$(deps_/home/skyfox/Crdroid/kernel/xiaomi/kernel_modules_xiaomi_mt6895-6.12/drivers/misc/mediatek/mcupm/v3/mcupm_v3.mod.o):
