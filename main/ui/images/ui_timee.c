#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SDKCONFIG
#define LV_ATTRIBUTE_IMG_SDKCONFIG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SDKCONFIG uint8_t sdkconfig_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x09, 0x7e, 0x20, 0x7e, 0x36, 0x7e, 0x3d, 0x7e, 0x3e, 0x7e, 0x36, 0x7e, 0x20, 0x5e, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x09, 0x7e, 0x2e, 0x7e, 0x75, 0x7e, 0xaf, 0x7e, 0xe6, 0x7e, 0xfa, 0x7e, 0xfa, 0x7e, 0xe8, 0x7e, 0xb3, 0x7e, 0x75, 0x7e, 0x2e, 0x5e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x03, 0x7e, 0x77, 0x7e, 0xcd, 0x7e, 0xfa, 0x7e, 0xfb, 0x7e, 0xc7, 0x7e, 0xaf, 0x7e, 0xaf, 0x7e, 0xca, 0x7e, 0xfb, 0x7e, 0xfa, 0x7e, 0xcd, 0x7e, 0x76, 0x7d, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x9e, 0x02, 0x7e, 0x6a, 0x7e, 0xec, 0x7e, 0xfa, 0x7e, 0xb9, 0x7e, 0x59, 0x7e, 0x2a, 0x7e, 0x20, 0x7e, 0x20, 0x7e, 0x2a, 0x7e, 0x59, 0x7e, 0xb2, 0x7e, 0xf8, 0x7e, 0xeb, 0x7e, 0x69, 0x7f, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x5e, 0x04, 0x7e, 0x77, 0x7e, 0xec, 0x7e, 0xd6, 0x7e, 0x59, 0x9e, 0x04, 0x00, 0x00, 0x7e, 0x31, 0x7e, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7d, 0x06, 0x7e, 0x63, 0x7e, 0xd7, 0x7e, 0xed, 0x7e, 0x79, 0x7e, 0x09, 0x00, 0x00, 
  0x00, 0x00, 0x7e, 0x2e, 0x7e, 0xcd, 0x7e, 0xf8, 0x7e, 0x64, 0x1e, 0x02, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xd9, 0x7e, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x02, 0x7e, 0x5a, 0x7e, 0xf9, 0x7e, 0xcd, 0x7e, 0x2f, 0x00, 0x00, 
  0x7e, 0x0d, 0x7e, 0x75, 0x7e, 0xfa, 0x7e, 0xae, 0x7e, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xff, 0x7e, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x05, 0x7e, 0xb5, 0x7e, 0xfa, 0x7e, 0x75, 0x7e, 0x09, 
  0x7e, 0x21, 0x7e, 0xb4, 0x7e, 0xfb, 0x7e, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xff, 0x7e, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x56, 0x7e, 0xf8, 0x7e, 0xb0, 0x7e, 0x21, 
  0x7e, 0x36, 0x7e, 0xe7, 0x7e, 0xcd, 0x7e, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xff, 0x7e, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x2a, 0x7e, 0xc8, 0x7e, 0xe6, 0x7e, 0x36, 
  0x7e, 0x3e, 0x7e, 0xfa, 0x7e, 0xb3, 0x7e, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xff, 0x7e, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x21, 0x7e, 0xb4, 0x7e, 0xfa, 0x7e, 0x3d, 
  0x7e, 0x3d, 0x7e, 0xfa, 0x7e, 0xb0, 0x7e, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xff, 0x7e, 0xc9, 0x7e, 0x34, 0x7d, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x20, 0x7e, 0xaf, 0x7e, 0xfa, 0x7e, 0x3e, 
  0x7e, 0x36, 0x7e, 0xe5, 0x7e, 0xc8, 0x7e, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0xb3, 0x7e, 0xee, 0x7e, 0xca, 0x7e, 0x72, 0x7f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x29, 0x7e, 0xc9, 0x7e, 0xe8, 0x7e, 0x36, 
  0x7e, 0x20, 0x7e, 0xaf, 0x7e, 0xfb, 0x7e, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x05, 0x7e, 0x42, 0x7e, 0xb3, 0x7e, 0xeb, 0x7e, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x56, 0x7e, 0xf9, 0x7e, 0xb4, 0x7e, 0x21, 
  0x7d, 0x09, 0x7e, 0x75, 0x7e, 0xfa, 0x7e, 0xb5, 0x9e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x19, 0x7e, 0x69, 0x7e, 0x64, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x05, 0x7e, 0xad, 0x7e, 0xfa, 0x7e, 0x76, 0x5e, 0x0d, 
  0x00, 0x00, 0x7e, 0x2e, 0x7e, 0xcd, 0x7e, 0xf9, 0x7e, 0x5a, 0x9e, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x02, 0x7e, 0x64, 0x7e, 0xf7, 0x7e, 0xcd, 0x7e, 0x2f, 0x00, 0x00, 
  0x00, 0x00, 0x7e, 0x09, 0x7e, 0x79, 0x7e, 0xec, 0x7e, 0xd6, 0x7e, 0x62, 0x3d, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5e, 0x05, 0x7e, 0x58, 0x7e, 0xd6, 0x7e, 0xec, 0x7e, 0x78, 0x5a, 0x05, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1d, 0x03, 0x7e, 0x6a, 0x7e, 0xec, 0x7e, 0xf8, 0x7e, 0xad, 0x7e, 0x57, 0x7e, 0x2a, 0x7e, 0x20, 0x7e, 0x1f, 0x7e, 0x29, 0x7e, 0x57, 0x7e, 0xb5, 0x7e, 0xf9, 0x7e, 0xed, 0x7e, 0x6a, 0x1e, 0x02, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0x02, 0x7e, 0x78, 0x7e, 0xcd, 0x7e, 0xfa, 0x7e, 0xfb, 0x7e, 0xc9, 0x7e, 0xaf, 0x7e, 0xaf, 0x7e, 0xc6, 0x7e, 0xfb, 0x7e, 0xfa, 0x7e, 0xce, 0x7e, 0x79, 0x7f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x05, 0x7e, 0x2e, 0x7e, 0x75, 0x7e, 0xb5, 0x7e, 0xe8, 0x7e, 0xfb, 0x7e, 0xfb, 0x7e, 0xe6, 0x7e, 0xb0, 0x7e, 0x76, 0x7e, 0x2e, 0x5e, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x0d, 0x7e, 0x21, 0x7e, 0x36, 0x7e, 0x3e, 0x7e, 0x3d, 0x7e, 0x36, 0x7e, 0x21, 0x7e, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x5f, 0x09, 0xed, 0x5f, 0x20, 0xed, 0x5f, 0x36, 0xed, 0x67, 0x3d, 0xed, 0x5f, 0x3e, 0xed, 0x5f, 0x36, 0xed, 0x67, 0x20, 0xec, 0x57, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x5f, 0x09, 0xee, 0x5f, 0x2e, 0xed, 0x67, 0x75, 0xed, 0x5f, 0xaf, 0xed, 0x5f, 0xe6, 0xed, 0x67, 0xfa, 0xed, 0x67, 0xfa, 0xee, 0x5f, 0xe8, 0xed, 0x5f, 0xb3, 0xed, 0x67, 0x75, 0xee, 0x5f, 0x2e, 0xf0, 0x47, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf5, 0x5f, 0x03, 0xed, 0x5f, 0x77, 0xed, 0x5f, 0xcd, 0xed, 0x67, 0xfa, 0xed, 0x5f, 0xfb, 0xee, 0x67, 0xc7, 0xed, 0x67, 0xaf, 0xee, 0x67, 0xaf, 0xed, 0x67, 0xca, 0xed, 0x5f, 0xfb, 0xed, 0x67, 0xfa, 0xed, 0x67, 0xcd, 0xed, 0x5f, 0x76, 0xeb, 0x5f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x87, 0x02, 0xed, 0x5f, 0x6a, 0xed, 0x67, 0xec, 0xed, 0x67, 0xfa, 0xee, 0x67, 0xb9, 0xee, 0x67, 0x59, 0xee, 0x5f, 0x2a, 0xcd, 0x5f, 0x20, 0xee, 0x5f, 0x20, 0xee, 0x5f, 0x2a, 0xed, 0x67, 0x59, 0xed, 0x67, 0xb2, 0xee, 0x67, 0xf8, 0xed, 0x67, 0xeb, 0xed, 0x67, 0x69, 0xf5, 0x5f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xf0, 0x47, 0x04, 0xed, 0x67, 0x77, 0xed, 0x67, 0xec, 0xed, 0x67, 0xd6, 0xee, 0x67, 0x59, 0xf0, 0x87, 0x04, 0x00, 0x00, 0x00, 0xed, 0x5f, 0x31, 0xed, 0x67, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x5f, 0x06, 0xed, 0x67, 0x63, 0xed, 0x67, 0xd7, 0xee, 0x5f, 0xed, 0xed, 0x67, 0x79, 0xee, 0x5f, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xed, 0x5f, 0x2e, 0xed, 0x67, 0xcd, 0xed, 0x67, 0xf8, 0xed, 0x67, 0x64, 0xf0, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0xd9, 0xee, 0x5f, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x07, 0x02, 0xed, 0x5f, 0x5a, 0xee, 0x67, 0xf9, 0xed, 0x67, 0xcd, 0xee, 0x67, 0x2f, 0x00, 0x00, 0x00, 
  0xef, 0x67, 0x0d, 0xed, 0x67, 0x75, 0xed, 0x67, 0xfa, 0xed, 0x5f, 0xae, 0xf0, 0x5f, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0xff, 0xed, 0x5f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x6f, 0x05, 0xed, 0x67, 0xb5, 0xed, 0x67, 0xfa, 0xed, 0x67, 0x75, 0xee, 0x5f, 0x09, 
  0xcd, 0x67, 0x21, 0xed, 0x5f, 0xb4, 0xee, 0x67, 0xfb, 0xed, 0x5f, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0xff, 0xed, 0x5f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x5f, 0x56, 0xed, 0x67, 0xf8, 0xed, 0x5f, 0xb0, 0xce, 0x67, 0x21, 
  0xed, 0x5f, 0x36, 0xed, 0x67, 0xe7, 0xed, 0x67, 0xcd, 0xed, 0x5f, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0xff, 0xed, 0x5f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x5f, 0x2a, 0xed, 0x67, 0xc8, 0xed, 0x5f, 0xe6, 0xed, 0x5f, 0x36, 
  0xed, 0x5f, 0x3e, 0xed, 0x67, 0xfa, 0xed, 0x67, 0xb3, 0xed, 0x67, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0xff, 0xed, 0x5f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x67, 0x21, 0xed, 0x67, 0xb4, 0xed, 0x67, 0xfa, 0xed, 0x67, 0x3d, 
  0xee, 0x67, 0x3d, 0xed, 0x67, 0xfa, 0xed, 0x5f, 0xb0, 0xed, 0x5f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0xff, 0xed, 0x67, 0xc9, 0xee, 0x5f, 0x34, 0xeb, 0x5f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0x20, 0xee, 0x67, 0xaf, 0xed, 0x67, 0xfa, 0xed, 0x5f, 0x3e, 
  0xed, 0x5f, 0x36, 0xed, 0x67, 0xe5, 0xed, 0x67, 0xc8, 0xed, 0x5f, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x5f, 0xb3, 0xed, 0x67, 0xee, 0xed, 0x67, 0xca, 0xed, 0x67, 0x72, 0xf5, 0x5f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0x29, 0xed, 0x67, 0xc9, 0xed, 0x5f, 0xe8, 0xee, 0x5f, 0x36, 
  0xed, 0x67, 0x20, 0xed, 0x67, 0xaf, 0xed, 0x5f, 0xfb, 0xed, 0x5f, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x6f, 0x05, 0xee, 0x67, 0x42, 0xee, 0x67, 0xb3, 0xed, 0x5f, 0xeb, 0xed, 0x67, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x67, 0x56, 0xee, 0x67, 0xf9, 0xee, 0x67, 0xb4, 0xed, 0x67, 0x21, 
  0xeb, 0x5f, 0x09, 0xed, 0x67, 0x75, 0xed, 0x67, 0xfa, 0xed, 0x67, 0xb5, 0xf0, 0x87, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x67, 0x19, 0xee, 0x67, 0x69, 0xed, 0x67, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x6f, 0x05, 0xed, 0x5f, 0xad, 0xed, 0x67, 0xfa, 0xee, 0x5f, 0x76, 0xec, 0x57, 0x0d, 
  0x00, 0x00, 0x00, 0xed, 0x5f, 0x2e, 0xed, 0x5f, 0xcd, 0xed, 0x67, 0xf9, 0xed, 0x5f, 0x5a, 0xf0, 0x87, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x87, 0x02, 0xed, 0x67, 0x64, 0xed, 0x67, 0xf7, 0xed, 0x67, 0xcd, 0xee, 0x67, 0x2f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xee, 0x5f, 0x09, 0xed, 0x5f, 0x79, 0xee, 0x67, 0xec, 0xed, 0x67, 0xd6, 0xee, 0x5f, 0x62, 0xeb, 0x2f, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x37, 0x05, 0xed, 0x67, 0x58, 0xed, 0x67, 0xd6, 0xed, 0x67, 0xec, 0xed, 0x5f, 0x78, 0x6d, 0x36, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x07, 0x03, 0xee, 0x5f, 0x6a, 0xee, 0x67, 0xec, 0xed, 0x67, 0xf8, 0xed, 0x5f, 0xad, 0xed, 0x5f, 0x57, 0xcd, 0x5f, 0x2a, 0xcd, 0x5f, 0x20, 0xed, 0x5f, 0x1f, 0xed, 0x67, 0x29, 0xed, 0x5f, 0x57, 0xed, 0x67, 0xb5, 0xed, 0x67, 0xf9, 0xed, 0x5f, 0xed, 0xee, 0x5f, 0x6a, 0xf0, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x87, 0x02, 0xed, 0x5f, 0x78, 0xed, 0x67, 0xcd, 0xed, 0x67, 0xfa, 0xed, 0x5f, 0xfb, 0xee, 0x67, 0xc9, 0xed, 0x67, 0xaf, 0xed, 0x67, 0xaf, 0xee, 0x5f, 0xc6, 0xed, 0x5f, 0xfb, 0xed, 0x67, 0xfa, 0xed, 0x67, 0xce, 0xed, 0x67, 0x79, 0xf5, 0x5f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xed, 0x6f, 0x05, 0xed, 0x5f, 0x2e, 0xed, 0x67, 0x75, 0xed, 0x67, 0xb5, 0xed, 0x5f, 0xe8, 0xed, 0x5f, 0xfb, 0xed, 0x5f, 0xfb, 0xed, 0x67, 0xe6, 0xed, 0x5f, 0xb0, 0xed, 0x5f, 0x76, 0xed, 0x5f, 0x2e, 0x4d, 0x57, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x67, 0x0d, 0xee, 0x67, 0x21, 0xee, 0x67, 0x36, 0xed, 0x5f, 0x3e, 0xed, 0x67, 0x3d, 0xee, 0x5f, 0x36, 0xee, 0x67, 0x21, 0xee, 0x5f, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x2b, 0x09, 0x5f, 0xed, 0x20, 0x5f, 0xed, 0x36, 0x67, 0xed, 0x3d, 0x5f, 0xed, 0x3e, 0x5f, 0xed, 0x36, 0x67, 0xed, 0x20, 0x57, 0xec, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xee, 0x09, 0x5f, 0xee, 0x2e, 0x67, 0xed, 0x75, 0x5f, 0xed, 0xaf, 0x5f, 0xed, 0xe6, 0x67, 0xed, 0xfa, 0x67, 0xed, 0xfa, 0x5f, 0xee, 0xe8, 0x5f, 0xed, 0xb3, 0x67, 0xed, 0x75, 0x5f, 0xee, 0x2e, 0x47, 0xf0, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xf5, 0x03, 0x5f, 0xed, 0x77, 0x5f, 0xed, 0xcd, 0x67, 0xed, 0xfa, 0x5f, 0xed, 0xfb, 0x67, 0xee, 0xc7, 0x67, 0xed, 0xaf, 0x67, 0xee, 0xaf, 0x67, 0xed, 0xca, 0x5f, 0xed, 0xfb, 0x67, 0xed, 0xfa, 0x67, 0xed, 0xcd, 0x5f, 0xed, 0x76, 0x5f, 0xeb, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0xf0, 0x02, 0x5f, 0xed, 0x6a, 0x67, 0xed, 0xec, 0x67, 0xed, 0xfa, 0x67, 0xee, 0xb9, 0x67, 0xee, 0x59, 0x5f, 0xee, 0x2a, 0x5f, 0xcd, 0x20, 0x5f, 0xee, 0x20, 0x5f, 0xee, 0x2a, 0x67, 0xed, 0x59, 0x67, 0xed, 0xb2, 0x67, 0xee, 0xf8, 0x67, 0xed, 0xeb, 0x67, 0xed, 0x69, 0x5f, 0xf5, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x47, 0xf0, 0x04, 0x67, 0xed, 0x77, 0x67, 0xed, 0xec, 0x67, 0xed, 0xd6, 0x67, 0xee, 0x59, 0x87, 0xf0, 0x04, 0x00, 0x00, 0x00, 0x5f, 0xed, 0x31, 0x67, 0xed, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xeb, 0x06, 0x67, 0xed, 0x63, 0x67, 0xed, 0xd7, 0x5f, 0xee, 0xed, 0x67, 0xed, 0x79, 0x5f, 0xee, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5f, 0xed, 0x2e, 0x67, 0xed, 0xcd, 0x67, 0xed, 0xf8, 0x67, 0xed, 0x64, 0x07, 0xf0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0xd9, 0x5f, 0xee, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x02, 0x5f, 0xed, 0x5a, 0x67, 0xee, 0xf9, 0x67, 0xed, 0xcd, 0x67, 0xee, 0x2f, 0x00, 0x00, 0x00, 
  0x67, 0xef, 0x0d, 0x67, 0xed, 0x75, 0x67, 0xed, 0xfa, 0x5f, 0xed, 0xae, 0x5f, 0xf0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0xff, 0x5f, 0xed, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xed, 0x05, 0x67, 0xed, 0xb5, 0x67, 0xed, 0xfa, 0x67, 0xed, 0x75, 0x5f, 0xee, 0x09, 
  0x67, 0xcd, 0x21, 0x5f, 0xed, 0xb4, 0x67, 0xee, 0xfb, 0x5f, 0xed, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0xff, 0x5f, 0xed, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xed, 0x56, 0x67, 0xed, 0xf8, 0x5f, 0xed, 0xb0, 0x67, 0xce, 0x21, 
  0x5f, 0xed, 0x36, 0x67, 0xed, 0xe7, 0x67, 0xed, 0xcd, 0x5f, 0xed, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0xff, 0x5f, 0xed, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xee, 0x2a, 0x67, 0xed, 0xc8, 0x5f, 0xed, 0xe6, 0x5f, 0xed, 0x36, 
  0x5f, 0xed, 0x3e, 0x67, 0xed, 0xfa, 0x67, 0xed, 0xb3, 0x67, 0xed, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0xff, 0x5f, 0xed, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xce, 0x21, 0x67, 0xed, 0xb4, 0x67, 0xed, 0xfa, 0x67, 0xed, 0x3d, 
  0x67, 0xee, 0x3d, 0x67, 0xed, 0xfa, 0x5f, 0xed, 0xb0, 0x5f, 0xed, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0xff, 0x67, 0xed, 0xc9, 0x5f, 0xee, 0x34, 0x5f, 0xeb, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0x20, 0x67, 0xee, 0xaf, 0x67, 0xed, 0xfa, 0x5f, 0xed, 0x3e, 
  0x5f, 0xed, 0x36, 0x67, 0xed, 0xe5, 0x67, 0xed, 0xc8, 0x5f, 0xed, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0xed, 0xb3, 0x67, 0xed, 0xee, 0x67, 0xed, 0xca, 0x67, 0xed, 0x72, 0x5f, 0xf5, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0x29, 0x67, 0xed, 0xc9, 0x5f, 0xed, 0xe8, 0x5f, 0xee, 0x36, 
  0x67, 0xed, 0x20, 0x67, 0xed, 0xaf, 0x5f, 0xed, 0xfb, 0x5f, 0xed, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xed, 0x05, 0x67, 0xee, 0x42, 0x67, 0xee, 0xb3, 0x5f, 0xed, 0xeb, 0x67, 0xed, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xed, 0x56, 0x67, 0xee, 0xf9, 0x67, 0xee, 0xb4, 0x67, 0xed, 0x21, 
  0x5f, 0xeb, 0x09, 0x67, 0xed, 0x75, 0x67, 0xed, 0xfa, 0x67, 0xed, 0xb5, 0x87, 0xf0, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xee, 0x19, 0x67, 0xee, 0x69, 0x67, 0xed, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xed, 0x05, 0x5f, 0xed, 0xad, 0x67, 0xed, 0xfa, 0x5f, 0xee, 0x76, 0x57, 0xec, 0x0d, 
  0x00, 0x00, 0x00, 0x5f, 0xed, 0x2e, 0x5f, 0xed, 0xcd, 0x67, 0xed, 0xf9, 0x5f, 0xed, 0x5a, 0x87, 0xf0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0xf0, 0x02, 0x67, 0xed, 0x64, 0x67, 0xed, 0xf7, 0x67, 0xed, 0xcd, 0x67, 0xee, 0x2f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x5f, 0xee, 0x09, 0x5f, 0xed, 0x79, 0x67, 0xee, 0xec, 0x67, 0xed, 0xd6, 0x5f, 0xee, 0x62, 0x2f, 0xeb, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0xed, 0x05, 0x67, 0xed, 0x58, 0x67, 0xed, 0xd6, 0x67, 0xed, 0xec, 0x5f, 0xed, 0x78, 0x36, 0x6d, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xeb, 0x03, 0x5f, 0xee, 0x6a, 0x67, 0xee, 0xec, 0x67, 0xed, 0xf8, 0x5f, 0xed, 0xad, 0x5f, 0xed, 0x57, 0x5f, 0xcd, 0x2a, 0x5f, 0xcd, 0x20, 0x5f, 0xed, 0x1f, 0x67, 0xed, 0x29, 0x5f, 0xed, 0x57, 0x67, 0xed, 0xb5, 0x67, 0xed, 0xf9, 0x5f, 0xed, 0xed, 0x5f, 0xee, 0x6a, 0x07, 0xf0, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0xf0, 0x02, 0x5f, 0xed, 0x78, 0x67, 0xed, 0xcd, 0x67, 0xed, 0xfa, 0x5f, 0xed, 0xfb, 0x67, 0xee, 0xc9, 0x67, 0xed, 0xaf, 0x67, 0xed, 0xaf, 0x5f, 0xee, 0xc6, 0x5f, 0xed, 0xfb, 0x67, 0xed, 0xfa, 0x67, 0xed, 0xce, 0x67, 0xed, 0x79, 0x5f, 0xf5, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f, 0xed, 0x05, 0x5f, 0xed, 0x2e, 0x67, 0xed, 0x75, 0x67, 0xed, 0xb5, 0x5f, 0xed, 0xe8, 0x5f, 0xed, 0xfb, 0x5f, 0xed, 0xfb, 0x67, 0xed, 0xe6, 0x5f, 0xed, 0xb0, 0x5f, 0xed, 0x76, 0x5f, 0xed, 0x2e, 0x57, 0x4d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0xef, 0x0d, 0x67, 0xee, 0x21, 0x67, 0xee, 0x36, 0x5f, 0xed, 0x3e, 0x67, 0xed, 0x3d, 0x5f, 0xee, 0x36, 0x67, 0xee, 0x21, 0x5f, 0xee, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xe3, 0x55, 0x09, 0x68, 0xff, 0x58, 0x20, 0x68, 0xfa, 0x5a, 0x36, 0x69, 0xfb, 0x5c, 0x3d, 0x6b, 0xfb, 0x5a, 0x3e, 0x68, 0xfa, 0x5a, 0x36, 0x68, 0xff, 0x60, 0x20, 0x62, 0xff, 0x4e, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x71, 0xff, 0x55, 0x09, 0x6f, 0xff, 0x59, 0x2e, 0x6b, 0xfd, 0x5c, 0x75, 0x6a, 0xfc, 0x5a, 0xaf, 0x6a, 0xfd, 0x5b, 0xe6, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfd, 0x5c, 0xfa, 0x6c, 0xfd, 0x5b, 0xe8, 0x6b, 0xfe, 0x5b, 0xb3, 0x6b, 0xfd, 0x5c, 0x75, 0x6f, 0xff, 0x59, 0x2e, 0x80, 0xff, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xaa, 0xff, 0x55, 0x03, 0x69, 0xfd, 0x5a, 0x77, 0x6a, 0xfd, 0x5b, 0xcd, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfd, 0x5b, 0xfb, 0x6c, 0xfe, 0x5c, 0xc7, 0x6a, 0xfe, 0x5c, 0xaf, 0x6c, 0xfe, 0x5c, 0xaf, 0x6b, 0xfe, 0x5c, 0xca, 0x6b, 0xfe, 0x5b, 0xfb, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfe, 0x5c, 0xcd, 0x6a, 0xfd, 0x5b, 0x76, 0x55, 0xff, 0x55, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x80, 0x02, 0x6a, 0xfd, 0x5b, 0x6a, 0x6b, 0xfd, 0x5c, 0xec, 0x6b, 0xfd, 0x5c, 0xfa, 0x6c, 0xfe, 0x5c, 0xb9, 0x6d, 0xfc, 0x5c, 0x59, 0x6d, 0xff, 0x5b, 0x2a, 0x68, 0xf7, 0x58, 0x20, 0x70, 0xff, 0x58, 0x20, 0x6d, 0xff, 0x5b, 0x2a, 0x6a, 0xfc, 0x5c, 0x59, 0x6b, 0xfe, 0x5c, 0xb2, 0x6c, 0xfd, 0x5d, 0xf8, 0x6b, 0xfe, 0x5c, 0xeb, 0x6b, 0xfd, 0x5c, 0x69, 0xaa, 0xff, 0x55, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x40, 0x04, 0x6b, 0xfd, 0x5c, 0x77, 0x6b, 0xfe, 0x5c, 0xec, 0x6b, 0xfe, 0x5c, 0xd6, 0x6d, 0xff, 0x5c, 0x59, 0x80, 0xff, 0x80, 0x04, 0x00, 0x00, 0x00, 0x00, 0x68, 0xfa, 0x58, 0x31, 0x6a, 0xff, 0x5c, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x55, 0x06, 0x6a, 0xff, 0x5d, 0x63, 0x6b, 0xfd, 0x5d, 0xd7, 0x6c, 0xfd, 0x5b, 0xed, 0x6b, 0xfd, 0x5d, 0x79, 0x71, 0xff, 0x55, 0x09, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x69, 0xff, 0x59, 0x2e, 0x6b, 0xfd, 0x5c, 0xcd, 0x6b, 0xfd, 0x5c, 0xf8, 0x6b, 0xff, 0x5c, 0x64, 0x80, 0xff, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfe, 0x5d, 0xd9, 0x6c, 0xfd, 0x5b, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x00, 0x02, 0x69, 0xfc, 0x5b, 0x5a, 0x6c, 0xfd, 0x5c, 0xf9, 0x6b, 0xfe, 0x5c, 0xcd, 0x6d, 0xfa, 0x5c, 0x2f, 0x00, 0x00, 0x00, 0x00, 
  0x76, 0xff, 0x62, 0x0d, 0x6b, 0xfd, 0x5c, 0x75, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfc, 0x5b, 0xae, 0x80, 0xff, 0x55, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfd, 0x5c, 0xff, 0x6b, 0xfd, 0x5b, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0x66, 0x05, 0x6a, 0xfc, 0x5c, 0xb5, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfd, 0x5c, 0x75, 0x71, 0xff, 0x55, 0x09, 
  0x64, 0xf7, 0x5d, 0x21, 0x6a, 0xfc, 0x5b, 0xb4, 0x6c, 0xfd, 0x5c, 0xfb, 0x6b, 0xfc, 0x5a, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfd, 0x5c, 0xff, 0x6b, 0xfd, 0x5b, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfc, 0x59, 0x56, 0x6b, 0xfd, 0x5c, 0xf8, 0x6a, 0xfc, 0x5b, 0xb0, 0x6c, 0xf7, 0x5d, 0x21, 
  0x68, 0xfa, 0x5a, 0x36, 0x6b, 0xfd, 0x5d, 0xe7, 0x6a, 0xfd, 0x5c, 0xcd, 0x6b, 0xff, 0x59, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfd, 0x5c, 0xff, 0x6b, 0xfd, 0x5b, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0xff, 0x5b, 0x2a, 0x6b, 0xfe, 0x5c, 0xc8, 0x6a, 0xfd, 0x5b, 0xe6, 0x68, 0xfa, 0x5a, 0x36, 
  0x6b, 0xfb, 0x5a, 0x3e, 0x6b, 0xfc, 0x5c, 0xfa, 0x6b, 0xfe, 0x5d, 0xb3, 0x69, 0xff, 0x62, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfd, 0x5c, 0xff, 0x6b, 0xfd, 0x5b, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c, 0xf7, 0x5d, 0x21, 0x6a, 0xfc, 0x5c, 0xb4, 0x6b, 0xfd, 0x5c, 0xfa, 0x69, 0xff, 0x5c, 0x3d, 
  0x6d, 0xfb, 0x5c, 0x3d, 0x6b, 0xfc, 0x5c, 0xfa, 0x6b, 0xfc, 0x5b, 0xb0, 0x6b, 0xff, 0x5a, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfd, 0x5c, 0xff, 0x6b, 0xfc, 0x5d, 0xc9, 0x6c, 0xfa, 0x58, 0x34, 0x55, 0xff, 0x55, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0xff, 0x60, 0x20, 0x6c, 0xfe, 0x5c, 0xaf, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfb, 0x5a, 0x3e, 
  0x68, 0xfa, 0x5a, 0x36, 0x6b, 0xfd, 0x5c, 0xe5, 0x6b, 0xfc, 0x5c, 0xc8, 0x67, 0xff, 0x5b, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfc, 0x5b, 0xb3, 0x6b, 0xfd, 0x5c, 0xee, 0x6b, 0xfc, 0x5c, 0xca, 0x69, 0xfd, 0x5c, 0x72, 0xaa, 0xff, 0x55, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6a, 0xff, 0x5d, 0x29, 0x6b, 0xfc, 0x5d, 0xc9, 0x6b, 0xfe, 0x5b, 0xe8, 0x6d, 0xff, 0x5a, 0x36, 
  0x68, 0xff, 0x60, 0x20, 0x6a, 0xfe, 0x5c, 0xaf, 0x6b, 0xfd, 0x5b, 0xfb, 0x68, 0xfc, 0x5a, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0x66, 0x05, 0x70, 0xff, 0x5d, 0x42, 0x6c, 0xfc, 0x5d, 0xb3, 0x6b, 0xfd, 0x5b, 0xeb, 0x6b, 0xfd, 0x5c, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6b, 0xfc, 0x5c, 0x56, 0x6c, 0xfd, 0x5c, 0xf9, 0x6c, 0xfe, 0x5e, 0xb4, 0x64, 0xff, 0x5d, 0x21, 
  0x55, 0xff, 0x55, 0x09, 0x6b, 0xfd, 0x5c, 0x75, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfe, 0x5c, 0xb5, 0x80, 0xff, 0x80, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xff, 0x5c, 0x19, 0x6d, 0xfd, 0x5c, 0x69, 0x6b, 0xfc, 0x5c, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0x66, 0x05, 0x6a, 0xfc, 0x5b, 0xad, 0x6b, 0xfd, 0x5c, 0xfa, 0x6c, 0xfb, 0x5b, 0x76, 0x62, 0xff, 0x4e, 0x0d, 
  0x00, 0x00, 0x00, 0x00, 0x69, 0xff, 0x59, 0x2e, 0x6b, 0xfd, 0x5b, 0xcd, 0x6b, 0xfd, 0x5c, 0xf9, 0x69, 0xfc, 0x5b, 0x5a, 0x80, 0xff, 0x80, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x80, 0x02, 0x6b, 0xfc, 0x5c, 0x64, 0x6a, 0xfe, 0x5c, 0xf7, 0x6a, 0xfd, 0x5c, 0xcd, 0x6d, 0xfa, 0x5c, 0x2f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x71, 0xff, 0x55, 0x09, 0x6b, 0xfd, 0x5b, 0x79, 0x6c, 0xfe, 0x5c, 0xec, 0x6b, 0xfe, 0x5c, 0xd6, 0x6d, 0xff, 0x5b, 0x62, 0x55, 0xff, 0x2a, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0x33, 0x05, 0x6b, 0xff, 0x5d, 0x58, 0x6b, 0xfe, 0x5c, 0xd6, 0x6b, 0xfe, 0x5c, 0xec, 0x6a, 0xfd, 0x5b, 0x78, 0x66, 0xcc, 0x33, 0x05, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xff, 0x00, 0x03, 0x6c, 0xff, 0x5b, 0x6a, 0x6c, 0xfe, 0x5c, 0xec, 0x6b, 0xfc, 0x5c, 0xf8, 0x6a, 0xfc, 0x5b, 0xad, 0x6a, 0xfc, 0x5b, 0x57, 0x67, 0xf9, 0x5b, 0x2a, 0x68, 0xf7, 0x58, 0x20, 0x6b, 0xff, 0x5a, 0x1f, 0x6a, 0xff, 0x5d, 0x29, 0x6a, 0xfc, 0x5b, 0x57, 0x6b, 0xfc, 0x5c, 0xb5, 0x6b, 0xfd, 0x5c, 0xf9, 0x6b, 0xfd, 0x5b, 0xed, 0x6c, 0xff, 0x5b, 0x6a, 0x80, 0xff, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x80, 0x02, 0x68, 0xfd, 0x5b, 0x78, 0x6b, 0xfd, 0x5c, 0xcd, 0x6b, 0xfd, 0x5c, 0xfa, 0x6b, 0xfd, 0x5b, 0xfb, 0x6c, 0xfe, 0x5d, 0xc9, 0x6a, 0xfe, 0x5c, 0xaf, 0x6a, 0xfe, 0x5c, 0xaf, 0x6c, 0xfe, 0x5b, 0xc6, 0x6b, 0xfc, 0x5b, 0xfb, 0x6b, 0xfd, 0x5c, 0xfa, 0x6a, 0xfb, 0x5c, 0xce, 0x6b, 0xfd, 0x5d, 0x79, 0xaa, 0xff, 0x55, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0xff, 0x66, 0x05, 0x69, 0xff, 0x59, 0x2e, 0x6b, 0xfd, 0x5c, 0x75, 0x6b, 0xfe, 0x5d, 0xb5, 0x6b, 0xfd, 0x5b, 0xe8, 0x6b, 0xfd, 0x5b, 0xfb, 0x6b, 0xfd, 0x5b, 0xfb, 0x6a, 0xfd, 0x5c, 0xe6, 0x6a, 0xfe, 0x5b, 0xb0, 0x6a, 0xfb, 0x5b, 0x76, 0x69, 0xff, 0x59, 0x2e, 0x66, 0xe6, 0x4d, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x76, 0xff, 0x62, 0x0d, 0x6c, 0xff, 0x5d, 0x21, 0x6d, 0xfa, 0x5e, 0x36, 0x6b, 0xff, 0x5a, 0x3e, 0x69, 0xff, 0x5c, 0x3d, 0x6d, 0xfa, 0x5a, 0x36, 0x6c, 0xff, 0x5d, 0x21, 0x71, 0xff, 0x55, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t ui_img_timee = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 20,
  .header.h = 20,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = sdkconfig_map,
};
