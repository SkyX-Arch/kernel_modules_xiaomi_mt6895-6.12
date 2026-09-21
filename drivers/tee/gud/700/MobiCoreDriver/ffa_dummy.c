// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2023 MediaTek Inc.
 */

#include "platform.h"
#include "main.h"
#include "ffa.h"
#include "mmu.h"
#include "fastcall.h"
#include "mmu_internal.h"
#include <linux/arm_ffa.h>
#include <linux/interrupt.h>
#include "public/trustonic_ffa_api.h"

int ffa_module_probe(void)
{
	mc_dev_info("%s: dummy", __func__);
	return 0;
}

int ffa_register_notif_handler(irq_handler_t handler)
{
	return 0;
}

int ffa_share_mci_buffer(const void *mci, size_t n_cont_pages, u64 *ffa_handle)
{
	return 0;
}

int ffa_share_trace_buffer(phys_addr_t buffer_phys, u32 size, u64 *ffa_handle)
{
	return 0;
}

int ffa_register_buffer(struct page **pages, struct tee_mmu *mmu, u64 tag)
{
	return 0;
}

int ffa_reclaim_buffer(struct tee_mmu *mmu)
{
	return 0;
}

inline int ffa_fastcall(union fc_common *fc)
{
	return 0;
}

int ffa_register_module(void)
{
	return 0;
}

void ffa_unregister_module(void)
{
}

int tt_ffa_memory_lend(struct ffa_mem_ops_args *args)
{
	return 0;
}
EXPORT_SYMBOL(tt_ffa_memory_lend);

int tt_ffa_memory_reclaim(u64 handle, u64 tag)
{
	return 0;
}
EXPORT_SYMBOL(tt_ffa_memory_reclaim);


/*
 * plato 6.12: the FF-A transport is compiled out here (mcDrvModule links
 * ffa_dummy.o, not ffa.o), but trusted_mem's tmem_ffa.c calls this
 * unconditionally and the real definition only exists in the ffa.c variant
 * (guarded by MTK_ADAPTED). Without a definition the module fails to modpost:
 *   ERROR: modpost: "get_tee_ffa_dev" [tmem_ffa.ko] undefined!
 * No FF-A partition is registered in this configuration, so the honest answer
 * is "none": tmem_ffa.c already treats a NULL device as "no ops" and falls
 * back to its legacy carveout path (IS_ERR_OR_NULL(tmem_ffa_dev) checks).
 */
struct ffa_device *get_tee_ffa_dev(void)
{
	return NULL;
}
EXPORT_SYMBOL(get_tee_ffa_dev);
