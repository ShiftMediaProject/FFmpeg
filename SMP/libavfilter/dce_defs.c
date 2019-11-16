/** libavfilter DCE definitions
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "config.h"
#include "stdint.h"

#include "libavfilter/vf_nlmeans.h"

#if !(ARCH_X86_64)
void ff_atadenoise_filter_row8_serial_sse4(const uint8_t *src, uint8_t *dst,
                                           const uint8_t **srcf,
                                           int w, int mid, int size,
                                           int thra, int thrb) {return;}
#endif
#if !(ARCH_X86_64)
void ff_atadenoise_filter_row8_sse4(const uint8_t *src, uint8_t *dst,
                                    const uint8_t **srcf,
                                    int w, int mid, int size,
                                    int thra, int thrb) {return;}
#endif
#if !(ARCH_X86_64)
void ff_multiply3x3_sse2(int16_t *data[3], ptrdiff_t stride, int w, int h,
                         const int16_t coeff[3][3][8]) {return;}
#endif
void ff_nlmeans_init_aarch64(NLMeansDSPContext *dsp) {return;}
#if !(ARCH_X86_64)
void ff_rgb2yuv_420p10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_420p12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_420p8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_422p10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_422p12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_422p8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_444p10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_444p12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_rgb2yuv_444p8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_stride[3], int16_t *rgb_in[3], ptrdiff_t rgb_stride, int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_ssim_4x4_line_ssse3(const uint8_t *buf, ptrdiff_t buf_stride,
                            const uint8_t *ref, ptrdiff_t ref_stride,
                            int (*sums)[4], int w) {return;}
#endif
#if !(ARCH_X86_64)
void ff_w3fdif_complex_high_sse2(int32_t *work_line,
                                 uint8_t *in_lines_cur[5],
                                 uint8_t *in_lines_adj[5],
                                 const int16_t *coef, int linesize) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_420p10_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_420p12_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_420p8_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_422p10_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_422p12_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_422p8_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_444p10_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_444p12_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2rgb_444p8_sse2(int16_t *rgb_out[3], ptrdiff_t rgb_stride, uint8_t *yuv_in[3], const ptrdiff_t yuv_stride[3], int w, int h, const int16_t coeff[3][3][8], const int16_t yuv_offset[8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p10to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p10to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p10to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p12to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p12to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p12to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p8to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p8to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_420p8to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p10to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p10to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p10to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p12to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p12to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p12to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p8to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p8to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_422p8to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p10to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p10to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p10to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p12to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p12to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p12to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p8to10_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p8to12_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
#if !(ARCH_X86_64)
void ff_yuv2yuv_444p8to8_sse2(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3], uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3], int w, int h, const int16_t yuv2yuv_coeffs[3][3][8], const int16_t yuv_offset[2][8]) {return;}
#endif
