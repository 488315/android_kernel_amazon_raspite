/* SPDX-License-Identifier: GPL-2.0 */
/*
 * mtk-afe-platform-driver.h  --  Mediatek afe platform driver definition
 *
 * Copyright (c) 2016 MediaTek Inc.
 * Author: Garlic Tseng <garlic.tseng@mediatek.com>
 */

#ifndef _MTK_AFE_PLATFORM_DRIVER_H_
#define _MTK_AFE_PLATFORM_DRIVER_H_

#define AFE_PCM_NAME "mtk-afe-pcm"
extern const struct snd_pcm_ops mtk_afe_pcm_ops;
extern const struct snd_soc_component_driver mtk_afe_pcm_platform;

struct mtk_base_afe;
struct snd_pcm;
struct snd_soc_component;
struct snd_soc_pcm_runtime;

snd_pcm_uframes_t mtk_afe_pcm_pointer
			 (struct snd_pcm_substream *substream);
int mtk_afe_pcm_copy_user(struct snd_pcm_substream *substream,
			  int channel, unsigned long hwoff,
			  void *buf, unsigned long bytes);
int mtk_afe_pcm_ack(struct snd_pcm_substream *substream);
int mtk_afe_pcm_new(struct snd_soc_pcm_runtime *rtd);
void mtk_afe_pcm_free(struct snd_pcm *pcm);

int mtk_afe_combine_sub_dai(struct mtk_base_afe *afe);
int mtk_afe_add_sub_dai_control(struct snd_soc_component *component);
unsigned int word_size_align(unsigned int in_size);
#endif

