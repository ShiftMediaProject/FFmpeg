/** Available items from codec list
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
static const AVCodec *codec_list[] = {
    &ff_a64multi_encoder,
    &ff_a64multi5_encoder,
    &ff_alias_pix_encoder,
    &ff_amv_encoder,
    &ff_apng_encoder,
    &ff_asv1_encoder,
    &ff_asv2_encoder,
    &ff_avrp_encoder,
    &ff_avui_encoder,
    &ff_ayuv_encoder,
    &ff_bmp_encoder,
    &ff_cinepak_encoder,
    &ff_cljr_encoder,
    &ff_comfortnoise_encoder,
    &ff_dnxhd_encoder,
    &ff_dpx_encoder,
    &ff_dvvideo_encoder,
    &ff_ffv1_encoder,
    &ff_ffvhuff_encoder,
    &ff_fits_encoder,
    &ff_flashsv_encoder,
    &ff_flashsv2_encoder,
    &ff_flv_encoder,
    &ff_gif_encoder,
    &ff_h261_encoder,
    &ff_h263_encoder,
    &ff_h263p_encoder,
    &ff_huffyuv_encoder,
    &ff_jpeg2000_encoder,
    &ff_jpegls_encoder,
    &ff_ljpeg_encoder,
    &ff_magicyuv_encoder,
    &ff_mjpeg_encoder,
    &ff_mpeg1video_encoder,
    &ff_mpeg2video_encoder,
    &ff_mpeg4_encoder,
    &ff_msmpeg4v2_encoder,
    &ff_msmpeg4v3_encoder,
    &ff_msvideo1_encoder,
    &ff_pam_encoder,
    &ff_pbm_encoder,
    &ff_pcx_encoder,
    &ff_pgm_encoder,
    &ff_pgmyuv_encoder,
    &ff_png_encoder,
    &ff_ppm_encoder,
    &ff_prores_encoder,
    &ff_prores_aw_encoder,
    &ff_prores_ks_encoder,
    &ff_qtrle_encoder,
    &ff_r10k_encoder,
    &ff_r210_encoder,
    &ff_rawvideo_encoder,
    &ff_roq_encoder,
    &ff_rv10_encoder,
    &ff_rv20_encoder,
    &ff_s302m_encoder,
    &ff_sgi_encoder,
    &ff_snow_encoder,
    &ff_sunrast_encoder,
    &ff_svq1_encoder,
    &ff_targa_encoder,
    &ff_tiff_encoder,
    &ff_utvideo_encoder,
    &ff_v210_encoder,
    &ff_v308_encoder,
    &ff_v408_encoder,
    &ff_v410_encoder,
    &ff_vc2_encoder,
    &ff_wrapped_avframe_encoder,
    &ff_wmv1_encoder,
    &ff_wmv2_encoder,
    &ff_xbm_encoder,
    &ff_xface_encoder,
    &ff_xwd_encoder,
    &ff_y41p_encoder,
    &ff_yuv4_encoder,
    &ff_zlib_encoder,
    &ff_zmbv_encoder,
    &ff_aac_encoder,
    &ff_ac3_encoder,
    &ff_ac3_fixed_encoder,
    &ff_alac_encoder,
    &ff_aptx_encoder,
    &ff_aptx_hd_encoder,
    &ff_dca_encoder,
    &ff_eac3_encoder,
    &ff_flac_encoder,
    &ff_g723_1_encoder,
    &ff_mlp_encoder,
    &ff_mp2_encoder,
    &ff_mp2fixed_encoder,
    &ff_nellymoser_encoder,
    &ff_opus_encoder,
    &ff_ra_144_encoder,
    &ff_sbc_encoder,
    &ff_sonic_encoder,
    &ff_sonic_ls_encoder,
    &ff_truehd_encoder,
    &ff_tta_encoder,
    &ff_vorbis_encoder,
    &ff_wavpack_encoder,
    &ff_wmav1_encoder,
    &ff_wmav2_encoder,
    &ff_pcm_alaw_encoder,
    &ff_pcm_dvd_encoder,
    &ff_pcm_f32be_encoder,
    &ff_pcm_f32le_encoder,
    &ff_pcm_f64be_encoder,
    &ff_pcm_f64le_encoder,
    &ff_pcm_mulaw_encoder,
    &ff_pcm_s8_encoder,
    &ff_pcm_s8_planar_encoder,
    &ff_pcm_s16be_encoder,
    &ff_pcm_s16be_planar_encoder,
    &ff_pcm_s16le_encoder,
    &ff_pcm_s16le_planar_encoder,
    &ff_pcm_s24be_encoder,
    &ff_pcm_s24daud_encoder,
    &ff_pcm_s24le_encoder,
    &ff_pcm_s24le_planar_encoder,
    &ff_pcm_s32be_encoder,
    &ff_pcm_s32le_encoder,
    &ff_pcm_s32le_planar_encoder,
    &ff_pcm_s64be_encoder,
    &ff_pcm_s64le_encoder,
    &ff_pcm_u8_encoder,
    &ff_pcm_u16be_encoder,
    &ff_pcm_u16le_encoder,
    &ff_pcm_u24be_encoder,
    &ff_pcm_u24le_encoder,
    &ff_pcm_u32be_encoder,
    &ff_pcm_u32le_encoder,
    &ff_pcm_vidc_encoder,
    &ff_roq_dpcm_encoder,
    &ff_adpcm_adx_encoder,
    &ff_adpcm_g722_encoder,
    &ff_adpcm_g726_encoder,
    &ff_adpcm_g726le_encoder,
    &ff_adpcm_ima_qt_encoder,
    &ff_adpcm_ima_wav_encoder,
    &ff_adpcm_ms_encoder,
    &ff_adpcm_swf_encoder,
    &ff_adpcm_yamaha_encoder,
    &ff_ssa_encoder,
    &ff_ass_encoder,
    &ff_dvbsub_encoder,
    &ff_dvdsub_encoder,
    &ff_movtext_encoder,
    &ff_srt_encoder,
    &ff_subrip_encoder,
    &ff_text_encoder,
    &ff_webvtt_encoder,
    &ff_xsub_encoder,
    &ff_libilbc_encoder,
    &ff_libmp3lame_encoder,
    &ff_libopus_encoder,
    &ff_libspeex_encoder,
    &ff_libtheora_encoder,
    &ff_libvorbis_encoder,
    &ff_libvpx_vp8_encoder,
    &ff_libvpx_vp9_encoder,
    &ff_libx264_encoder,
    &ff_libx264rgb_encoder,
    &ff_libx265_encoder,
    &ff_libxvid_encoder,
    &ff_h264_amf_encoder,
    &ff_h264_nvenc_encoder,
    &ff_h264_qsv_encoder,
    &ff_nvenc_encoder,
    &ff_nvenc_h264_encoder,
    &ff_nvenc_hevc_encoder,
    &ff_hevc_amf_encoder,
    &ff_hevc_nvenc_encoder,
    &ff_hevc_qsv_encoder,
    &ff_mjpeg_qsv_encoder,
    &ff_mpeg2_qsv_encoder,
    &ff_aasc_decoder,
    &ff_aic_decoder,
    &ff_alias_pix_decoder,
    &ff_agm_decoder,
    &ff_amv_decoder,
    &ff_anm_decoder,
    &ff_ansi_decoder,
    &ff_apng_decoder,
    &ff_arbc_decoder,
    &ff_asv1_decoder,
    &ff_asv2_decoder,
    &ff_aura_decoder,
    &ff_aura2_decoder,
    &ff_avrp_decoder,
    &ff_avrn_decoder,
    &ff_avs_decoder,
    &ff_avui_decoder,
    &ff_ayuv_decoder,
    &ff_bethsoftvid_decoder,
    &ff_bfi_decoder,
    &ff_bink_decoder,
    &ff_bitpacked_decoder,
    &ff_bmp_decoder,
    &ff_bmv_video_decoder,
    &ff_brender_pix_decoder,
    &ff_c93_decoder,
    &ff_cavs_decoder,
    &ff_cdgraphics_decoder,
    &ff_cdxl_decoder,
    &ff_cfhd_decoder,
    &ff_cinepak_decoder,
    &ff_clearvideo_decoder,
    &ff_cljr_decoder,
    &ff_cllc_decoder,
    &ff_comfortnoise_decoder,
    &ff_cpia_decoder,
    &ff_cscd_decoder,
    &ff_cyuv_decoder,
    &ff_dds_decoder,
    &ff_dfa_decoder,
    &ff_dirac_decoder,
    &ff_dnxhd_decoder,
    &ff_dpx_decoder,
    &ff_dsicinvideo_decoder,
    &ff_dvaudio_decoder,
    &ff_dvvideo_decoder,
    &ff_dxa_decoder,
    &ff_dxtory_decoder,
    &ff_dxv_decoder,
    &ff_eacmv_decoder,
    &ff_eamad_decoder,
    &ff_eatgq_decoder,
    &ff_eatgv_decoder,
    &ff_eatqi_decoder,
    &ff_eightbps_decoder,
    &ff_eightsvx_exp_decoder,
    &ff_eightsvx_fib_decoder,
    &ff_escape124_decoder,
    &ff_escape130_decoder,
    &ff_exr_decoder,
    &ff_ffv1_decoder,
    &ff_ffvhuff_decoder,
    &ff_fic_decoder,
    &ff_fits_decoder,
    &ff_flashsv_decoder,
    &ff_flashsv2_decoder,
    &ff_flic_decoder,
    &ff_flv_decoder,
    &ff_fmvc_decoder,
    &ff_fourxm_decoder,
    &ff_fraps_decoder,
    &ff_frwu_decoder,
    &ff_g2m_decoder,
    &ff_gdv_decoder,
    &ff_gif_decoder,
    &ff_h261_decoder,
    &ff_h263_decoder,
    &ff_h263i_decoder,
    &ff_h263p_decoder,
    &ff_h264_decoder,
    &ff_h264_qsv_decoder,
    &ff_hap_decoder,
    &ff_hevc_decoder,
    &ff_hevc_qsv_decoder,
    &ff_hnm4_video_decoder,
    &ff_hq_hqa_decoder,
    &ff_hqx_decoder,
    &ff_huffyuv_decoder,
    &ff_hymt_decoder,
    &ff_idcin_decoder,
    &ff_iff_ilbm_decoder,
    &ff_imm4_decoder,
    &ff_imm5_decoder,
    &ff_indeo2_decoder,
    &ff_indeo3_decoder,
    &ff_indeo4_decoder,
    &ff_indeo5_decoder,
    &ff_interplay_video_decoder,
    &ff_jpeg2000_decoder,
    &ff_jpegls_decoder,
    &ff_jv_decoder,
    &ff_kgv1_decoder,
    &ff_kmvc_decoder,
    &ff_lagarith_decoder,
    &ff_loco_decoder,
    &ff_lscr_decoder,
    &ff_m101_decoder,
    &ff_magicyuv_decoder,
    &ff_mdec_decoder,
    &ff_mimic_decoder,
    &ff_mjpeg_decoder,
    &ff_mjpegb_decoder,
    &ff_mmvideo_decoder,
    &ff_motionpixels_decoder,
    &ff_mpeg1video_decoder,
    &ff_mpeg2video_decoder,
    &ff_mpeg4_decoder,
    &ff_mpegvideo_decoder,
    &ff_mpeg2_qsv_decoder,
    &ff_msa1_decoder,
    &ff_mscc_decoder,
    &ff_msmpeg4v1_decoder,
    &ff_msmpeg4v2_decoder,
    &ff_msmpeg4v3_decoder,
    &ff_msrle_decoder,
    &ff_mss1_decoder,
    &ff_mss2_decoder,
    &ff_msvideo1_decoder,
    &ff_mszh_decoder,
    &ff_mts2_decoder,
    &ff_mvc1_decoder,
    &ff_mvc2_decoder,
    &ff_mwsc_decoder,
    &ff_mxpeg_decoder,
    &ff_nuv_decoder,
    &ff_paf_video_decoder,
    &ff_pam_decoder,
    &ff_pbm_decoder,
    &ff_pcx_decoder,
    &ff_pgm_decoder,
    &ff_pgmyuv_decoder,
    &ff_pictor_decoder,
    &ff_pixlet_decoder,
    &ff_png_decoder,
    &ff_ppm_decoder,
    &ff_prores_decoder,
    &ff_prosumer_decoder,
    &ff_psd_decoder,
    &ff_ptx_decoder,
    &ff_qdraw_decoder,
    &ff_qpeg_decoder,
    &ff_qtrle_decoder,
    &ff_r10k_decoder,
    &ff_r210_decoder,
    &ff_rasc_decoder,
    &ff_rawvideo_decoder,
    &ff_rl2_decoder,
    &ff_roq_decoder,
    &ff_rpza_decoder,
    &ff_rscc_decoder,
    &ff_rv10_decoder,
    &ff_rv20_decoder,
    &ff_rv30_decoder,
    &ff_rv40_decoder,
    &ff_s302m_decoder,
    &ff_sanm_decoder,
    &ff_scpr_decoder,
    &ff_screenpresso_decoder,
    &ff_sdx2_dpcm_decoder,
    &ff_sgi_decoder,
    &ff_sgirle_decoder,
    &ff_sheervideo_decoder,
    &ff_smacker_decoder,
    &ff_smc_decoder,
    &ff_smvjpeg_decoder,
    &ff_snow_decoder,
    &ff_sp5x_decoder,
    &ff_speedhq_decoder,
    &ff_srgc_decoder,
    &ff_sunrast_decoder,
    &ff_svq1_decoder,
    &ff_svq3_decoder,
    &ff_targa_decoder,
    &ff_targa_y216_decoder,
    &ff_tdsc_decoder,
    &ff_theora_decoder,
    &ff_thp_decoder,
    &ff_tiertexseqvideo_decoder,
    &ff_tiff_decoder,
    &ff_tmv_decoder,
    &ff_truemotion1_decoder,
    &ff_truemotion2_decoder,
    &ff_truemotion2rt_decoder,
    &ff_tscc_decoder,
    &ff_tscc2_decoder,
    &ff_txd_decoder,
    &ff_ulti_decoder,
    &ff_utvideo_decoder,
    &ff_v210_decoder,
    &ff_v210x_decoder,
    &ff_v308_decoder,
    &ff_v408_decoder,
    &ff_v410_decoder,
    &ff_vb_decoder,
    &ff_vble_decoder,
    &ff_vc1_decoder,
    &ff_vc1image_decoder,
    &ff_vc1_qsv_decoder,
    &ff_vcr1_decoder,
    &ff_vmdvideo_decoder,
    &ff_vmnc_decoder,
    &ff_vp3_decoder,
    &ff_vp4_decoder,
    &ff_vp5_decoder,
    &ff_vp6_decoder,
    &ff_vp6a_decoder,
    &ff_vp6f_decoder,
    &ff_vp7_decoder,
    &ff_vp8_decoder,
    &ff_vp9_decoder,
    &ff_vqa_decoder,
    &ff_webp_decoder,
    &ff_wcmv_decoder,
    &ff_wrapped_avframe_decoder,
    &ff_wmv1_decoder,
    &ff_wmv2_decoder,
    &ff_wmv3_decoder,
    &ff_wmv3image_decoder,
    &ff_wnv1_decoder,
    &ff_xan_wc3_decoder,
    &ff_xan_wc4_decoder,
    &ff_xbm_decoder,
    &ff_xface_decoder,
    &ff_xl_decoder,
    &ff_xpm_decoder,
    &ff_xwd_decoder,
    &ff_y41p_decoder,
    &ff_ylc_decoder,
    &ff_yop_decoder,
    &ff_yuv4_decoder,
    &ff_zero12v_decoder,
    &ff_zerocodec_decoder,
    &ff_zlib_decoder,
    &ff_zmbv_decoder,
    &ff_aac_decoder,
    &ff_aac_fixed_decoder,
    &ff_aac_latm_decoder,
    &ff_ac3_decoder,
    &ff_ac3_fixed_decoder,
    &ff_acelp_kelvin_decoder,
    &ff_alac_decoder,
    &ff_als_decoder,
    &ff_amrnb_decoder,
    &ff_amrwb_decoder,
    &ff_ape_decoder,
    &ff_aptx_decoder,
    &ff_aptx_hd_decoder,
    &ff_atrac1_decoder,
    &ff_atrac3_decoder,
    &ff_atrac3al_decoder,
    &ff_atrac3p_decoder,
    &ff_atrac3pal_decoder,
    &ff_atrac9_decoder,
    &ff_binkaudio_dct_decoder,
    &ff_binkaudio_rdft_decoder,
    &ff_bmv_audio_decoder,
    &ff_cook_decoder,
    &ff_dca_decoder,
    &ff_dolby_e_decoder,
    &ff_dsd_lsbf_decoder,
    &ff_dsd_msbf_decoder,
    &ff_dsd_lsbf_planar_decoder,
    &ff_dsd_msbf_planar_decoder,
    &ff_dsicinaudio_decoder,
    &ff_dss_sp_decoder,
    &ff_dst_decoder,
    &ff_eac3_decoder,
    &ff_evrc_decoder,
    &ff_ffwavesynth_decoder,
    &ff_flac_decoder,
    &ff_g723_1_decoder,
    &ff_g729_decoder,
    &ff_gsm_decoder,
    &ff_gsm_ms_decoder,
    &ff_hcom_decoder,
    &ff_iac_decoder,
    &ff_ilbc_decoder,
    &ff_imc_decoder,
    &ff_interplay_acm_decoder,
    &ff_mace3_decoder,
    &ff_mace6_decoder,
    &ff_metasound_decoder,
    &ff_mlp_decoder,
    &ff_mp1_decoder,
    &ff_mp1float_decoder,
    &ff_mp2_decoder,
    &ff_mp2float_decoder,
    &ff_mp3float_decoder,
    &ff_mp3_decoder,
    &ff_mp3adufloat_decoder,
    &ff_mp3adu_decoder,
    &ff_mp3on4float_decoder,
    &ff_mp3on4_decoder,
    &ff_mpc7_decoder,
    &ff_mpc8_decoder,
    &ff_nellymoser_decoder,
    &ff_on2avc_decoder,
    &ff_opus_decoder,
    &ff_paf_audio_decoder,
    &ff_qcelp_decoder,
    &ff_qdm2_decoder,
    &ff_qdmc_decoder,
    &ff_ra_144_decoder,
    &ff_ra_288_decoder,
    &ff_ralf_decoder,
    &ff_sbc_decoder,
    &ff_shorten_decoder,
    &ff_sipr_decoder,
    &ff_smackaud_decoder,
    &ff_sonic_decoder,
    &ff_tak_decoder,
    &ff_truehd_decoder,
    &ff_truespeech_decoder,
    &ff_tta_decoder,
    &ff_twinvq_decoder,
    &ff_vmdaudio_decoder,
    &ff_vorbis_decoder,
    &ff_wavpack_decoder,
    &ff_wmalossless_decoder,
    &ff_wmapro_decoder,
    &ff_wmav1_decoder,
    &ff_wmav2_decoder,
    &ff_wmavoice_decoder,
    &ff_ws_snd1_decoder,
    &ff_xma1_decoder,
    &ff_xma2_decoder,
    &ff_pcm_alaw_decoder,
    &ff_pcm_bluray_decoder,
    &ff_pcm_dvd_decoder,
    &ff_pcm_f16le_decoder,
    &ff_pcm_f24le_decoder,
    &ff_pcm_f32be_decoder,
    &ff_pcm_f32le_decoder,
    &ff_pcm_f64be_decoder,
    &ff_pcm_f64le_decoder,
    &ff_pcm_lxf_decoder,
    &ff_pcm_mulaw_decoder,
    &ff_pcm_s8_decoder,
    &ff_pcm_s8_planar_decoder,
    &ff_pcm_s16be_decoder,
    &ff_pcm_s16be_planar_decoder,
    &ff_pcm_s16le_decoder,
    &ff_pcm_s16le_planar_decoder,
    &ff_pcm_s24be_decoder,
    &ff_pcm_s24daud_decoder,
    &ff_pcm_s24le_decoder,
    &ff_pcm_s24le_planar_decoder,
    &ff_pcm_s32be_decoder,
    &ff_pcm_s32le_decoder,
    &ff_pcm_s32le_planar_decoder,
    &ff_pcm_s64be_decoder,
    &ff_pcm_s64le_decoder,
    &ff_pcm_u8_decoder,
    &ff_pcm_u16be_decoder,
    &ff_pcm_u16le_decoder,
    &ff_pcm_u24be_decoder,
    &ff_pcm_u24le_decoder,
    &ff_pcm_u32be_decoder,
    &ff_pcm_u32le_decoder,
    &ff_pcm_vidc_decoder,
    &ff_pcm_zork_decoder,
    &ff_gremlin_dpcm_decoder,
    &ff_interplay_dpcm_decoder,
    &ff_roq_dpcm_decoder,
    &ff_sol_dpcm_decoder,
    &ff_xan_dpcm_decoder,
    &ff_adpcm_4xm_decoder,
    &ff_adpcm_adx_decoder,
    &ff_adpcm_afc_decoder,
    &ff_adpcm_agm_decoder,
    &ff_adpcm_aica_decoder,
    &ff_adpcm_ct_decoder,
    &ff_adpcm_dtk_decoder,
    &ff_adpcm_ea_decoder,
    &ff_adpcm_ea_maxis_xa_decoder,
    &ff_adpcm_ea_r1_decoder,
    &ff_adpcm_ea_r2_decoder,
    &ff_adpcm_ea_r3_decoder,
    &ff_adpcm_ea_xas_decoder,
    &ff_adpcm_g722_decoder,
    &ff_adpcm_g726_decoder,
    &ff_adpcm_g726le_decoder,
    &ff_adpcm_ima_amv_decoder,
    &ff_adpcm_ima_apc_decoder,
    &ff_adpcm_ima_dat4_decoder,
    &ff_adpcm_ima_dk3_decoder,
    &ff_adpcm_ima_dk4_decoder,
    &ff_adpcm_ima_ea_eacs_decoder,
    &ff_adpcm_ima_ea_sead_decoder,
    &ff_adpcm_ima_iss_decoder,
    &ff_adpcm_ima_oki_decoder,
    &ff_adpcm_ima_qt_decoder,
    &ff_adpcm_ima_rad_decoder,
    &ff_adpcm_ima_smjpeg_decoder,
    &ff_adpcm_ima_wav_decoder,
    &ff_adpcm_ima_ws_decoder,
    &ff_adpcm_ms_decoder,
    &ff_adpcm_mtaf_decoder,
    &ff_adpcm_psx_decoder,
    &ff_adpcm_sbpro_2_decoder,
    &ff_adpcm_sbpro_3_decoder,
    &ff_adpcm_sbpro_4_decoder,
    &ff_adpcm_swf_decoder,
    &ff_adpcm_thp_decoder,
    &ff_adpcm_thp_le_decoder,
    &ff_adpcm_vima_decoder,
    &ff_adpcm_xa_decoder,
    &ff_adpcm_yamaha_decoder,
    &ff_ssa_decoder,
    &ff_ass_decoder,
    &ff_ccaption_decoder,
    &ff_dvbsub_decoder,
    &ff_dvdsub_decoder,
    &ff_jacosub_decoder,
    &ff_microdvd_decoder,
    &ff_movtext_decoder,
    &ff_mpl2_decoder,
    &ff_pgssub_decoder,
    &ff_pjs_decoder,
    &ff_realtext_decoder,
    &ff_sami_decoder,
    &ff_srt_decoder,
    &ff_stl_decoder,
    &ff_subrip_decoder,
    &ff_subviewer_decoder,
    &ff_subviewer1_decoder,
    &ff_text_decoder,
    &ff_vplayer_decoder,
    &ff_webvtt_decoder,
    &ff_xsub_decoder,
    &ff_libilbc_decoder,
    &ff_libopus_decoder,
    &ff_libspeex_decoder,
    &ff_libvorbis_decoder,
    &ff_libvpx_vp8_decoder,
    &ff_libvpx_vp9_decoder,
    &ff_bintext_decoder,
    &ff_xbin_decoder,
    &ff_idf_decoder,
    &ff_h264_cuvid_decoder,
    &ff_hevc_cuvid_decoder,
    &ff_mjpeg_cuvid_decoder,
    &ff_mjpeg_qsv_decoder,
    &ff_mpeg1_cuvid_decoder,
    &ff_mpeg2_cuvid_decoder,
    &ff_mpeg4_cuvid_decoder,
    &ff_vc1_cuvid_decoder,
    &ff_vp8_cuvid_decoder,
    &ff_vp8_qsv_decoder,
    &ff_vp9_cuvid_decoder,
    &ff_vp9_qsv_decoder,
    NULL };