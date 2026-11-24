#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FinalizeH264Decoder_plt(void);
__int64 nn_codec_FinalizeVp8Decoder_plt(void);
__int64 nn_codec_GetH264DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp8DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_RegisterH264DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp8DecoderBuffer_plt(void);
__int64 movie_video_decoder_types_fad0();
__int64 movie_video_decoder_types_fad4();
__int64 movie_video_decoder_types_fb20();
__int64 movie_video_decoder_types_fb24();
__int64 movie_video_decoder_types_fd00();
__int64 movie_video_decoder_types_fd04();
void __attribute__((noreturn)) movie_video_decoder_types_fad8();
void __attribute__((noreturn)) movie_video_decoder_types_fb28();
void __attribute__((noreturn)) movie_video_decoder_types_fd08();
__int64 movie_video_decoder_types_fad0_alt1(void);
__int64 movie_video_decoder_types_fad4_alt1(void);
__int64 movie_video_decoder_types_fb20_alt1(void);
__int64 movie_video_decoder_types_fb24_alt1(void);
__int64 movie_video_decoder_types_fd00_alt1(void);
__int64 movie_video_decoder_types_fd04_alt1(void);
__int64 nn_codec_FinalizeAv1Decoder_plt(void);
__int64 nn_codec_FinalizeVp9Decoder_plt(void);
__int64 nn_codec_GetAv1DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp9DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_RegisterAv1DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp9DecoderBuffer_plt(void);
void nn_detail_UnexpectedDefaultImpl_plt();
void nn_diag_detail_AbortImpl_plt_82f30();
__attribute__((swiftcall)) void movie_video_decoder_types_faac(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_video_decoder_types_fabc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_video_decoder_types_fafc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_video_decoder_types_fb0c(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_video_decoder_types_fcdc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_video_decoder_types_fcec(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void movie_video_decoder_types_faac(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_video_decoder_types_fad0_alt1();
    return;
  }
  if (a1 != 1) {
    movie_video_decoder_types_fad8();
  }
  {
    nn_codec_FinalizeVp9Decoder_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_video_decoder_types_fabc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_video_decoder_types_fad4_alt1();
    return;
  }
  if (a1 != 3) {
    movie_video_decoder_types_fad8();
  }
  {
    nn_codec_FinalizeAv1Decoder_plt();
    return;
  }
}

__int64 movie_video_decoder_types_fad0()
{
  return nn_codec_FinalizeH264Decoder_plt();
}

__int64 movie_video_decoder_types_fad4()
{
  return nn_codec_FinalizeVp8Decoder_plt();
}

void __attribute__((noreturn)) movie_video_decoder_types_fad8()
{
  nn_diag_detail_AbortImpl_plt_82f30();
}

__attribute__((swiftcall)) void movie_video_decoder_types_fafc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_video_decoder_types_fb20_alt1();
    return;
  }
  if (a1 != 1) {
    movie_video_decoder_types_fb28();
  }
  {
    nn_codec_RegisterVp9DecoderBuffer_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_video_decoder_types_fb0c(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_video_decoder_types_fb24_alt1();
    return;
  }
  if (a1 != 3) {
    movie_video_decoder_types_fb28();
  }
  {
    nn_codec_RegisterAv1DecoderBuffer_plt();
    return;
  }
}

__int64 movie_video_decoder_types_fb20()
{
  return nn_codec_RegisterH264DecoderBuffer_plt();
}

__int64 movie_video_decoder_types_fb24()
{
  return nn_codec_RegisterVp8DecoderBuffer_plt();
}

void __attribute__((noreturn)) movie_video_decoder_types_fb28()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

__attribute__((swiftcall)) void movie_video_decoder_types_fcdc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_video_decoder_types_fd00_alt1();
    return;
  }
  if (a1 != 1) {
    movie_video_decoder_types_fd08();
  }
  {
    nn_codec_GetVp9DecoderSubmissionReadyEvent_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_video_decoder_types_fcec(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_video_decoder_types_fd04_alt1();
    return;
  }
  if (a1 != 3) {
    movie_video_decoder_types_fd08();
  }
  {
    nn_codec_GetAv1DecoderSubmissionReadyEvent_plt();
    return;
  }
}

__int64 movie_video_decoder_types_fd00()
{
  return nn_codec_GetH264DecoderSubmissionReadyEvent_plt();
}

__int64 movie_video_decoder_types_fd04()
{
  return nn_codec_GetVp8DecoderSubmissionReadyEvent_plt();
}

void __attribute__((noreturn)) movie_video_decoder_types_fd08()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

#pragma GCC visibility pop
