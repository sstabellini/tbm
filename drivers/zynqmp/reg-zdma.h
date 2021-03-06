#ifndef _ZDMA_H_
#define _ZDMA_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * ZDMA Base Address
 */
#define ZDMA_BASEADDR      0X00000000

/**
 * Register: ZDMA_ZDMA_ERR_CTRL
 */
#define ZDMA_ZDMA_ERR_CTRL    ( ( ZDMA_BASEADDR ) + 0X00000000 )

#define ZDMA_ZDMA_ERR_CTRL_APB_ERR_RES_SHIFT   0
#define ZDMA_ZDMA_ERR_CTRL_APB_ERR_RES_WIDTH   1
#define ZDMA_ZDMA_ERR_CTRL_APB_ERR_RES_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_ECO
 */
#define ZDMA_ZDMA_CH_ECO    ( ( ZDMA_BASEADDR ) + 0X00000004 )

#define ZDMA_ZDMA_CH_ECO_VAL_SHIFT   0
#define ZDMA_ZDMA_CH_ECO_VAL_WIDTH   32
#define ZDMA_ZDMA_CH_ECO_VAL_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_ISR
 */
#define ZDMA_ZDMA_CH_ISR    ( ( ZDMA_BASEADDR ) + 0X00000100 )

#define ZDMA_ZDMA_CH_ISR_AXI_WR_DATA_SHIFT   9
#define ZDMA_ZDMA_CH_ISR_AXI_WR_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_AXI_WR_DATA_MASK    0X00000200

#define ZDMA_ZDMA_CH_ISR_AXI_RD_DATA_SHIFT   8
#define ZDMA_ZDMA_CH_ISR_AXI_RD_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_AXI_RD_DATA_MASK    0X00000100

#define ZDMA_ZDMA_CH_ISR_AXI_RD_DST_DSCR_SHIFT   7
#define ZDMA_ZDMA_CH_ISR_AXI_RD_DST_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_AXI_RD_DST_DSCR_MASK    0X00000080

#define ZDMA_ZDMA_CH_ISR_AXI_RD_SRC_DSCR_SHIFT   6
#define ZDMA_ZDMA_CH_ISR_AXI_RD_SRC_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_AXI_RD_SRC_DSCR_MASK    0X00000040

#define ZDMA_ZDMA_CH_ISR_IRQ_DST_ACCT_ERR_SHIFT   5
#define ZDMA_ZDMA_CH_ISR_IRQ_DST_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_IRQ_DST_ACCT_ERR_MASK    0X00000020

#define ZDMA_ZDMA_CH_ISR_IRQ_SRC_ACCT_ERR_SHIFT   4
#define ZDMA_ZDMA_CH_ISR_IRQ_SRC_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_IRQ_SRC_ACCT_ERR_MASK    0X00000010

#define ZDMA_ZDMA_CH_ISR_BYTE_CNT_OVRFL_SHIFT   3
#define ZDMA_ZDMA_CH_ISR_BYTE_CNT_OVRFL_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_BYTE_CNT_OVRFL_MASK    0X00000008

#define ZDMA_ZDMA_CH_ISR_DST_DSCR_DONE_SHIFT   2
#define ZDMA_ZDMA_CH_ISR_DST_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_DST_DSCR_DONE_MASK    0X00000004

#define ZDMA_ZDMA_CH_ISR_SRC_DSCR_DONE_SHIFT   1
#define ZDMA_ZDMA_CH_ISR_SRC_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_SRC_DSCR_DONE_MASK    0X00000002

#define ZDMA_ZDMA_CH_ISR_INV_APB_SHIFT   0
#define ZDMA_ZDMA_CH_ISR_INV_APB_WIDTH   1
#define ZDMA_ZDMA_CH_ISR_INV_APB_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_IMR
 */
#define ZDMA_ZDMA_CH_IMR    ( ( ZDMA_BASEADDR ) + 0X00000104 )

#define ZDMA_ZDMA_CH_IMR_AXI_WR_DATA_SHIFT   9
#define ZDMA_ZDMA_CH_IMR_AXI_WR_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_AXI_WR_DATA_MASK    0X00000200

#define ZDMA_ZDMA_CH_IMR_AXI_RD_DATA_SHIFT   8
#define ZDMA_ZDMA_CH_IMR_AXI_RD_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_AXI_RD_DATA_MASK    0X00000100

#define ZDMA_ZDMA_CH_IMR_AXI_RD_DST_DSCR_SHIFT   7
#define ZDMA_ZDMA_CH_IMR_AXI_RD_DST_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_AXI_RD_DST_DSCR_MASK    0X00000080

#define ZDMA_ZDMA_CH_IMR_AXI_RD_SRC_DSCR_SHIFT   6
#define ZDMA_ZDMA_CH_IMR_AXI_RD_SRC_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_AXI_RD_SRC_DSCR_MASK    0X00000040

#define ZDMA_ZDMA_CH_IMR_IRQ_DST_ACCT_ERR_SHIFT   5
#define ZDMA_ZDMA_CH_IMR_IRQ_DST_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_IRQ_DST_ACCT_ERR_MASK    0X00000020

#define ZDMA_ZDMA_CH_IMR_IRQ_SRC_ACCT_ERR_SHIFT   4
#define ZDMA_ZDMA_CH_IMR_IRQ_SRC_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_IRQ_SRC_ACCT_ERR_MASK    0X00000010

#define ZDMA_ZDMA_CH_IMR_BYTE_CNT_OVRFL_SHIFT   3
#define ZDMA_ZDMA_CH_IMR_BYTE_CNT_OVRFL_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_BYTE_CNT_OVRFL_MASK    0X00000008

#define ZDMA_ZDMA_CH_IMR_DST_DSCR_DONE_SHIFT   2
#define ZDMA_ZDMA_CH_IMR_DST_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_DST_DSCR_DONE_MASK    0X00000004

#define ZDMA_ZDMA_CH_IMR_SRC_DSCR_DONE_SHIFT   1
#define ZDMA_ZDMA_CH_IMR_SRC_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_SRC_DSCR_DONE_MASK    0X00000002

#define ZDMA_ZDMA_CH_IMR_INV_APB_SHIFT   0
#define ZDMA_ZDMA_CH_IMR_INV_APB_WIDTH   1
#define ZDMA_ZDMA_CH_IMR_INV_APB_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_IEN
 */
#define ZDMA_ZDMA_CH_IEN    ( ( ZDMA_BASEADDR ) + 0X00000108 )

#define ZDMA_ZDMA_CH_IEN_AXI_WR_DATA_SHIFT   9
#define ZDMA_ZDMA_CH_IEN_AXI_WR_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_AXI_WR_DATA_MASK    0X00000200

#define ZDMA_ZDMA_CH_IEN_AXI_RD_DATA_SHIFT   8
#define ZDMA_ZDMA_CH_IEN_AXI_RD_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_AXI_RD_DATA_MASK    0X00000100

#define ZDMA_ZDMA_CH_IEN_AXI_RD_DST_DSCR_SHIFT   7
#define ZDMA_ZDMA_CH_IEN_AXI_RD_DST_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_AXI_RD_DST_DSCR_MASK    0X00000080

#define ZDMA_ZDMA_CH_IEN_AXI_RD_SRC_DSCR_SHIFT   6
#define ZDMA_ZDMA_CH_IEN_AXI_RD_SRC_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_AXI_RD_SRC_DSCR_MASK    0X00000040

#define ZDMA_ZDMA_CH_IEN_IRQ_DST_ACCT_ERR_SHIFT   5
#define ZDMA_ZDMA_CH_IEN_IRQ_DST_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_IRQ_DST_ACCT_ERR_MASK    0X00000020

#define ZDMA_ZDMA_CH_IEN_IRQ_SRC_ACCT_ERR_SHIFT   4
#define ZDMA_ZDMA_CH_IEN_IRQ_SRC_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_IRQ_SRC_ACCT_ERR_MASK    0X00000010

#define ZDMA_ZDMA_CH_IEN_BYTE_CNT_OVRFL_SHIFT   3
#define ZDMA_ZDMA_CH_IEN_BYTE_CNT_OVRFL_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_BYTE_CNT_OVRFL_MASK    0X00000008

#define ZDMA_ZDMA_CH_IEN_DST_DSCR_DONE_SHIFT   2
#define ZDMA_ZDMA_CH_IEN_DST_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_DST_DSCR_DONE_MASK    0X00000004

#define ZDMA_ZDMA_CH_IEN_SRC_DSCR_DONE_SHIFT   1
#define ZDMA_ZDMA_CH_IEN_SRC_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_SRC_DSCR_DONE_MASK    0X00000002

#define ZDMA_ZDMA_CH_IEN_INV_APB_SHIFT   0
#define ZDMA_ZDMA_CH_IEN_INV_APB_WIDTH   1
#define ZDMA_ZDMA_CH_IEN_INV_APB_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_IDS
 */
#define ZDMA_ZDMA_CH_IDS    ( ( ZDMA_BASEADDR ) + 0X0000010C )

#define ZDMA_ZDMA_CH_IDS_AXI_WR_DATA_SHIFT   9
#define ZDMA_ZDMA_CH_IDS_AXI_WR_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_AXI_WR_DATA_MASK    0X00000200

#define ZDMA_ZDMA_CH_IDS_AXI_RD_DATA_SHIFT   8
#define ZDMA_ZDMA_CH_IDS_AXI_RD_DATA_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_AXI_RD_DATA_MASK    0X00000100

#define ZDMA_ZDMA_CH_IDS_AXI_RD_DST_DSCR_SHIFT   7
#define ZDMA_ZDMA_CH_IDS_AXI_RD_DST_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_AXI_RD_DST_DSCR_MASK    0X00000080

#define ZDMA_ZDMA_CH_IDS_AXI_RD_SRC_DSCR_SHIFT   6
#define ZDMA_ZDMA_CH_IDS_AXI_RD_SRC_DSCR_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_AXI_RD_SRC_DSCR_MASK    0X00000040

#define ZDMA_ZDMA_CH_IDS_IRQ_DST_ACCT_ERR_SHIFT   5
#define ZDMA_ZDMA_CH_IDS_IRQ_DST_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_IRQ_DST_ACCT_ERR_MASK    0X00000020

#define ZDMA_ZDMA_CH_IDS_IRQ_SRC_ACCT_ERR_SHIFT   4
#define ZDMA_ZDMA_CH_IDS_IRQ_SRC_ACCT_ERR_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_IRQ_SRC_ACCT_ERR_MASK    0X00000010

#define ZDMA_ZDMA_CH_IDS_BYTE_CNT_OVRFL_SHIFT   3
#define ZDMA_ZDMA_CH_IDS_BYTE_CNT_OVRFL_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_BYTE_CNT_OVRFL_MASK    0X00000008

#define ZDMA_ZDMA_CH_IDS_DST_DSCR_DONE_SHIFT   2
#define ZDMA_ZDMA_CH_IDS_DST_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_DST_DSCR_DONE_MASK    0X00000004

#define ZDMA_ZDMA_CH_IDS_SRC_DSCR_DONE_SHIFT   1
#define ZDMA_ZDMA_CH_IDS_SRC_DSCR_DONE_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_SRC_DSCR_DONE_MASK    0X00000002

#define ZDMA_ZDMA_CH_IDS_INV_APB_SHIFT   0
#define ZDMA_ZDMA_CH_IDS_INV_APB_WIDTH   1
#define ZDMA_ZDMA_CH_IDS_INV_APB_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_CTRL0
 */
#define ZDMA_ZDMA_CH_CTRL0    ( ( ZDMA_BASEADDR ) + 0X00000110 )

#define ZDMA_ZDMA_CH_CTRL0_OVR_FETCH_SHIFT   7
#define ZDMA_ZDMA_CH_CTRL0_OVR_FETCH_WIDTH   1
#define ZDMA_ZDMA_CH_CTRL0_OVR_FETCH_MASK    0X00000080

#define ZDMA_ZDMA_CH_CTRL0_POINT_TYPE_SHIFT   6
#define ZDMA_ZDMA_CH_CTRL0_POINT_TYPE_WIDTH   1
#define ZDMA_ZDMA_CH_CTRL0_POINT_TYPE_MASK    0X00000040

#define ZDMA_ZDMA_CH_CTRL0_MODE_SHIFT   4
#define ZDMA_ZDMA_CH_CTRL0_MODE_WIDTH   2
#define ZDMA_ZDMA_CH_CTRL0_MODE_MASK    0X00000030

#define ZDMA_ZDMA_CH_CTRL0_RATE_CNTL_SHIFT   3
#define ZDMA_ZDMA_CH_CTRL0_RATE_CNTL_WIDTH   1
#define ZDMA_ZDMA_CH_CTRL0_RATE_CNTL_MASK    0X00000008

#define ZDMA_ZDMA_CH_CTRL0_CONT_ADDR_SHIFT   2
#define ZDMA_ZDMA_CH_CTRL0_CONT_ADDR_WIDTH   1
#define ZDMA_ZDMA_CH_CTRL0_CONT_ADDR_MASK    0X00000004

#define ZDMA_ZDMA_CH_CTRL0_CONT_SHIFT   1
#define ZDMA_ZDMA_CH_CTRL0_CONT_WIDTH   1
#define ZDMA_ZDMA_CH_CTRL0_CONT_MASK    0X00000002

/**
 * Register: ZDMA_ZDMA_CH_CTRL1
 */
#define ZDMA_ZDMA_CH_CTRL1    ( ( ZDMA_BASEADDR ) + 0X00000114 )

#define ZDMA_ZDMA_CH_CTRL1_DST_ISSUE_SHIFT   5
#define ZDMA_ZDMA_CH_CTRL1_DST_ISSUE_WIDTH   5
#define ZDMA_ZDMA_CH_CTRL1_DST_ISSUE_MASK    0X000003E0

#define ZDMA_ZDMA_CH_CTRL1_SRC_ISSUE_SHIFT   0
#define ZDMA_ZDMA_CH_CTRL1_SRC_ISSUE_WIDTH   5
#define ZDMA_ZDMA_CH_CTRL1_SRC_ISSUE_MASK    0X0000001F

/**
 * Register: ZDMA_ZDMA_CH_PERIF
 */
#define ZDMA_ZDMA_CH_PERIF    ( ( ZDMA_BASEADDR ) + 0X00000118 )

#define ZDMA_ZDMA_CH_PERIF_PROG_CELL_CNT_SHIFT   2
#define ZDMA_ZDMA_CH_PERIF_PROG_CELL_CNT_WIDTH   4
#define ZDMA_ZDMA_CH_PERIF_PROG_CELL_CNT_MASK    0X0000003C

#define ZDMA_ZDMA_CH_PERIF_SIDE_SHIFT   1
#define ZDMA_ZDMA_CH_PERIF_SIDE_WIDTH   1
#define ZDMA_ZDMA_CH_PERIF_SIDE_MASK    0X00000002

#define ZDMA_ZDMA_CH_PERIF_EN_SHIFT   0
#define ZDMA_ZDMA_CH_PERIF_EN_WIDTH   1
#define ZDMA_ZDMA_CH_PERIF_EN_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_STATUS
 */
#define ZDMA_ZDMA_CH_STATUS    ( ( ZDMA_BASEADDR ) + 0X0000011C )

#define ZDMA_ZDMA_CH_STATUS_STATE_SHIFT   0
#define ZDMA_ZDMA_CH_STATUS_STATE_WIDTH   2
#define ZDMA_ZDMA_CH_STATUS_STATE_MASK    0X00000003

/**
 * Register: ZDMA_ZDMA_CH_DATA_ATTR
 */
#define ZDMA_ZDMA_CH_DATA_ATTR    ( ( ZDMA_BASEADDR ) + 0X00000120 )

#define ZDMA_ZDMA_CH_DATA_ATTR_ARBURST_SHIFT   26
#define ZDMA_ZDMA_CH_DATA_ATTR_ARBURST_WIDTH   2
#define ZDMA_ZDMA_CH_DATA_ATTR_ARBURST_MASK    0X0C000000

#define ZDMA_ZDMA_CH_DATA_ATTR_ARCACHE_SHIFT   22
#define ZDMA_ZDMA_CH_DATA_ATTR_ARCACHE_WIDTH   4
#define ZDMA_ZDMA_CH_DATA_ATTR_ARCACHE_MASK    0X03C00000

#define ZDMA_ZDMA_CH_DATA_ATTR_ARQOS_SHIFT   18
#define ZDMA_ZDMA_CH_DATA_ATTR_ARQOS_WIDTH   4
#define ZDMA_ZDMA_CH_DATA_ATTR_ARQOS_MASK    0X003C0000

#define ZDMA_ZDMA_CH_DATA_ATTR_ARLEN_SHIFT   14
#define ZDMA_ZDMA_CH_DATA_ATTR_ARLEN_WIDTH   4
#define ZDMA_ZDMA_CH_DATA_ATTR_ARLEN_MASK    0X0003C000

#define ZDMA_ZDMA_CH_DATA_ATTR_AWBURST_SHIFT   12
#define ZDMA_ZDMA_CH_DATA_ATTR_AWBURST_WIDTH   2
#define ZDMA_ZDMA_CH_DATA_ATTR_AWBURST_MASK    0X00003000

#define ZDMA_ZDMA_CH_DATA_ATTR_AWCACHE_SHIFT   8
#define ZDMA_ZDMA_CH_DATA_ATTR_AWCACHE_WIDTH   4
#define ZDMA_ZDMA_CH_DATA_ATTR_AWCACHE_MASK    0X00000F00

#define ZDMA_ZDMA_CH_DATA_ATTR_AWQOS_SHIFT   4
#define ZDMA_ZDMA_CH_DATA_ATTR_AWQOS_WIDTH   4
#define ZDMA_ZDMA_CH_DATA_ATTR_AWQOS_MASK    0X000000F0

#define ZDMA_ZDMA_CH_DATA_ATTR_AWLEN_SHIFT   0
#define ZDMA_ZDMA_CH_DATA_ATTR_AWLEN_WIDTH   4
#define ZDMA_ZDMA_CH_DATA_ATTR_AWLEN_MASK    0X0000000F

/**
 * Register: ZDMA_ZDMA_CH_DSCR_ATTR
 */
#define ZDMA_ZDMA_CH_DSCR_ATTR    ( ( ZDMA_BASEADDR ) + 0X00000124 )

#define ZDMA_ZDMA_CH_DSCR_ATTR_AXCOHRNT_SHIFT   8
#define ZDMA_ZDMA_CH_DSCR_ATTR_AXCOHRNT_WIDTH   1
#define ZDMA_ZDMA_CH_DSCR_ATTR_AXCOHRNT_MASK    0X00000100

#define ZDMA_ZDMA_CH_DSCR_ATTR_AXCACHE_SHIFT   4
#define ZDMA_ZDMA_CH_DSCR_ATTR_AXCACHE_WIDTH   4
#define ZDMA_ZDMA_CH_DSCR_ATTR_AXCACHE_MASK    0X000000F0

#define ZDMA_ZDMA_CH_DSCR_ATTR_AXQOS_SHIFT   0
#define ZDMA_ZDMA_CH_DSCR_ATTR_AXQOS_WIDTH   4
#define ZDMA_ZDMA_CH_DSCR_ATTR_AXQOS_MASK    0X0000000F

/**
 * Register: ZDMA_ZDMA_CH_SRC_DSCR_WORD0
 */
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD0    ( ( ZDMA_BASEADDR ) + 0X00000128 )

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD0_LSB_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD0_LSB_WIDTH   32
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD0_LSB_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_DSCR_WORD1
 */
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD1    ( ( ZDMA_BASEADDR ) + 0X0000012C )

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD1_MSB_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD1_MSB_WIDTH   17
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD1_MSB_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_DSCR_WORD2
 */
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD2    ( ( ZDMA_BASEADDR ) + 0X00000130 )

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD2_SIZE_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD2_SIZE_WIDTH   30
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD2_SIZE_MASK    0X3FFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_DSCR_WORD3
 */
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3    ( ( ZDMA_BASEADDR ) + 0X00000134 )

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_CMD_SHIFT   3
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_CMD_WIDTH   2
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_CMD_MASK    0X00000018

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_INTR_SHIFT   2
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_INTR_WIDTH   1
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_INTR_MASK    0X00000004

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_TYPE_SHIFT   1
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_TYPE_WIDTH   1
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_TYPE_MASK    0X00000002

#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_COHRNT_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_COHRNT_WIDTH   1
#define ZDMA_ZDMA_CH_SRC_DSCR_WORD3_COHRNT_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_DST_DSCR_WORD0
 */
#define ZDMA_ZDMA_CH_DST_DSCR_WORD0    ( ( ZDMA_BASEADDR ) + 0X00000138 )

#define ZDMA_ZDMA_CH_DST_DSCR_WORD0_LSB_SHIFT   0
#define ZDMA_ZDMA_CH_DST_DSCR_WORD0_LSB_WIDTH   32
#define ZDMA_ZDMA_CH_DST_DSCR_WORD0_LSB_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_DSCR_WORD1
 */
#define ZDMA_ZDMA_CH_DST_DSCR_WORD1    ( ( ZDMA_BASEADDR ) + 0X0000013C )

#define ZDMA_ZDMA_CH_DST_DSCR_WORD1_MSB_SHIFT   0
#define ZDMA_ZDMA_CH_DST_DSCR_WORD1_MSB_WIDTH   17
#define ZDMA_ZDMA_CH_DST_DSCR_WORD1_MSB_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_DSCR_WORD2
 */
#define ZDMA_ZDMA_CH_DST_DSCR_WORD2    ( ( ZDMA_BASEADDR ) + 0X00000140 )

#define ZDMA_ZDMA_CH_DST_DSCR_WORD2_SIZE_SHIFT   0
#define ZDMA_ZDMA_CH_DST_DSCR_WORD2_SIZE_WIDTH   30
#define ZDMA_ZDMA_CH_DST_DSCR_WORD2_SIZE_MASK    0X3FFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_DSCR_WORD3
 */
#define ZDMA_ZDMA_CH_DST_DSCR_WORD3    ( ( ZDMA_BASEADDR ) + 0X00000144 )

#define ZDMA_ZDMA_CH_DST_DSCR_WORD3_INTR_SHIFT   2
#define ZDMA_ZDMA_CH_DST_DSCR_WORD3_INTR_WIDTH   1
#define ZDMA_ZDMA_CH_DST_DSCR_WORD3_INTR_MASK    0X00000004

#define ZDMA_ZDMA_CH_DST_DSCR_WORD3_COHRNT_SHIFT   0
#define ZDMA_ZDMA_CH_DST_DSCR_WORD3_COHRNT_WIDTH   1
#define ZDMA_ZDMA_CH_DST_DSCR_WORD3_COHRNT_MASK    0X00000001

/**
 * Register: ZDMA_ZDMA_CH_WR_ONLY_WORD0
 */
#define ZDMA_ZDMA_CH_WR_ONLY_WORD0    ( ( ZDMA_BASEADDR ) + 0X00000148 )

#define ZDMA_ZDMA_CH_WR_ONLY_WORD0_DATA_SHIFT   0
#define ZDMA_ZDMA_CH_WR_ONLY_WORD0_DATA_WIDTH   32
#define ZDMA_ZDMA_CH_WR_ONLY_WORD0_DATA_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_WR_ONLY_WORD1
 */
#define ZDMA_ZDMA_CH_WR_ONLY_WORD1    ( ( ZDMA_BASEADDR ) + 0X0000014C )

#define ZDMA_ZDMA_CH_WR_ONLY_WORD1_DATA_SHIFT   0
#define ZDMA_ZDMA_CH_WR_ONLY_WORD1_DATA_WIDTH   32
#define ZDMA_ZDMA_CH_WR_ONLY_WORD1_DATA_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_WR_ONLY_WORD2
 */
#define ZDMA_ZDMA_CH_WR_ONLY_WORD2    ( ( ZDMA_BASEADDR ) + 0X00000150 )

#define ZDMA_ZDMA_CH_WR_ONLY_WORD2_DATA_SHIFT   0
#define ZDMA_ZDMA_CH_WR_ONLY_WORD2_DATA_WIDTH   32
#define ZDMA_ZDMA_CH_WR_ONLY_WORD2_DATA_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_WR_ONLY_WORD3
 */
#define ZDMA_ZDMA_CH_WR_ONLY_WORD3    ( ( ZDMA_BASEADDR ) + 0X00000154 )

#define ZDMA_ZDMA_CH_WR_ONLY_WORD3_DATA_SHIFT   0
#define ZDMA_ZDMA_CH_WR_ONLY_WORD3_DATA_WIDTH   32
#define ZDMA_ZDMA_CH_WR_ONLY_WORD3_DATA_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_START_LSB
 */
#define ZDMA_ZDMA_CH_SRC_START_LSB    ( ( ZDMA_BASEADDR ) + 0X00000158 )

#define ZDMA_ZDMA_CH_SRC_START_LSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_START_LSB_ADDR_WIDTH   32
#define ZDMA_ZDMA_CH_SRC_START_LSB_ADDR_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_START_MSB
 */
#define ZDMA_ZDMA_CH_SRC_START_MSB    ( ( ZDMA_BASEADDR ) + 0X0000015C )

#define ZDMA_ZDMA_CH_SRC_START_MSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_START_MSB_ADDR_WIDTH   17
#define ZDMA_ZDMA_CH_SRC_START_MSB_ADDR_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_START_LSB
 */
#define ZDMA_ZDMA_CH_DST_START_LSB    ( ( ZDMA_BASEADDR ) + 0X00000160 )

#define ZDMA_ZDMA_CH_DST_START_LSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_DST_START_LSB_ADDR_WIDTH   32
#define ZDMA_ZDMA_CH_DST_START_LSB_ADDR_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_START_MSB
 */
#define ZDMA_ZDMA_CH_DST_START_MSB    ( ( ZDMA_BASEADDR ) + 0X00000164 )

#define ZDMA_ZDMA_CH_DST_START_MSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_DST_START_MSB_ADDR_WIDTH   17
#define ZDMA_ZDMA_CH_DST_START_MSB_ADDR_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_CUR_PYLD_LSB
 */
#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_LSB    ( ( ZDMA_BASEADDR ) + 0X00000168 )

#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_LSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_LSB_ADDR_WIDTH   32
#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_LSB_ADDR_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_CUR_PYLD_MSB
 */
#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_MSB    ( ( ZDMA_BASEADDR ) + 0X0000016C )

#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_MSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_MSB_ADDR_WIDTH   17
#define ZDMA_ZDMA_CH_SRC_CUR_PYLD_MSB_ADDR_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_CUR_PYLD_LSB
 */
#define ZDMA_ZDMA_CH_DST_CUR_PYLD_LSB    ( ( ZDMA_BASEADDR ) + 0X00000170 )

#define ZDMA_ZDMA_CH_DST_CUR_PYLD_LSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_DST_CUR_PYLD_LSB_ADDR_WIDTH   32
#define ZDMA_ZDMA_CH_DST_CUR_PYLD_LSB_ADDR_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_CUR_PYLD_MSB
 */
#define ZDMA_ZDMA_CH_DST_CUR_PYLD_MSB    ( ( ZDMA_BASEADDR ) + 0X00000174 )

#define ZDMA_ZDMA_CH_DST_CUR_PYLD_MSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_DST_CUR_PYLD_MSB_ADDR_WIDTH   17
#define ZDMA_ZDMA_CH_DST_CUR_PYLD_MSB_ADDR_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_CUR_DSCR_LSB
 */
#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_LSB    ( ( ZDMA_BASEADDR ) + 0X00000178 )

#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_LSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_LSB_ADDR_WIDTH   32
#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_LSB_ADDR_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_SRC_CUR_DSCR_MSB
 */
#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_MSB    ( ( ZDMA_BASEADDR ) + 0X0000017C )

#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_MSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_MSB_ADDR_WIDTH   17
#define ZDMA_ZDMA_CH_SRC_CUR_DSCR_MSB_ADDR_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_CUR_DSCR_LSB
 */
#define ZDMA_ZDMA_CH_DST_CUR_DSCR_LSB    ( ( ZDMA_BASEADDR ) + 0X00000180 )

#define ZDMA_ZDMA_CH_DST_CUR_DSCR_LSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_DST_CUR_DSCR_LSB_ADDR_WIDTH   32
#define ZDMA_ZDMA_CH_DST_CUR_DSCR_LSB_ADDR_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_DST_CUR_DSCR_MSB
 */
#define ZDMA_ZDMA_CH_DST_CUR_DSCR_MSB    ( ( ZDMA_BASEADDR ) + 0X00000184 )

#define ZDMA_ZDMA_CH_DST_CUR_DSCR_MSB_ADDR_SHIFT   0
#define ZDMA_ZDMA_CH_DST_CUR_DSCR_MSB_ADDR_WIDTH   17
#define ZDMA_ZDMA_CH_DST_CUR_DSCR_MSB_ADDR_MASK    0X0001FFFF

/**
 * Register: ZDMA_ZDMA_CH_TOTAL_BYTE
 */
#define ZDMA_ZDMA_CH_TOTAL_BYTE    ( ( ZDMA_BASEADDR ) + 0X00000188 )

#define ZDMA_ZDMA_CH_TOTAL_BYTE_CNT_SHIFT   0
#define ZDMA_ZDMA_CH_TOTAL_BYTE_CNT_WIDTH   32
#define ZDMA_ZDMA_CH_TOTAL_BYTE_CNT_MASK    0XFFFFFFFF

/**
 * Register: ZDMA_ZDMA_CH_RATE_CNTL
 */
#define ZDMA_ZDMA_CH_RATE_CNTL    ( ( ZDMA_BASEADDR ) + 0X0000018C )

#define ZDMA_ZDMA_CH_RATE_CNTL_CNT_SHIFT   0
#define ZDMA_ZDMA_CH_RATE_CNTL_CNT_WIDTH   12
#define ZDMA_ZDMA_CH_RATE_CNTL_CNT_MASK    0X00000FFF

/**
 * Register: ZDMA_ZDMA_CH_IRQ_SRC_ACCT
 */
#define ZDMA_ZDMA_CH_IRQ_SRC_ACCT    ( ( ZDMA_BASEADDR ) + 0X00000190 )

#define ZDMA_ZDMA_CH_IRQ_SRC_ACCT_CNT_SHIFT   0
#define ZDMA_ZDMA_CH_IRQ_SRC_ACCT_CNT_WIDTH   8
#define ZDMA_ZDMA_CH_IRQ_SRC_ACCT_CNT_MASK    0X000000FF

/**
 * Register: ZDMA_ZDMA_CH_IRQ_DST_ACCT
 */
#define ZDMA_ZDMA_CH_IRQ_DST_ACCT    ( ( ZDMA_BASEADDR ) + 0X00000194 )

#define ZDMA_ZDMA_CH_IRQ_DST_ACCT_CNT_SHIFT   0
#define ZDMA_ZDMA_CH_IRQ_DST_ACCT_CNT_WIDTH   8
#define ZDMA_ZDMA_CH_IRQ_DST_ACCT_CNT_MASK    0X000000FF

/**
 * Register: ZDMA_ZDMA_CH_DBG0
 */
#define ZDMA_ZDMA_CH_DBG0    ( ( ZDMA_BASEADDR ) + 0X00000198 )

#define ZDMA_ZDMA_CH_DBG0_CMN_BUF_FREE_SHIFT   0
#define ZDMA_ZDMA_CH_DBG0_CMN_BUF_FREE_WIDTH   9
#define ZDMA_ZDMA_CH_DBG0_CMN_BUF_FREE_MASK    0X000001FF

/**
 * Register: ZDMA_ZDMA_CH_DBG1
 */
#define ZDMA_ZDMA_CH_DBG1    ( ( ZDMA_BASEADDR ) + 0X0000019C )

#define ZDMA_ZDMA_CH_DBG1_CMN_BUF_OCC_SHIFT   0
#define ZDMA_ZDMA_CH_DBG1_CMN_BUF_OCC_WIDTH   9
#define ZDMA_ZDMA_CH_DBG1_CMN_BUF_OCC_MASK    0X000001FF

/**
 * Register: ZDMA_ZDMA_CH_CTRL2
 */
#define ZDMA_ZDMA_CH_CTRL2    ( ( ZDMA_BASEADDR ) + 0X00000200 )

#define ZDMA_ZDMA_CH_CTRL2_EN_SHIFT   0
#define ZDMA_ZDMA_CH_CTRL2_EN_WIDTH   1
#define ZDMA_ZDMA_CH_CTRL2_EN_MASK    0X00000001

#ifdef __cplusplus
}
#endif


#endif /* _ZDMA_H_ */

