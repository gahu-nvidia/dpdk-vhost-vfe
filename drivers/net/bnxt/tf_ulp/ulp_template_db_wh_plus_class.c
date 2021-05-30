/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2014-2021 Broadcom
 * All rights reserved.
 */

/* date: Thu Oct 15 17:28:37 2020 */

#include "ulp_template_db_enum.h"
#include "ulp_template_db_field.h"
#include "ulp_template_struct.h"
#include "ulp_rte_parser.h"

/* Mapper templates for header class list */
struct bnxt_ulp_mapper_tmpl_info ulp_wh_plus_class_tmpl_list[] = {
	/* default-vfr-[port_to_vs]:1 */
	/* class_tid: 1, wh_plus, ingress */
	[1] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 0
	},
	/* default-vfr-[vs_to_port]:2 */
	/* class_tid: 2, wh_plus, egress */
	[2] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 7,
	.start_tbl_idx = 6
	},
	/* default-vfr-[vfrep_to_vf]:3 */
	/* class_tid: 3, wh_plus, egress */
	[3] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 7,
	.start_tbl_idx = 13
	},
	/* default-vfr-[vf_to_vfrep]:4 */
	/* class_tid: 4, wh_plus, egress */
	[4] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 7,
	.start_tbl_idx = 20
	},
	/* default-egr-[loopback_action_rec]:5 */
	/* class_tid: 5, wh_plus, egress */
	[5] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 1,
	.start_tbl_idx = 27
	},
	/* class-ing-em-[eth, (vlan), ipv4]-[smac, dmac, (vid)]:6 */
	/* class_tid: 6, wh_plus, ingress */
	[6] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 28
	},
	/* class-ing-em-[eth, (vlan), ipv6]-[smac, dmac, (vid)]:7 */
	/* class_tid: 7, wh_plus, ingress */
	[7] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 33
	},
	/* class-ing-em-[eth, ipv4, udp]-[sip, dip, sp, dp]:8 */
	/* class_tid: 8, wh_plus, ingress */
	[8] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 38
	},
	/* class-ing-em-[eth, ipv4, tcp]-[sip, dip, sp, dp]:9 */
	/* class_tid: 9, wh_plus, ingress */
	[9] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 44
	},
	/* class-ing-em-[eth,ipv6, udp]-[sip, dip, sp, dp]:10 */
	/* class_tid: 10, wh_plus, ingress */
	[10] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 50
	},
	/* class-ing-em-[eth, ipv6, tcp]-[sip, dip, sp, dp]:11 */
	/* class_tid: 11, wh_plus, ingress */
	[11] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 56
	},
	/* class-ing-em-[eth, (vlan), ipv4, udp]-[dmac, (vid), sip, dip, sp, dp]:12 */
	/* class_tid: 12, wh_plus, ingress */
	[12] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 62
	},
	/* class-ing-em-[eth, (vlan), ipv4, tcp]-[dmac, (vid), sip, dip, sp, dp]:13 */
	/* class_tid: 13, wh_plus, ingress */
	[13] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 67
	},
	/* class-ing-em-[eth, (vlan), ipv6, udp]-[dmac, (vid), sip, dip, sp, dp]:14 */
	/* class_tid: 14, wh_plus, ingress */
	[14] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 72
	},
	/* class-ing-em-[eth, (vlan), ipv6, tcp]-[dmac, (vid), sip, dip, sp, dp]:15 */
	/* class_tid: 15, wh_plus, ingress */
	[15] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 77
	},
	/* class-ing-em-[eth, (vlan), ipv4, udp, vxlan]-[dmac, (vid), dip, dp]:16 */
	/* class_tid: 16, wh_plus, ingress */
	[16] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 82
	},
	/* class-ing-em-[eth, (vlan), ipv6, udp, vxlan]-[t_dmac, (vid), t_dip, t_dp]:17 */
	/* class_tid: 17, wh_plus, ingress */
	[17] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 87
	},
	/* class-ing-em-f1-[eth, ipv4, udp, vxlan]-[t_dmac]:18 */
	/* class_tid: 18, wh_plus, ingress */
	[18] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 92
	},
	/* class-ing-em-f2-[ipv4, udp, vxlan]-[vni, i_dmac]:19 */
	/* class_tid: 19, wh_plus, ingress */
	[19] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 97
	},
	/* class-egr-em-[eth, ipv4, udp]-[sip, dip, sp, dp]:20 */
	/* class_tid: 20, wh_plus, egress */
	[20] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 102
	},
	/* class-egr-em-[eth, ipv4, tcp]-[sip, dip, sp, dp]:21 */
	/* class_tid: 21, wh_plus, egress */
	[21] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 108
	},
	/* class-egr-em-[eth-ipv6-udp]-[sip-dip-sp-dp]:22 */
	/* class_tid: 22, wh_plus, egress */
	[22] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 114
	},
	/* class-egr-em-[eth, ipv6, tcp]-[sip, dip, sp, dp]:23 */
	/* class_tid: 23, wh_plus, egress */
	[23] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 6,
	.start_tbl_idx = 120
	},
	/* class-egr-em-[eth, (vlan), ipv4]-[smac, dmac, type]:24 */
	/* class_tid: 24, wh_plus, egress */
	[24] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 126
	},
	/* class-egr-em-[eth, (vlan), ipv6]-[smac, dmac, type]:25 */
	/* class_tid: 25, wh_plus, egress */
	[25] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 131
	}
};

struct bnxt_ulp_mapper_tbl_info ulp_wh_plus_class_tbl_list[] = {
	{ /* class_tid: 1, wh_plus, table: int_full_act_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.result_start_idx = 0,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR
	},
	{ /* class_tid: 1, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 0,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 26,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 0,
	.ident_nums = 1
	},
	{ /* class_tid: 1, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 27,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 1,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 1, wh_plus, table: parif_def_lkup_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_LKUP_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.result_start_idx = 40,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF,
	},
	{ /* class_tid: 1, wh_plus, table: parif_def_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.result_start_idx = 41,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF
	},
	{ /* class_tid: 1, wh_plus, table: parif_def_err_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_RX,
	.result_start_idx = 42,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_PHY_PORT_PARIF
	},
	{ /* class_tid: 2, wh_plus, table: int_full_act_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.result_start_idx = 43,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR
	},
	{ /* class_tid: 2, wh_plus, table: l2_cntxt_tcam_vfr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.cond_opcode = BNXT_ULP_COND_OPC_COMP_FIELD_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_VFR_MODE,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 14,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 69,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 1,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 2, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.cond_opcode = BNXT_ULP_COND_OPC_COMP_FIELD_NOT_SET,
	.cond_operand = BNXT_ULP_CF_IDX_VFR_MODE,
	.direction = TF_DIR_TX,
	.key_start_idx = 27,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 82,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 1,
	.ident_nums = 1
	},
	{ /* class_tid: 2, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.cond_opcode = BNXT_ULP_COND_OPC_COMP_FIELD_NOT_SET,
	.cond_operand = BNXT_ULP_CF_IDX_VFR_MODE,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 28,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 83,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 2,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 2, wh_plus, table: parif_def_lkup_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_LKUP_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.result_start_idx = 96,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF
	},
	{ /* class_tid: 2, wh_plus, table: parif_def_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.result_start_idx = 97,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF
	},
	{ /* class_tid: 2, wh_plus, table: parif_def_err_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.result_start_idx = 98,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_COMP_FIELD,
	.tbl_operand = BNXT_ULP_CF_IDX_DRV_FUNC_PARIF
	},
	{ /* class_tid: 3, wh_plus, table: egr_int_vtag_encap_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_ACT_ENCAP_8B,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_TX,
	.result_start_idx = 99,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 12,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_ENCAP_PTR_0
	},
	{ /* class_tid: 3, wh_plus, table: egr_int_full_act_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.result_start_idx = 111,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR
	},
	{ /* class_tid: 3, wh_plus, table: egr_l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 41,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 137,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 0,
	.ident_start_idx = 2,
	.ident_nums = 0
	},
	{ /* class_tid: 3, wh_plus, table: egr_l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 42,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 137,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 2,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 3, wh_plus, table: ing_int_full_act_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.result_start_idx = 150,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR
	},
	{ /* class_tid: 3, wh_plus, table: ing_l2_cntxt_dtagged_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 55,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 176,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 2,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 3, wh_plus, table: ing_l2_cntxt_stagged_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 68,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 189,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 2,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 4, wh_plus, table: egr_l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 81,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 202,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 2,
	.ident_nums = 1
	},
	{ /* class_tid: 4, wh_plus, table: egr_l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 82,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 203,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 3,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 4, wh_plus, table: egr_parif_def_lkup_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_LKUP_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.result_start_idx = 216,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = BNXT_ULP_SYM_VF_FUNC_PARIF
	},
	{ /* class_tid: 4, wh_plus, table: egr_parif_def_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_DFLT_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.result_start_idx = 217,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = BNXT_ULP_SYM_VF_FUNC_PARIF
	},
	{ /* class_tid: 4, wh_plus, table: egr_parif_def_err_arec_ptr_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IF_TABLE,
	.resource_type = TF_IF_TBL_TYPE_PROF_PARIF_ERR_ACT_REC_PTR,
	.direction = TF_DIR_TX,
	.result_start_idx = 218,
	.result_bit_size = 32,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.tbl_opcode = BNXT_ULP_IF_TBL_OPC_WR_CONST,
	.tbl_operand = BNXT_ULP_SYM_VF_FUNC_PARIF
	},
	{ /* class_tid: 4, wh_plus, table: ing_int_full_act_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.result_start_idx = 219,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_AND_SET_VFR_FLAG,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR
	},
	{ /* class_tid: 4, wh_plus, table: ing_l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 95,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 245,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 3,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 5, wh_plus, table: int_full_act_record_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_FULL_ACT_RECORD,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_VFR_CFA_ACTION,
	.direction = TF_DIR_TX,
	.result_start_idx = 258,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_GLB_REGFILE,
	.tbl_operand = BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* class_tid: 6, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 108,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 284,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 3,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 6, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 121,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 297,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 4,
	.ident_nums = 1
	},
	{ /* class_tid: 6, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 1,
	.key_start_idx = 124,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 298,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 5,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 6, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 167,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 306,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 5,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 6, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 178,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 315,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 5,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 7, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 189,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 324,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 5,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 7, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 202,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 337,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 6,
	.ident_nums = 1
	},
	{ /* class_tid: 7, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 1,
	.key_start_idx = 205,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 338,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 7,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 7, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 248,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 346,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 7,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 7, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 259,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 355,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 7,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 8, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 270,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 364,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 7,
	.ident_nums = 1
	},
	{ /* class_tid: 8, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 271,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 365,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 8,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 8, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 284,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 378,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 8,
	.ident_nums = 1
	},
	{ /* class_tid: 8, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 287,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 379,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 9,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 8, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 330,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 387,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 9,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 8, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 341,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 396,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 9,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 9, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 352,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 405,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 9,
	.ident_nums = 1
	},
	{ /* class_tid: 9, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 353,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 406,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 10,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 9, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 366,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 419,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 10,
	.ident_nums = 1
	},
	{ /* class_tid: 9, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 369,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 420,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 11,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 9, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 412,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 428,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 11,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 9, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 423,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 437,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 11,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 10, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 434,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 446,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 11,
	.ident_nums = 1
	},
	{ /* class_tid: 10, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 435,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 447,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 12,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 10, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 448,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 460,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 12,
	.ident_nums = 1
	},
	{ /* class_tid: 10, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 451,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 461,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 13,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 10, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 494,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 469,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 13,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 10, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 505,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 478,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 13,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 11, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 516,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 487,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 13,
	.ident_nums = 1
	},
	{ /* class_tid: 11, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 517,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 488,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 14,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 11, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 530,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 501,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 14,
	.ident_nums = 1
	},
	{ /* class_tid: 11, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 533,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 502,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 15,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 11, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 576,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 510,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 15,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 11, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 587,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 519,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 15,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 12, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 598,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 528,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 15,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 12, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 611,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 541,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 16,
	.ident_nums = 1
	},
	{ /* class_tid: 12, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 614,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 542,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 17,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 12, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 657,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 550,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 17,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 12, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 668,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 559,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 17,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 13, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 679,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 568,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 17,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 13, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 692,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 581,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 18,
	.ident_nums = 1
	},
	{ /* class_tid: 13, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 695,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 582,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 19,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 13, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 738,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 590,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 19,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 13, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 749,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 599,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 19,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 14, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 760,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 608,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 19,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 14, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 773,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 621,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 20,
	.ident_nums = 1
	},
	{ /* class_tid: 14, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 776,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 622,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 21,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 14, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 819,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 630,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 21,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 14, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 830,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 639,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 21,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 15, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 841,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 648,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 21,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 15, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 854,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 661,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 22,
	.ident_nums = 1
	},
	{ /* class_tid: 15, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 857,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 662,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 23,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 15, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 900,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 670,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 23,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 15, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 911,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 679,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 23,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 16, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 922,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 688,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 23,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 16, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 935,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 701,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 24,
	.ident_nums = 1
	},
	{ /* class_tid: 16, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 938,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 702,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 25,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 16, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 981,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 710,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 25,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 16, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 992,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 719,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 25,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 17, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1003,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 728,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 25,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 17, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 1016,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 741,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 26,
	.ident_nums = 1
	},
	{ /* class_tid: 17, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1019,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 742,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 27,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 17, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 1062,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 750,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 27,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 17, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 1073,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 759,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 27,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 18, wh_plus, table: int_flow_counter_tbl_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_ACT_STATS_64,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_INT_COUNT_ACC,
	.cond_opcode = BNXT_ULP_COND_OPC_ACTION_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACTION_BIT_COUNT,
	.direction = TF_DIR_RX,
	.result_start_idx = 768,
	.result_bit_size = 64,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_FLOW_CNTR_PTR_0
	},
	{ /* class_tid: 18, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1084,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 769,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 27,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 18, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 1097,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 782,
	.result_bit_size = 20,
	.result_num_fields = 2,
	.encap_num_fields = 0,
	.ident_start_idx = 28,
	.ident_nums = 2
	},
	{ /* class_tid: 18, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1100,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 784,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 30,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 18, wh_plus, table: wm_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_WC_TCAM,
	.direction = TF_DIR_RX,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1143,
	.blob_key_bit_size = 192,
	.key_bit_size = 160,
	.key_num_fields = 5,
	.result_start_idx = 792,
	.result_bit_size = 19,
	.result_num_fields = 3,
	.encap_num_fields = 0,
	.ident_start_idx = 30,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 19, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1148,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 795,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 30,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 19, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_RX,
	.key_start_idx = 1161,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 808,
	.result_bit_size = 20,
	.result_num_fields = 2,
	.encap_num_fields = 0,
	.ident_start_idx = 31,
	.ident_nums = 2
	},
	{ /* class_tid: 19, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_RX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1164,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 810,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 33,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 19, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_RX,
	.key_start_idx = 1207,
	.blob_key_bit_size = 112,
	.key_bit_size = 112,
	.key_num_fields = 8,
	.result_start_idx = 818,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 33,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 19, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_RX,
	.key_start_idx = 1215,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 8,
	.result_start_idx = 827,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 33,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 20, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1223,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 836,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 33,
	.ident_nums = 1
	},
	{ /* class_tid: 20, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1224,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 837,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 34,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 20, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1237,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 850,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 34,
	.ident_nums = 1
	},
	{ /* class_tid: 20, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1240,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 851,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 35,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 20, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1283,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 859,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 35,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 20, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1294,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 868,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 35,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 21, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1305,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 877,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 35,
	.ident_nums = 1
	},
	{ /* class_tid: 21, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1306,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 878,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 36,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 21, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1319,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 891,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 36,
	.ident_nums = 1
	},
	{ /* class_tid: 21, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1322,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 892,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 37,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 21, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1365,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 900,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 37,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 21, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1376,
	.blob_key_bit_size = 200,
	.key_bit_size = 200,
	.key_num_fields = 11,
	.result_start_idx = 909,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 37,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 22, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1387,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 918,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 37,
	.ident_nums = 1
	},
	{ /* class_tid: 22, wh_plus, table: l2_cntxt_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1388,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 919,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 38,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 22, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1401,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 932,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 38,
	.ident_nums = 1
	},
	{ /* class_tid: 22, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1404,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 933,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 39,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 22, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1447,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 941,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 39,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 22, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1458,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 950,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 39,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 23, wh_plus, table: l2_cntxt_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1469,
	.blob_key_bit_size = 8,
	.key_bit_size = 8,
	.key_num_fields = 1,
	.result_start_idx = 959,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 39,
	.ident_nums = 1
	},
	{ /* class_tid: 23, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_LOW,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1470,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 960,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 40,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 23, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1483,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 973,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 40,
	.ident_nums = 1
	},
	{ /* class_tid: 23, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1486,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 974,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 41,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 23, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1529,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 982,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 41,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 23, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1540,
	.blob_key_bit_size = 392,
	.key_bit_size = 392,
	.key_num_fields = 11,
	.result_start_idx = 991,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 41,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_PUSH_IF_MARK_ACTION,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 24, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1551,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 1000,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 41,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 24, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1564,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 1013,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 42,
	.ident_nums = 1
	},
	{ /* class_tid: 24, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1567,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 1014,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 43,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 24, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1610,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 7,
	.result_start_idx = 1022,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 43,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 24, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1617,
	.blob_key_bit_size = 104,
	.key_bit_size = 104,
	.key_num_fields = 7,
	.result_start_idx = 1031,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 43,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 25, wh_plus, table: l2_cntxt_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM_HIGH,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_SRCH_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1624,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 1040,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.encap_num_fields = 0,
	.ident_start_idx = 43,
	.ident_nums = 1,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 25, wh_plus, table: profile_tcam_cache_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INVALID,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_PROFILE_TCAM,
	.direction = TF_DIR_TX,
	.key_start_idx = 1637,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 1053,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.encap_num_fields = 0,
	.ident_start_idx = 44,
	.ident_nums = 1
	},
	{ /* class_tid: 25, wh_plus, table: profile_tcam_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.direction = TF_DIR_TX,
	.tbl_opcode = BNXT_ULP_TCAM_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_REGFILE_INDEX_PROFILE_TCAM_INDEX_0,
	.pri_opcode = BNXT_ULP_PRI_OPC_CONST,
	.pri_operand = 0,
	.key_start_idx = 1640,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 43,
	.result_start_idx = 1054,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.encap_num_fields = 0,
	.ident_start_idx = 45,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_NO
	},
	{ /* class_tid: 25, wh_plus, table: ext_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EXT_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_EXT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1683,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 7,
	.result_start_idx = 1062,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 45,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	},
	{ /* class_tid: 25, wh_plus, table: int_em_0 */
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INT_EM_TABLE,
	.resource_type = TF_MEM_INTERNAL,
	.mem_type_opcode = BNXT_ULP_MEM_TYPE_OPC_EXECUTE_IF_INT,
	.direction = TF_DIR_TX,
	.key_start_idx = 1690,
	.blob_key_bit_size = 104,
	.key_bit_size = 104,
	.key_num_fields = 7,
	.result_start_idx = 1071,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.encap_num_fields = 0,
	.ident_start_idx = 45,
	.ident_nums = 0,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.critical_resource = BNXT_ULP_CRITICAL_RESOURCE_YES
	}
};

struct bnxt_ulp_mapper_key_field_info ulp_wh_plus_class_key_field_list[] = {
	/* class_tid: 1, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam_vfr_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 3, wh_plus, table: egr_l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 3, wh_plus, table: egr_l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 3, wh_plus, table: ing_l2_cntxt_dtagged_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 3, wh_plus, table: ing_l2_cntxt_stagged_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: egr_l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: egr_l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: ing_l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_VF_FUNC_SVIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_SVIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF6_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF6_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF6_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF6_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF6_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF6_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF6_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF6_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF6_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF7_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF7_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF7_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF7_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF7_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF7_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF7_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF7_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF7_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF8_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF8_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF8_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF9_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF9_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF9_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF10_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF10_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF10_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF11_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF11_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF11_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF12_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF12_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF12_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF12_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF12_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF13_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF13_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF13_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF13_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF13_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF14_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF14_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF14_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF14_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF14_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF15_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF15_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF15_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF15_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF15_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF16_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF16_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF16_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF16_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF16_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "t_ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF16_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "t_ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "t_ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF16_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF16_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "t_ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "t_l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF17_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF17_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF17_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF17_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF17_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF17_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF17_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF17_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 18, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF18_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF18_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF18_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF18_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF18_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF18_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 18, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 18, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 18, wh_plus, table: wm_0 */
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "spare",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "others",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 19, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF19_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF19_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF19_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 19, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 19, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TL2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 19, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_inner_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_dst_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF19_IDX_I_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_I_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF19_IDX_T_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_T_VXLAN_VNI & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 19, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 339,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_inner_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_dst_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF19_IDX_I_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_I_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF19_IDX_T_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_HF19_IDX_T_VXLAN_VNI & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF20_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF20_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF20_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF21_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_dst_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF21_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF21_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: l2_cntxt_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF22_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF22_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF22_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF23_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_tl2_dst",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L4_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 59,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_dst_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_TCP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_TCP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l4_src_port",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_TCP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_TCP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ip_proto",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_IP_PROTO_TCP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_dst_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_IPV6_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_IPV6_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ipv6_src_addr",
	.field_bit_size = 128,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF23_IDX_O_IPV6_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF23_IDX_O_IPV6_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_src_mac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_id",
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF24_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF24_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF24_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF24_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF24_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF24_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 351,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_eth_type",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_inner_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF24_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_eth_type",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_inner_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF24_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF24_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF25_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF25_IDX_OO_VLAN_VID >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_OO_VLAN_VID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac0_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF25_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF25_IDX_O_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_O_ETH_SMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "svif",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {
		(BNXT_ULP_HF25_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF25_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sparif",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ivlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_ovlan_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mac1_l2_addr",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tl2_num_vtags",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "recycle",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "class_tid",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: profile_tcam_0 */
	{
	.description = "l4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_TYPE_IPV6,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L3_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {
		BNXT_ULP_SYM_L2_HDR_VALID_YES,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "tun_hdr_flags",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tun_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_is_udp_tcp",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl4_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_dst",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ipv6_cmp_src",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_isIP",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_type",
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_two_vtags",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_vtag_present",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_uc_mc_bc",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_type",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl2_hdr_valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hrec_next",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "agg_error",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "recycle_cnt",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_0",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pkt_type_1",
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: ext_em_0 */
	{
	.description = "spare",
	.field_bit_size = 351,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_eth_type",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_inner_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF25_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: int_em_0 */
	{
	.description = "spare",
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "local_cos",
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_eth_type",
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_inner_vid",
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {
		(BNXT_ULP_HF25_IDX_O_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_HF25_IDX_O_ETH_DMAC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO,
	.spec_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.spec_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	}
};

struct bnxt_ulp_mapper_result_field_info ulp_wh_plus_class_result_field_list[] = {
	/* class_tid: 1, wh_plus, table: int_full_act_record_0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_VNIC >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_VNIC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 1, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 1, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 1, wh_plus, table: parif_def_lkup_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 1, wh_plus, table: parif_def_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 1, wh_plus, table: parif_def_err_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: int_full_act_record_0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_VPORT >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_VPORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam_vfr_0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 2, wh_plus, table: parif_def_lkup_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: parif_def_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 2, wh_plus, table: parif_def_err_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 3, wh_plus, table: egr_int_vtag_encap_record_0 */
	{
	.description = "ecv_tun_type",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ecv_l4_type",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ecv_l3_type",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ecv_l2_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ecv_vtag_type",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		BNXT_ULP_SYM_ECV_VTAG_TYPE_ADD_1_ENCAP_PRI,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ecv_custom_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "ecv_valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "vtag_tpid",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x81, 0x00}
	},
	{
	.description = "vtag_vid",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "vtag_de",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vtag_pcp",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "spare",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 3, wh_plus, table: egr_int_full_act_record_0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_ENCAP_PTR_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_ENCAP_PTR_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(BNXT_ULP_SYM_WH_PLUS_LOOPBACK_PORT >> 8) & 0xff,
		BNXT_ULP_SYM_WH_PLUS_LOOPBACK_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 3, wh_plus, table: egr_l2_cntxt_cache_0 */
	/* class_tid: 3, wh_plus, table: egr_l2_cntxt_tcam_0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 3, wh_plus, table: ing_int_full_act_record_0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_VF_FUNC_VNIC >> 8) & 0xff,
		BNXT_ULP_CF_IDX_VF_FUNC_VNIC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 3, wh_plus, table: ing_l2_cntxt_dtagged_0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 3, wh_plus, table: ing_l2_cntxt_stagged_0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 4, wh_plus, table: egr_l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: egr_l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		BNXT_ULP_SYM_VF_FUNC_PARIF,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 4, wh_plus, table: egr_parif_def_lkup_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: egr_parif_def_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: egr_parif_def_err_arec_ptr_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 32,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_LB_AREC_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 4, wh_plus, table: ing_int_full_act_record_0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_VNIC >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_VNIC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 4, wh_plus, table: ing_l2_cntxt_tcam_0 */
	{
	.description = "act_record_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 5, wh_plus, table: int_full_act_record_0 */
	{
	.description = "flow_cntr_ptr",
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "age_enable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "agg_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "rate_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "flow_cntr_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_key",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_mir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcpflags_match",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "dst_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_dst_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "src_ip_ptr",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tcp_src_port",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_rdir",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "l3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tl3_ttl_dec",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(BNXT_ULP_SYM_WH_PLUS_LOOPBACK_PORT >> 8) & 0xff,
		BNXT_ULP_SYM_WH_PLUS_LOOPBACK_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pop_vlan",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "meter",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "hit",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "type",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 6, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0005 >> 8) & 0xff,
		0x0005 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 6, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 6, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 7, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0005 >> 8) & 0xff,
		0x0005 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 7, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 7, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 8, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 8, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 8, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 9, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 9, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 9, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 10, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 10, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 10, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 11, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 11, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 11, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 12, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 12, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 12, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 13, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 13, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 13, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 14, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 14, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 14, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 15, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 15, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 15, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 16, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0031 >> 8) & 0xff,
		0x0031 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x14, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 16, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 16, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 17, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0031 >> 8) & 0xff,
		0x0031 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 17, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 17, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 18, wh_plus, table: int_flow_counter_tbl_0 */
	{
	.description = "count",
	.field_bit_size = 64,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 18, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 18, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 18, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x001b >> 8) & 0xff,
		0x001b & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 18, wh_plus, table: wm_0 */
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 19, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_VXLAN_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_COMP_FIELD,
	.result_operand = {
		(BNXT_ULP_CF_IDX_PHY_PORT_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_PHY_PORT_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 19, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 19, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 19, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x006d >> 8) & 0xff,
		0x006d & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 19, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x006d >> 8) & 0xff,
		0x006d & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_IF_COMP_FIELD_THEN_CF_ELSE_CF,
	.result_operand = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_true = {
		(BNXT_ULP_CF_IDX_LOOPBACK_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_LOOPBACK_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_false = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 20, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 20, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 20, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_IF_COMP_FIELD_THEN_CF_ELSE_CF,
	.result_operand = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_true = {
		(BNXT_ULP_CF_IDX_LOOPBACK_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_LOOPBACK_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_false = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 21, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 21, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 21, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: l2_cntxt_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_IF_COMP_FIELD_THEN_CF_ELSE_CF,
	.result_operand = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_true = {
		(BNXT_ULP_CF_IDX_LOOPBACK_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_LOOPBACK_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_false = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 22, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 22, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 22, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_IF_COMP_FIELD_THEN_CF_ELSE_CF,
	.result_operand = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_true = {
		(BNXT_ULP_CF_IDX_LOOPBACK_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_LOOPBACK_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_false = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 23, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x19, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 23, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 23, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0185 >> 8) & 0xff,
		0x0185 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_IF_COMP_FIELD_THEN_CF_ELSE_CF,
	.result_operand = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_true = {
		(BNXT_ULP_CF_IDX_LOOPBACK_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_LOOPBACK_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_false = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 24, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0003 >> 8) & 0xff,
		0x0003 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 24, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0061 >> 8) & 0xff,
		0x0061 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 24, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0061 >> 8) & 0xff,
		0x0061 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "prof_func_id",
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_L2_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l2_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "parif",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_IF_COMP_FIELD_THEN_CF_ELSE_CF,
	.result_operand = {
		(BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP >> 8) & 0xff,
		BNXT_ULP_CF_IDX_MATCH_PORT_IS_VFREP & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_true = {
		(BNXT_ULP_CF_IDX_LOOPBACK_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_LOOPBACK_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.result_operand_false = {
		(BNXT_ULP_CF_IDX_DRV_FUNC_PARIF >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DRV_FUNC_PARIF & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "allowed_pri",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_pri",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "allowed_tpid",
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "default_tpid",
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "bd_act_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_SP_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "byp_sp_lkup",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pri_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "tpid_anti_spoof_ctl",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 25, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: profile_tcam_0 */
	{
	.description = "wc_key_id",
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "wc_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "em_key_mask",
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0003 >> 8) & 0xff,
		0x0003 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_key_id",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_profile_id",
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "em_search_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "pl_byp_lkup_en",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	/* class_tid: 25, wh_plus, table: ext_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0061 >> 8) & 0xff,
		0x0061 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	/* class_tid: 25, wh_plus, table: int_em_0 */
	{
	.description = "act_rec_ptr",
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_REGFILE,
	.result_operand = {
		(BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_MAIN_ACTION_PTR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "ext_flow_ctr",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "act_rec_int",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "act_rec_size",
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "key_size",
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {
		(0x0061 >> 8) & 0xff,
		0x0061 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "reserved",
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "strength",
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.description = "l1_cacheable",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_ZERO
	},
	{
	.description = "valid",
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_MAPPER_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	}
};

struct bnxt_ulp_mapper_ident_info ulp_wh_plus_class_ident_list[] = {
	/* class_tid: 1, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 2, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 4, wh_plus, table: egr_l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 6, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 6, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 7, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 7, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 8, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 8, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 9, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 9, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 10, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 10, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 11, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 11, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 12, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 12, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 13, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 13, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 14, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 14, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 15, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 15, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 16, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 16, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 17, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 17, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 18, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 18, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 19, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 19, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_WC_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 20, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 20, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 21, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 21, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 22, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 22, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 23, wh_plus, table: l2_cntxt_cache_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 23, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 24, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 24, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 25, wh_plus, table: l2_cntxt_tcam_0 */
	{
	.description = "l2_cntxt_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT_HIGH,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	/* class_tid: 25, wh_plus, table: profile_tcam_cache_0 */
	{
	.description = "em_profile_id",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	}
};
