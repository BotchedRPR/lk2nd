/* SPDX-License-Identifier: BSD-3-Clause */
#ifndef LK2ND_DISPLAY_CONT_SPLASH_H
#define LK2ND_DISPLAY_CONT_SPLASH_H

struct fbcon_config;

bool mdp_read_dma_config(struct fbcon_config *fb);
bool mdp_read_pipe_config(struct fbcon_config *fb);
bool mdp_setup_refresh(struct fbcon_config *fb);
void mdp_enable_autorefresh(struct fbcon_config *fb);
void mdp_set_rgb565(struct fbcon_config *fb);
void mdp_set_xrgb8888(struct fbcon_config *fb);
void mdp_relocate(struct fbcon_config *fb, void *target);

void fb_convert_to_xrgb8888(struct fbcon_config *fb);

#endif /* LK2ND_DISPLAY_CONT_SPLASH_H */
