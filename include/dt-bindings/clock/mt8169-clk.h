/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021 MediaTek Inc.
 * Author: Chun-Jie Chen <chun-jie.chen@mediatek.com>
 */

#ifndef _DT_BINDINGS_CLK_MT8169_H
#define _DT_BINDINGS_CLK_MT8169_H

/* MCUSYS */

#define CLK_MCU_ARMPLL_LL_SEL		0
#define CLK_MCU_ARMPLL_BL_SEL		1
#define CLK_MCU_ARMPLL_BUS_SEL		2
#define CLK_MCU_NR_CLK			3

/* TOPCKGEN */

#define CLK_TOP_AXI_SEL			0
#define CLK_TOP_SCP_SEL			1
#define CLK_TOP_MFG_SEL			2
#define CLK_TOP_CAMTG_SEL		3
#define CLK_TOP_CAMTG1_SEL		4
#define CLK_TOP_CAMTG2_SEL		5
#define CLK_TOP_CAMTG3_SEL		6
#define CLK_TOP_CAMTG4_SEL		7
#define CLK_TOP_CAMTG5_SEL		8
#define CLK_TOP_CAMTG6_SEL		9
#define CLK_TOP_UART_SEL		10
#define CLK_TOP_SPI_SEL			11
#define CLK_TOP_MSDC50_0_HCLK_SEL	12
#define CLK_TOP_MSDC50_0_SEL		13
#define CLK_TOP_MSDC30_1_SEL		14
#define CLK_TOP_AUDIO_SEL		15
#define CLK_TOP_AUD_INTBUS_SEL		16
#define CLK_TOP_AUD_1_SEL		17
#define CLK_TOP_AUD_2_SEL		18
#define CLK_TOP_AUD_ENGEN1_SEL		19
#define CLK_TOP_AUD_ENGEN2_SEL		20
#define CLK_TOP_DISP_PWM_SEL		21
#define CLK_TOP_SSPM_SEL		22
#define CLK_TOP_DXCC_SEL		23
#define CLK_TOP_USB_TOP_SEL		24
#define CLK_TOP_SRCK_SEL		25
#define CLK_TOP_SPM_SEL			26
#define CLK_TOP_I2C_SEL			27
#define CLK_TOP_PWM_SEL			28
#define CLK_TOP_SENINF_SEL		29
#define CLK_TOP_SENINF1_SEL		30
#define CLK_TOP_SENINF2_SEL		31
#define CLK_TOP_SENINF3_SEL		32
#define CLK_TOP_AES_MSDCFDE_SEL		33
#define CLK_TOP_PWRAP_ULPOSC_SEL	34
#define CLK_TOP_CAMTM_SEL		35
#define CLK_TOP_VENC_SEL		36
#define CLK_TOP_CAM_SEL			37
#define CLK_TOP_IMG1_SEL		38
#define CLK_TOP_IPE_SEL			39
#define CLK_TOP_DPMAIF_SEL		40
#define CLK_TOP_VDEC_SEL		41
#define CLK_TOP_DISP_SEL		42
#define CLK_TOP_MDP_SEL			43
#define CLK_TOP_AUDIO_H_SEL		44
#define CLK_TOP_UFS_SEL			45
#define CLK_TOP_AES_FDE_SEL		46
#define CLK_TOP_AUDIODSP_SEL		47
#define CLK_TOP_DSI_OCC_SEL		48
#define CLK_TOP_SPMI_MST_SEL		49
#define CLK_TOP_SPINOR_SEL		50
#define CLK_TOP_NNA_SEL			51
#define CLK_TOP_NNA1_SEL		52
#define CLK_TOP_NNA2_SEL		53
#define CLK_TOP_SSUSB_XHCI_SEL		54
#define CLK_TOP_SSUSB_TOP_1P_SEL	55
#define CLK_TOP_SSUSB_XHCI_1P_SEL	56
#define CLK_TOP_WPE_SEL			57
#define CLK_TOP_DPI_SEL			58
#define CLK_TOP_U3_OCC_250M_SEL		59
#define CLK_TOP_U3_OCC_500M_SEL		60
#define CLK_TOP_ADSP_BUS_SEL		61
#define CLK_TOP_APLL_I2S0_MCK_SEL	62
#define CLK_TOP_APLL_I2S1_MCK_SEL	63
#define CLK_TOP_APLL_I2S2_MCK_SEL	64
#define CLK_TOP_APLL_I2S4_MCK_SEL	65
#define CLK_TOP_APLL_TDMOUT_MCK_SEL	66
#define CLK_TOP_ARMPLL_LL		67
#define CLK_TOP_ARMPLL_BL		68
#define CLK_TOP_CCIPLL			69
#define CLK_TOP_MFGPLL			70
#define CLK_TOP_MAINPLL			71
#define CLK_TOP_MAINPLL_D2		72
#define CLK_TOP_MAINPLL_D2_D2		73
#define CLK_TOP_MAINPLL_D2_D4		74
#define CLK_TOP_MAINPLL_D2_D16		75
#define CLK_TOP_MAINPLL_D3		76
#define CLK_TOP_MAINPLL_D3_D2		77
#define CLK_TOP_MAINPLL_D3_D4		78
#define CLK_TOP_MAINPLL_D5		79
#define CLK_TOP_MAINPLL_D5_D2		80
#define CLK_TOP_MAINPLL_D5_D4		81
#define CLK_TOP_MAINPLL_D7		82
#define CLK_TOP_MAINPLL_D7_D2		83
#define CLK_TOP_MAINPLL_D7_D4		84
#define CLK_TOP_UNIVPLL			85
#define CLK_TOP_UNIVPLL_D2		86
#define CLK_TOP_UNIVPLL_D2_D2		87
#define CLK_TOP_UNIVPLL_D2_D4		88
#define CLK_TOP_UNIVPLL_D3		89
#define CLK_TOP_UNIVPLL_D3_D2		90
#define CLK_TOP_UNIVPLL_D3_D4		91
#define CLK_TOP_UNIVPLL_D3_D8		92
#define CLK_TOP_UNIVPLL_D3_D32		93
#define CLK_TOP_UNIVPLL_D5		94
#define CLK_TOP_UNIVPLL_D5_D2		95
#define CLK_TOP_UNIVPLL_D5_D4		96
#define CLK_TOP_UNIVPLL_D7		97
#define CLK_TOP_UNIVPLL_192M		98
#define CLK_TOP_UNIVPLL_192M_D4		99
#define CLK_TOP_UNIVPLL_192M_D8		100
#define CLK_TOP_UNIVPLL_192M_D16	101
#define CLK_TOP_UNIVPLL_192M_D32	102
#define CLK_TOP_APLL1			103
#define CLK_TOP_APLL1_D2		104
#define CLK_TOP_APLL1_D4		105
#define CLK_TOP_APLL1_D8		106
#define CLK_TOP_APLL2			107
#define CLK_TOP_APLL2_D2		108
#define CLK_TOP_APLL2_D4		109
#define CLK_TOP_APLL2_D8		110
#define CLK_TOP_MMPLL			111
#define CLK_TOP_MMPLL_D2		112
#define CLK_TOP_TVDPLL			113
#define CLK_TOP_TVDPLL_D2		114
#define CLK_TOP_TVDPLL_D4		115
#define CLK_TOP_TVDPLL_D8		116
#define CLK_TOP_TVDPLL_D16		117
#define CLK_TOP_TVDPLL_D32		118
#define CLK_TOP_MSDCPLL			119
#define CLK_TOP_MSDCPLL_D2		120
#define CLK_TOP_ULPOSC1			121
#define CLK_TOP_ULPOSC1_D2		122
#define CLK_TOP_ULPOSC1_D4		123
#define CLK_TOP_ULPOSC1_D8		124
#define CLK_TOP_ULPOSC1_D10		125
#define CLK_TOP_ULPOSC1_D16		126
#define CLK_TOP_ULPOSC1_D32		127
#define CLK_TOP_ADSPPLL			128
#define CLK_TOP_ADSPPLL_D2		129
#define CLK_TOP_ADSPPLL_D4		130
#define CLK_TOP_ADSPPLL_D8		131
#define CLK_TOP_NNAPLL			132
#define CLK_TOP_NNAPLL_D2		133
#define CLK_TOP_NNAPLL_D4		134
#define CLK_TOP_NNAPLL_D8		135
#define CLK_TOP_NNA2PLL			136
#define CLK_TOP_NNA2PLL_D2		137
#define CLK_TOP_NNA2PLL_D4		138
#define CLK_TOP_NNA2PLL_D8		139
#define CLK_TOP_F_BIST2FPC		140
#define CLK_TOP_466M_FMEM		141
#define CLK_TOP_MPLL			142
#define CLK_TOP_APLL12_CK_DIV0		143
#define CLK_TOP_APLL12_CK_DIV1		144
#define CLK_TOP_APLL12_CK_DIV2		145
#define CLK_TOP_APLL12_CK_DIV4		146
#define CLK_TOP_APLL12_CK_DIV_TDMOUT_M	147
#define CLK_TOP_NR_CLK			148

/* INFRACFG_AO */

#define CLK_INFRA_AO_PMIC_TMR			0
#define CLK_INFRA_AO_PMIC_AP			1
#define CLK_INFRA_AO_PMIC_MD			2
#define CLK_INFRA_AO_PMIC_CONN			3
#define CLK_INFRA_AO_SEJ			4
#define CLK_INFRA_AO_APXGPT			5
#define CLK_INFRA_AO_ICUSB			6
#define CLK_INFRA_AO_GCE			7
#define CLK_INFRA_AO_THERM			8
#define CLK_INFRA_AO_I2C_AP			9
#define CLK_INFRA_AO_I2C_CCU			10
#define CLK_INFRA_AO_I2C_SSPM			11
#define CLK_INFRA_AO_I2C_RSV			12
#define CLK_INFRA_AO_PWM_HCLK			13
#define CLK_INFRA_AO_PWM1			14
#define CLK_INFRA_AO_PWM2			15
#define CLK_INFRA_AO_PWM3			16
#define CLK_INFRA_AO_PWM4			17
#define CLK_INFRA_AO_PWM5			18
#define CLK_INFRA_AO_PWM			19
#define CLK_INFRA_AO_UART0			20
#define CLK_INFRA_AO_UART1			21
#define CLK_INFRA_AO_UART2			22
#define CLK_INFRA_AO_GCE_26M			23
#define CLK_INFRA_AO_CQ_DMA_FPC			24
#define CLK_INFRA_AO_BTIF			25
#define CLK_INFRA_AO_SPI0			26
#define CLK_INFRA_AO_MSDC0			27
#define CLK_INFRA_AO_MSDCFDE			28
#define CLK_INFRA_AO_MSDC1			29
#define CLK_INFRA_AO_GCPU			30
#define CLK_INFRA_AO_TRNG			31
#define CLK_INFRA_AO_AUXADC			32
#define CLK_INFRA_AO_CPUM			33
#define CLK_INFRA_AO_CCIF1_AP			34
#define CLK_INFRA_AO_CCIF1_MD			35
#define CLK_INFRA_AO_AUXADC_MD			36
#define CLK_INFRA_AO_AP_DMA			37
#define CLK_INFRA_AO_XIU			38
#define CLK_INFRA_AO_DEVICE_APC			39
#define CLK_INFRA_AO_CCIF_AP			40
#define CLK_INFRA_AO_DEBUGTOP			41
#define CLK_INFRA_AO_AUDIO			42
#define CLK_INFRA_AO_CCIF_MD			43
#define CLK_INFRA_AO_DXCC_SEC_CORE		44
#define CLK_INFRA_AO_DXCC_AO			45
#define CLK_INFRA_AO_IMP_IIC			46
#define CLK_INFRA_AO_DRAMC_F26M			47
#define CLK_INFRA_AO_RG_PWM_FBCLK6_CK		48
#define CLK_INFRA_AO_SSUSB_TOP_HCLK		49
#define CLK_INFRA_AO_DISP_PWM			50
#define CLK_INFRA_AO_CLDMA_BCLK			51
#define CLK_INFRA_AO_AUDIO_26M_BCLK		52
#define CLK_INFRA_AO_SSUSB_TOP_P1_HCLK		53
#define CLK_INFRA_AO_SPI1			54
#define CLK_INFRA_AO_I2C4			55
#define CLK_INFRA_AO_MODEM_TEMP_SHARE		56
#define CLK_INFRA_AO_SPI2			57
#define CLK_INFRA_AO_SPI3			58
#define CLK_INFRA_AO_SSUSB_TOP_REF_CK		59
#define CLK_INFRA_AO_SSUSB_TOP_XHCI_CK		60
#define CLK_INFRA_AO_SSUSB_TOP_P1_REF_CK	61
#define CLK_INFRA_AO_SSUSB_TOP_P1_XHCI_CK	62
#define CLK_INFRA_AO_SSPM			63
#define CLK_INFRA_AO_SSUSB_TOP_P1_SYS_CK	64
#define CLK_INFRA_AO_I2C5			65
#define CLK_INFRA_AO_I2C5_ARBITER		66
#define CLK_INFRA_AO_I2C5_IMM			67
#define CLK_INFRA_AO_I2C1_ARBITER		68
#define CLK_INFRA_AO_I2C1_IMM			69
#define CLK_INFRA_AO_I2C2_ARBITER		70
#define CLK_INFRA_AO_I2C2_IMM			71
#define CLK_INFRA_AO_SPI4			72
#define CLK_INFRA_AO_SPI5			73
#define CLK_INFRA_AO_CQ_DMA			74
#define CLK_INFRA_AO_BIST2FPC			75
#define CLK_INFRA_AO_MSDC0_SELF			76
#define CLK_INFRA_AO_MSDC1_SELF			77
#define CLK_INFRA_AO_SSPM_26M_SELF		78
#define CLK_INFRA_AO_SSPM_32K_SELF		79
#define CLK_INFRA_AO_I2C6			80
#define CLK_INFRA_AO_AP_MSDC0			81
#define CLK_INFRA_AO_MD_MSDC0			82
#define CLK_INFRA_AO_MSDC0_SRC			83
#define CLK_INFRA_AO_MSDC1_SRC			84
#define CLK_INFRA_AO_SEJ_F13M_CK		85
#define CLK_INFRA_AO_AES_TOP0_BCLK_CK		86
#define CLK_INFRA_AO_MCU_PM_BCLK_CK		87
#define CLK_INFRA_AO_CCIF2_AP			88
#define CLK_INFRA_AO_CCIF2_MD			89
#define CLK_INFRA_AO_CCIF3_AP			90
#define CLK_INFRA_AO_CCIF3_MD			91
#define CLK_INFRA_AO_FADSP_26M			92
#define CLK_INFRA_AO_FADSP_32K			93
#define CLK_INFRA_AO_CCIF4_AP			94
#define CLK_INFRA_AO_CCIF4_MD			95
#define CLK_INFRA_AO_FADSP_CK			96
#define CLK_INFRA_AO_FLASHIF_133M_CK		97
#define CLK_INFRA_AO_FLASHIF_66M_CK		98
#define CLK_INFRA_AO_NR_CLK			99

/* APMIXEDSYS */

#define CLK_APMIXED_ARMPLL_LL		0
#define CLK_APMIXED_ARMPLL_BL		1
#define CLK_APMIXED_CCIPLL		2
#define CLK_APMIXED_MAINPLL		3
#define CLK_APMIXED_UNIV2PLL		4
#define CLK_APMIXED_MSDCPLL		5
#define CLK_APMIXED_MMPLL		6
#define CLK_APMIXED_NNAPLL		7
#define CLK_APMIXED_NNA2PLL		8
#define CLK_APMIXED_ADSPPLL		9
#define CLK_APMIXED_MFGPLL		10
#define CLK_APMIXED_TVDPLL		11
#define CLK_APMIXED_APLL1		12
#define CLK_APMIXED_APLL2		13
#define CLK_APMIXED_NR_CLK		14

/* IMP_IIC_WRAP */

#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C0	0
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C1	1
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C2	2
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C3	3
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C4	4
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C5	5
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C6	6
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C7	7
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C8	8
#define CLK_IMP_IIC_WRAP_AP_CLOCK_I2C9	9
#define CLK_IMP_IIC_WRAP_NR_CLK		10

/* AUDSYS */

#define CLK_AUDSYS_AFE			0
#define CLK_AUDSYS_22M			1
#define CLK_AUDSYS_24M			2
#define CLK_AUDSYS_APLL2_TUNER		3
#define CLK_AUDSYS_APLL_TUNER		4
#define CLK_AUDSYS_TDM			5
#define CLK_AUDSYS_ADC			6
#define CLK_AUDSYS_DAC			7
#define CLK_AUDSYS_DAC_PREDIS		8
#define CLK_AUDSYS_TML			9
#define CLK_AUDSYS_NLE			10
#define CLK_AUDSYS_I2S1_BCLK		11
#define CLK_AUDSYS_I2S2_BCLK		12
#define CLK_AUDSYS_I2S3_BCLK		13
#define CLK_AUDSYS_I2S4_BCLK		14
#define CLK_AUDSYS_CONNSYS_I2S_ASRC	15
#define CLK_AUDSYS_GENERAL1_ASRC	16
#define CLK_AUDSYS_GENERAL2_ASRC	17
#define CLK_AUDSYS_DAC_HIRES		18
#define CLK_AUDSYS_ADC_HIRES		19
#define CLK_AUDSYS_ADC_HIRES_TML	20
#define CLK_AUDSYS_ADDA6_ADC		21
#define CLK_AUDSYS_ADDA6_ADC_HIRES	22
#define CLK_AUDSYS_3RD_DAC		23
#define CLK_AUDSYS_3RD_DAC_PREDIS	24
#define CLK_AUDSYS_3RD_DAC_TML		25
#define CLK_AUDSYS_3RD_DAC_HIRES	26
#define CLK_AUDSYS_ETDM_IN1_BCLK	27
#define CLK_AUDSYS_ETDM_OUT1_BCLK	28
#define CLK_AUDSYS_NR_CLK		29

/* MFGCFG */

#define CLK_MFG_BG3D			0
#define CLK_MFG_NR_CLK			1

/* MMSYS */

#define CLK_MM_DISP_MUTEX0		0
#define CLK_MM_APB_MM_BUS		1
#define CLK_MM_DISP_OVL0		2
#define CLK_MM_DISP_RDMA0		3
#define CLK_MM_DISP_OVL0_2L		4
#define CLK_MM_DISP_WDMA0		5
#define CLK_MM_DISP_RSZ0		6
#define CLK_MM_DISP_AAL0		7
#define CLK_MM_DISP_CCORR0		8
#define CLK_MM_DISP_COLOR0		9
#define CLK_MM_SMI_INFRA		10
#define CLK_MM_DISP_DSC_WRAP0		11
#define CLK_MM_DISP_GAMMA0		12
#define CLK_MM_DISP_POSTMASK0		13
#define CLK_MM_DISP_DITHER0		14
#define CLK_MM_SMI_COMMON		15
#define CLK_MM_DSI0			16
#define CLK_MM_DISP_FAKE_ENG0		17
#define CLK_MM_DISP_FAKE_ENG1		18
#define CLK_MM_SMI_GALS			19
#define CLK_MM_SMI_IOMMU		20
#define CLK_MM_DSI0_DSI_CK_DOMAIN	21
#define CLK_MM_DISP_26M			22
#define CLK_MM_NR_CLK			23

/* WPESYS */

#define CLK_WPE_CK_EN			0
#define CLK_WPE_SMI_LARB8_CK_EN		1
#define CLK_WPE_SYS_EVENT_TX_CK_EN	2
#define CLK_WPE_SMI_LARB8_PCLK_EN	3
#define CLK_WPE_NR_CLK			4

/* IMGSYS1 */

#define CLK_IMG1_LARB9_IMG1		0
#define CLK_IMG1_LARB10_IMG1		1
#define CLK_IMG1_DIP			2
#define CLK_IMG1_GALS_IMG1		3
#define CLK_IMG1_NR_CLK			4

/* IMGSYS2 */

#define CLK_IMG2_LARB9_IMG2		0
#define CLK_IMG2_LARB10_IMG2		1
#define CLK_IMG2_MFB			2
#define CLK_IMG2_WPE			3
#define CLK_IMG2_MSS			4
#define CLK_IMG2_GALS_IMG2		5
#define CLK_IMG2_NR_CLK			6

/* VDECSYS */

#define CLK_VDEC_LARB1_CKEN		0
#define CLK_VDEC_LAT_CKEN		1
#define CLK_VDEC_LAT_ACTIVE		2
#define CLK_VDEC_LAT_CKEN_ENG		3
#define CLK_VDEC_MINI_MDP_CKEN_CFG_RG	4
#define CLK_VDEC_CKEN			5
#define CLK_VDEC_ACTIVE			6
#define CLK_VDEC_CKEN_ENG		7
#define CLK_VDEC_NR_CLK			8

/* VENCSYS */

#define CLK_VENC_CKE0_LARB		0
#define CLK_VENC_CKE1_VENC		1
#define CLK_VENC_CKE2_JPGENC		2
#define CLK_VENC_CKE5_GALS		3
#define CLK_VENC_NR_CLK			4

/* CAMSYS */

#define CLK_CAM_LARB13			0
#define CLK_CAM_DFP_VAD			1
#define CLK_CAM_LARB14			2
#define CLK_CAM				3
#define CLK_CAMTG			4
#define CLK_CAM_SENINF			5
#define CLK_CAMSV1			6
#define CLK_CAMSV2			7
#define CLK_CAMSV3			8
#define CLK_CAM_CCU0			9
#define CLK_CAM_CCU1			10
#define CLK_CAM_MRAW0			11
#define CLK_CAM_FAKE_ENG		12
#define CLK_CAM_CCU_GALS		13
#define CLK_CAM2MM_GALS			14
#define CLK_CAM_NR_CLK			15

/* CAMSYS_RAWA */

#define CLK_CAM_RAWA_LARBX_RAWA		0
#define CLK_CAM_RAWA			1
#define CLK_CAM_RAWA_CAMTG_RAWA		2
#define CLK_CAM_RAWA_NR_CLK		3

/* CAMSYS_RAWB */

#define CLK_CAM_RAWB_LARBX_RAWB		0
#define CLK_CAM_RAWB			1
#define CLK_CAM_RAWB_CAMTG_RAWB		2
#define CLK_CAM_RAWB_NR_CLK		3

/* MDPSYS */

#define CLK_MDP_RDMA0			0
#define CLK_MDP_TDSHP0			1
#define CLK_MDP_IMG_DL_ASYNC0		2
#define CLK_MDP_IMG_DL_ASYNC1		3
#define CLK_MDP_DISP_RDMA		4
#define CLK_MDP_HMS			5
#define CLK_MDP_SMI0			6
#define CLK_MDP_APB_BUS			7
#define CLK_MDP_WROT0			8
#define CLK_MDP_RSZ0			9
#define CLK_MDP_HDR0			10
#define CLK_MDP_MUTEX0			11
#define CLK_MDP_WROT1			12
#define CLK_MDP_RSZ1			13
#define CLK_MDP_FAKE_ENG0		14
#define CLK_MDP_AAL0			15
#define CLK_MDP_DISP_WDMA		16
#define CLK_MDP_COLOR			17
#define CLK_MDP_IMG_DL_ASYNC2		18
#define CLK_MDP_IMG_DL_RELAY0_ASYNC0	19
#define CLK_MDP_IMG_DL_RELAY1_ASYNC1	20
#define CLK_MDP_IMG_DL_RELAY2_ASYNC2	21
#define CLK_MDP_NR_CLK			22

/* IPESYS */

#define CLK_IPE_LARB19			0
#define CLK_IPE_LARB20			1
#define CLK_IPE_SMI_SUBCOM		2
#define CLK_IPE_FD			3
#define CLK_IPE_FE			4
#define CLK_IPE_RSC			5
#define CLK_IPE_DPE			6
#define CLK_IPE_GALS_IPE		7
#define CLK_IPE_NR_CLK			8

#endif /* _DT_BINDINGS_CLK_MT8169_H */
