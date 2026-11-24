#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 movie_detail_fef0(void);
__int64 movie_detail_fef4(void);
__int64 movie_detail_ff40(void);
__int64 movie_detail_ff44(void);
__int64 nn_codec_GetAv1DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetVp9DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_ReleaseAv1DecoderOutputBuffer_plt(void);
__int64 nn_codec_ReleaseVp9DecoderOutputBuffer_plt(void);
void nn_detail_UnexpectedDefaultImpl_plt();
__attribute__((swiftcall)) void movie_detail_fecc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fedc(PSEUDO_X8 x8_);
void __attribute__((noreturn)) movie_detail_fef8();
__attribute__((swiftcall)) void movie_detail_ff1c(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_ff2c(PSEUDO_X8 x8_);
void __attribute__((noreturn)) movie_detail_ff48();
__int64 movie_video_decoder_types_fad0(void);
__int64 movie_video_decoder_types_fad4(void);
__int64 movie_video_decoder_types_fb20(void);
__int64 movie_video_decoder_types_fb24(void);
__int64 movie_video_decoder_types_fd00(void);
__int64 movie_video_decoder_types_fd04(void);
__int64 nn_codec_FinalizeAv1Decoder_plt(void);
__int64 nn_codec_FinalizeVp9Decoder_plt(void);
__int64 nn_codec_GetAv1DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp9DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_RegisterAv1DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp9DecoderBuffer_plt(void);
void nn_diag_detail_AbortImpl_plt_82f30();
__attribute__((swiftcall)) void movie_detail_faac(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fabc(PSEUDO_X8 x8_);
void __attribute__((noreturn)) movie_detail_fad8();
__attribute__((swiftcall)) void movie_detail_fafc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fb0c(PSEUDO_X8 x8_);
void __attribute__((noreturn)) movie_detail_fb28();
__attribute__((swiftcall)) void movie_detail_fcdc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fcec(PSEUDO_X8 x8_);
void __attribute__((noreturn)) movie_detail_fd08();

__attribute__((swiftcall)) void movie_detail_faac(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_video_decoder_types_fad0();
    return;
  }
  if (a1 != 1) {
    movie_detail_fad8();
  }
  {
    nn_codec_FinalizeVp9Decoder_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_detail_fabc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_video_decoder_types_fad4();
    return;
  }
  if (a1 != 3) {
    movie_detail_fad8();
  }
  {
    nn_codec_FinalizeAv1Decoder_plt();
    return;
  }
}

void __attribute__((noreturn)) movie_detail_fad8()
{
  nn_diag_detail_AbortImpl_plt_82f30();
}

__attribute__((swiftcall)) void movie_detail_fafc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_video_decoder_types_fb20();
    return;
  }
  if (a1 != 1) {
    movie_detail_fb28();
  }
  {
    nn_codec_RegisterVp9DecoderBuffer_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_detail_fb0c(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_video_decoder_types_fb24();
    return;
  }
  if (a1 != 3) {
    movie_detail_fb28();
  }
  {
    nn_codec_RegisterAv1DecoderBuffer_plt();
    return;
  }
}

void __attribute__((noreturn)) movie_detail_fb28()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

__attribute__((swiftcall)) void movie_detail_fcdc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_video_decoder_types_fd00();
    return;
  }
  if (a1 != 1) {
    movie_detail_fd08();
  }
  {
    nn_codec_GetVp9DecoderSubmissionReadyEvent_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_detail_fcec(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_video_decoder_types_fd04();
    return;
  }
  if (a1 != 3) {
    movie_detail_fd08();
  }
  {
    nn_codec_GetAv1DecoderSubmissionReadyEvent_plt();
    return;
  }
}

void __attribute__((noreturn)) movie_detail_fd08()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

__attribute__((swiftcall)) void movie_detail_fecc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_detail_fef0();
    return;
  }
  if (a1 != 1) {
    movie_detail_fef8();
  }
  {
    nn_codec_ReleaseVp9DecoderOutputBuffer_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_detail_fedc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_detail_fef4();
    return;
  }
  if (a1 != 3) {
    movie_detail_fef8();
  }
  {
    nn_codec_ReleaseAv1DecoderOutputBuffer_plt();
    return;
  }
}

void __attribute__((noreturn)) movie_detail_fef8()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

__attribute__((swiftcall)) void movie_detail_ff1c(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_detail_ff40();
    return;
  }
  if (a1 != 1) {
    movie_detail_ff48();
  }
  {
    nn_codec_GetVp9DecoderOutputBufferProperties_plt();
    return;
  }
}

__attribute__((swiftcall)) void movie_detail_ff2c(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 4) {
    movie_detail_ff44();
    return;
  }
  if (a1 != 3) {
    movie_detail_ff48();
  }
  {
    nn_codec_GetAv1DecoderOutputBufferProperties_plt();
    return;
  }
}

void __attribute__((noreturn)) movie_detail_ff48()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

#pragma GCC visibility pop
