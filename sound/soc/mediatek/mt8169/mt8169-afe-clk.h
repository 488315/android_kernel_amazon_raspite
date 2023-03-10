/* SPDX-License-Identifier: GPL-2.0 */
/*
 * mt8169-afe-clk.h  --  Mediatek 8169 afe clock ctrl definition
 *
 * Copyright (c) 2021 MediaTek Inc.
 * Author: Jiaxin Yu <jiaxin.yu@mediatek.com>
 */

#ifndef _MT8169_AFE_CLOCK_CTRL_H_
#define _MT8169_AFE_CLOCK_CTRL_H_

#define PERI_BUS_DCM_CTRL 0x0074
#define MODULE_SW_CG_1_STA 0x0094
#define MODULE_SW_CG_2_STA 0x00ac
#define CLK_CFG_4 0x0080
#define CLK_CFG_5 0x0090
#define AP_PLL_CON3 0x0014
#define APLL1_CON4 0x0328
#define APLL1_TUNER_CON0 0x0040
#define APLL2_CON4 0x033c
#define APLL2_TUNER_CON0 0x0044


#define AP_PLL_CON5 0x0014
#define APLL1_CON0 0x02c0
#define APLL1_CON1 0x02c4
#define APLL1_CON2 0x02c8
#define APLL1_CON3 0x02cc
#define APLL1_PWR_CON0 0x02d0

#define APLL2_CON0 0x02d4
#define APLL2_CON1 0x02d8
#define APLL2_CON2 0x02dc
#define APLL2_CON3 0x02e0
#define APLL2_PWR_CON0 0x02e4

#define APMIXEDSYS_MAX_LENGTH APLL2_PWR_CON0

#define CLK_CFG_6 0x0080
#define CLK_AUDDIV_0 0x0320
#define CLK_AUDDIV_1 0x0324
#define CLK_AUDDIV_2 0x0328
#define CKSYS_AUD_TOP_CFG 0x032c
#define CKSYS_AUD_TOP_MON 0x0330
#define CLK_AUDDIV_3 0x0334

#define CLK_MAX_LENGTH CLK_AUDDIV_3

/* CLK_CFG_6 */
#define CLK_AUD_INTBUS_SEL_SFT              16
#define CLK_AUD_INTBUS_SEL_MASK             0x3
#define CLK_AUD_INTBUS_SEL_MASK_SFT         (0x3 << 16)

/* CLK_AUDDIV_0 */
#define APLL12_DIV0_PDN_SFT                0
#define APLL12_DIV0_PDN_MASK               0x1
#define APLL12_DIV0_PDN_MASK_SFT           (0x1 << 0)
#define APLL12_DIV1_PDN_SFT                1
#define APLL12_DIV1_PDN_MASK               0x1
#define APLL12_DIV1_PDN_MASK_SFT           (0x1 << 1)
#define APLL12_DIV2_PDN_SFT                2
#define APLL12_DIV2_PDN_MASK               0x1
#define APLL12_DIV2_PDN_MASK_SFT           (0x1 << 2)
#define APLL12_DIV4_PDN_SFT                3
#define APLL12_DIV4_PDN_MASK               0x1
#define APLL12_DIV4_PDN_MASK_SFT           (0x1 << 3)
#define APLL12_DIV_TDM_PDN_SFT             4
#define APLL12_DIV_TDM_PDN_MASK            0x1
#define APLL12_DIV_TDM_PDN_MASK_SFT        (0x1 << 4)
#define APLL_I2S0_MCK_SEL_SFT              16
#define APLL_I2S0_MCK_SEL_MASK             0x1
#define APLL_I2S0_MCK_SEL_MASK_SFT         (0x1 << 16)
#define APLL_I2S1_MCK_SEL_SFT              17
#define APLL_I2S1_MCK_SEL_MASK             0x1
#define APLL_I2S1_MCK_SEL_MASK_SFT         (0x1 << 17)
#define APLL_I2S2_MCK_SEL_SFT              18
#define APLL_I2S2_MCK_SEL_MASK             0x1
#define APLL_I2S2_MCK_SEL_MASK_SFT         (0x1 << 17)
#define APLL_I2S4_MCK_SEL_SFT              19
#define APLL_I2S4_MCK_SEL_MASK             0x1
#define APLL_I2S4_MCK_SEL_MASK_SFT         (0x1 << 19)
#define APLL_TDM_MCK_SEL_SFT               20
#define APLL_TDM_MCK_SEL_MASK              0x1
#define APLL_TDM_MCK_SEL_MASK_SFT          (0x1 << 20)

/* CLK_AUDDIV_2 */
#define APLL12_CK_DIV0_SFT                 0
#define APLL12_CK_DIV0_MASK                0xff
#define APLL12_CK_DIV0_MASK_SFT            (0xff << 0)
#define APLL12_CK_DIV1_SFT                 8
#define APLL12_CK_DIV1_MASK                0xff
#define APLL12_CK_DIV1_MASK_SFT            (0xff << 8)
#define APLL12_CK_DIV2_SFT                 16
#define APLL12_CK_DIV2_MASK                0xff
#define APLL12_CK_DIV2_MASK_SFT            (0xff << 16)
#define APLL12_CK_DIV4_SFT                 24
#define APLL12_CK_DIV4_MASK                0xff
#define APLL12_CK_DIV4_MASK_SFT            (0xff << 24)

/* CLK_AUDDIV_3 */
#define APLL12_CK_DIV_TDM_SFT              0
#define APLL12_CK_DIV_TDM_MASK             0xff
#define APLL12_CK_DIV_TDM_MASK_SFT         (0xff << 0)

/* AUD_TOP_CFG */
#define AUD_TOP_CFG_SFT                    0
#define AUD_TOP_CFG_MASK                   0xffffffff
#define AUD_TOP_CFG_MASK_SFT               (0xffffffff << 0)

/* AUD_TOP_MON */
#define AUD_TOP_MON_SFT                    0
#define AUD_TOP_MON_MASK                   0xffffffff
#define AUD_TOP_MON_MASK_SFT               (0xffffffff << 0)

/* APLL */
#define APLL1_W_NAME "APLL1"
#define APLL2_W_NAME "APLL2"
enum {
	MT8169_APLL1 = 0,
	MT8169_APLL2,
};

enum {
	CLK_AFE = 0,
	CLK_DAC,
	CLK_DAC_PREDIS,
	CLK_ADC,
	CLK_TML,
	CLK_APLL22M,
	CLK_APLL24M,
	CLK_APLL1_TUNER,
	CLK_APLL2_TUNER,
	CLK_TDM,
	CLK_NLE,
	CLK_DAC_HIRES,
	CLK_ADC_HIRES,
	CLK_I2S1_BCLK,
	CLK_I2S2_BCLK,
	CLK_I2S3_BCLK,
	CLK_I2S4_BCLK,
	CLK_CONNSYS_I2S_ASRC,
	CLK_GENERAL1_ASRC,
	CLK_GENERAL2_ASRC,
	CLK_ADC_HIRES_TML,
	CLK_ADDA6_ADC,
	CLK_ADDA6_ADC_HIRES,
	CLK_3RD_DAC,
	CLK_3RD_DAC_PREDIS,
	CLK_3RD_DAC_TML,
	CLK_3RD_DAC_HIRES,
	CLK_ETDM_IN1_BCLK,
	CLK_ETDM_OUT1_BCLK,
	CLK_INFRA_SYS_AUDIO,
	CLK_INFRA_AUDIO_26M,
	CLK_MUX_AUDIO,
	CLK_MUX_AUDIOINTBUS,
	CLK_TOP_MAINPLL_D2_D4,
	/* apll related mux */
	CLK_TOP_MUX_AUD_1,
	CLK_TOP_APLL1_CK,
	CLK_TOP_MUX_AUD_2,
	CLK_TOP_APLL2_CK,
	CLK_TOP_MUX_AUD_ENG1,
	CLK_TOP_APLL1_D8,
	CLK_TOP_MUX_AUD_ENG2,
	CLK_TOP_APLL2_D8,
	CLK_TOP_MUX_AUDIO_H,
	CLK_TOP_I2S0_M_SEL,
	CLK_TOP_I2S1_M_SEL,
	CLK_TOP_I2S2_M_SEL,
	CLK_TOP_I2S4_M_SEL,
	CLK_TOP_TDM_M_SEL,
	CLK_TOP_APLL12_DIV0,
	CLK_TOP_APLL12_DIV1,
	CLK_TOP_APLL12_DIV2,
	CLK_TOP_APLL12_DIV4,
	CLK_TOP_APLL12_DIV_TDM,
	CLK_CLK26M,
	CLK_NUM
};
struct mtk_base_afe;
int mt8169_set_audio_int_bus_parent(struct mtk_base_afe *afe, int clk_id);
int mt8169_init_clock(struct mtk_base_afe *afe);
int mt8169_afe_enable_cgs(struct mtk_base_afe *afe);
void mt8169_afe_disable_cgs(struct mtk_base_afe *afe);
int mt8169_afe_enable_clock(struct mtk_base_afe *afe);
void mt8169_afe_disable_clock(struct mtk_base_afe *afe);

int mt8169_afe_dram_request(struct device *dev);
int mt8169_afe_dram_release(struct device *dev);

int mt8169_apll1_enable(struct mtk_base_afe *afe);
void mt8169_apll1_disable(struct mtk_base_afe *afe);

int mt8169_apll2_enable(struct mtk_base_afe *afe);
void mt8169_apll2_disable(struct mtk_base_afe *afe);

int mt8169_get_apll_rate(struct mtk_base_afe *afe, int apll);
int mt8169_get_apll_by_rate(struct mtk_base_afe *afe, int rate);
int mt8169_get_apll_by_name(struct mtk_base_afe *afe, const char *name);

extern void aud_intbus_mux_sel(unsigned int aud_idx);

/* these will be replaced by using CCF */
int mt8169_mck_enable(struct mtk_base_afe *afe, int mck_id, int rate);
void mt8169_mck_disable(struct mtk_base_afe *afe, int mck_id);

#endif
