// SPDX-FileCopyrightText: © 2022 Foundation Devices, Inc. <hello@foundationdevices.com>
// SPDX-License-Identifier: GPL-3.0-or-later
//

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_LARGE_ICON_SUCCESS
#define LV_ATTRIBUTE_IMG_LARGE_ICON_SUCCESS
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_LARGE_ICON_SUCCESS uint8_t LARGE_ICON_SUCCESS_map[] = {
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 0*/
  0xff, 0xff, 0xff, 0x22, 	/*Color of index 1*/
  0xfe, 0xfe, 0xfe, 0x94, 	/*Color of index 2*/
  0xfe, 0xfe, 0xfe, 0xfb, 	/*Color of index 3*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xab, 0xff, 0xba, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xaf, 0xff, 0xff, 0xff, 0xfa, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0xff, 0xff, 0xff, 0xa5, 0x40, 0x5a, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x1b, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0xf4, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0xff, 0xfe, 0x40, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfd, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xff, 0x40, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x0b, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xff, 0xe0, 0x00, 
  0x00, 0x2f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xf8, 0x00, 
  0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xfd, 0x00, 
  0x00, 0xbf, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xfe, 0x00, 
  0x01, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x40, 
  0x03, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 
  0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x0b, 0xff, 0xd0, 
  0x0b, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x80, 0x07, 0xff, 0xf0, 
  0x1f, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xc0, 0x02, 0xff, 0xf4, 
  0x2f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x01, 0xff, 0xf8, 
  0x2f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xbf, 0xff, 0x80, 0x00, 0xbf, 0xf8, 
  0x7f, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x7f, 0xfd, 
  0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xfd, 
  0xbf, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x2f, 0xfe, 
  0xbf, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xbf, 0xff, 0x80, 0x00, 0x00, 0x2f, 0xfe, 
  0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xf0, 0x00, 0x2e, 0x80, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xf0, 0x00, 0xbf, 0xe0, 0x00, 0x01, 0xbf, 0xff, 0x80, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xff, 0xf0, 0x00, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xff, 0xf4, 0x00, 0xff, 0xfe, 0x00, 0x1b, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 
  0xff, 0xf4, 0x00, 0xbf, 0xff, 0x80, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xbf, 0xf4, 0x00, 0x7f, 0xff, 0xe1, 0xbf, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 
  0xbf, 0xf8, 0x00, 0x1f, 0xff, 0xfb, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xfe, 
  0xbf, 0xf8, 0x00, 0x06, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0xfe, 
  0x7f, 0xfc, 0x00, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfd, 
  0x7f, 0xfd, 0x00, 0x00, 0x6f, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfd, 
  0x2f, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xf8, 
  0x2f, 0xff, 0x40, 0x00, 0x06, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf8, 
  0x1f, 0xff, 0x80, 0x00, 0x01, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xf4, 
  0x0b, 0xff, 0xd0, 0x00, 0x00, 0x6f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xe0, 
  0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xd0, 
  0x02, 0xff, 0xf4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xc0, 
  0x01, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x40, 
  0x00, 0xbf, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbf, 0xfe, 0x00, 
  0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xfd, 0x00, 
  0x00, 0x2f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xff, 0xf4, 0x00, 
  0x00, 0x0b, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xff, 0xe0, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0x40, 0x00, 
  0x00, 0x00, 0x7f, 0xff, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x01, 0xbf, 0xff, 0xfd, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0xe4, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0xff, 0xff, 0xff, 0xa5, 0x01, 0x5a, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1b, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xaf, 0xff, 0xff, 0xff, 0xfa, 0x40, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xaf, 0xff, 0xea, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t LARGE_ICON_SUCCESS = {
  .header.cf = LV_IMG_CF_INDEXED_2BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 60,
  .header.h = 60,
  .data_size = 917,
  .data = LARGE_ICON_SUCCESS_map,
};
