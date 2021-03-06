/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef OCRDMA_ABI_USER_H
#define OCRDMA_ABI_USER_H
#include <linux/types.h>
#define OCRDMA_ABI_VERSION 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OCRDMA_BE_ROCE_ABI_VERSION 1
struct ocrdma_alloc_ucontext_resp {
  __u32 dev_id;
  __u32 wqe_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 max_inline_data;
  __u32 dpp_wqe_size;
  __u64 ah_tbl_page;
  __u32 ah_tbl_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rqe_size;
  __u8 fw_ver[32];
  __u64 rsvd1;
  __u64 rsvd2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ocrdma_alloc_pd_ureq {
  __u64 rsvd1;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ocrdma_alloc_pd_uresp {
  __u32 id;
  __u32 dpp_enabled;
  __u32 dpp_page_addr_hi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 dpp_page_addr_lo;
  __u64 rsvd1;
};
struct ocrdma_create_cq_ureq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 dpp_cq;
  __u32 rsvd;
};
#define MAX_CQ_PAGES 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ocrdma_create_cq_uresp {
  __u32 cq_id;
  __u32 page_size;
  __u32 num_pages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 max_hw_cqe;
  __u64 page_addr[MAX_CQ_PAGES];
  __u64 db_page_addr;
  __u32 db_page_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 phase_change;
  __u64 rsvd1;
  __u64 rsvd2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAX_QP_PAGES 8
#define MAX_UD_AV_PAGES 8
struct ocrdma_create_qp_ureq {
  __u8 enable_dpp_cq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 rsvd;
  __u16 dpp_cq_id;
  __u32 rsvd1;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ocrdma_create_qp_uresp {
  __u16 qp_id;
  __u16 sq_dbid;
  __u16 rq_dbid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 resv0;
  __u32 sq_page_size;
  __u32 rq_page_size;
  __u32 num_sq_pages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 num_rq_pages;
  __u64 sq_page_addr[MAX_QP_PAGES];
  __u64 rq_page_addr[MAX_QP_PAGES];
  __u64 db_page_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 db_page_size;
  __u32 dpp_credit;
  __u32 dpp_offset;
  __u32 num_wqe_allocated;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 num_rqe_allocated;
  __u32 db_sq_offset;
  __u32 db_rq_offset;
  __u32 db_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 rsvd[11];
} __packed;
struct ocrdma_create_srq_uresp {
  __u16 rq_dbid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 resv0;
  __u32 resv1;
  __u32 rq_page_size;
  __u32 num_rq_pages;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 rq_page_addr[MAX_QP_PAGES];
  __u64 db_page_addr;
  __u32 db_page_size;
  __u32 num_rqe_allocated;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 db_rq_offset;
  __u32 db_shift;
  __u64 rsvd2;
  __u64 rsvd3;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
