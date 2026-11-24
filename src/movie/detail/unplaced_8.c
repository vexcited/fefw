#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_GetAv1DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetH264DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetVp8DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetVp9DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_ReleaseAv1DecoderOutputBuffer_plt(void);
__int64 nn_codec_ReleaseH264DecoderOutputBuffer_plt(void);
__int64 nn_codec_ReleaseVp8DecoderOutputBuffer_plt(void);
__int64 nn_codec_ReleaseVp9DecoderOutputBuffer_plt(void);
void nn_detail_UnexpectedDefaultImpl_plt();
__attribute__((swiftcall)) void movie_detail_fecc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fedc(PSEUDO_X8 x8_);
__int64 movie_detail_fef0(void);
__int64 movie_detail_fef4(void);
void __attribute__((noreturn)) movie_detail_fef8();
__attribute__((swiftcall)) void movie_detail_ff1c(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_ff2c(PSEUDO_X8 x8_);
__int64 movie_detail_ff40(void);
__int64 movie_detail_ff44(void);
void __attribute__((noreturn)) movie_detail_ff48();
__int64
movie_detail_AudioDecoderImpl_CheckInputBufferAvailableEvent_plt(__int64);
__int64 movie_detail_AudioDecoderImpl_DeallocateCoreDecoder_plt(__int64);
__int64 movie_detail_AudioDecoderImpl_DecodeInputBufferEvent_plt(__int64);
__int64 movie_detail_AudioDecoderImpl_DoConfigure_plt(__int64);
__int64 movie_detail_AudioDecoderImpl_DoInitialize_plt(__int64);
__int64 movie_detail_AudioDecoderImpl_StartAudioDecoderEvent_plt(__int64);
__int64 nn_codec_FinalizeAv1Decoder_plt(void);
__int64 nn_codec_FinalizeH264Decoder_plt(void);
__int64 nn_codec_FinalizeVp8Decoder_plt(void);
__int64 nn_codec_FinalizeVp9Decoder_plt(void);
__int64 nn_codec_GetAv1DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetH264DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp8DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp9DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_RegisterAv1DecoderBuffer_plt(void);
__int64 nn_codec_RegisterH264DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp8DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp9DecoderBuffer_plt(void);
__int64 nn_os_ReceiveMessageQueue_plt(__int64, __int64);
__int64 nn_os_SignalLightEvent_plt(__int64);
__int64 nn_os_SignalSystemEvent_plt(__int64);
void nn_diag_detail_AbortImpl_plt_82f30();
__int64 movie_detail_8ae0(void* this_);
__attribute__((swiftcall)) void movie_detail_faac(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fabc(PSEUDO_X8 x8_);
__int64 movie_detail_fad0(void);
__int64 movie_detail_fad4(void);
void __attribute__((noreturn)) movie_detail_fad8();
__attribute__((swiftcall)) void movie_detail_fafc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fb0c(PSEUDO_X8 x8_);
__int64 movie_detail_fb20(void);
__int64 movie_detail_fb24(void);
void __attribute__((noreturn)) movie_detail_fb28();
__attribute__((swiftcall)) void movie_detail_fcdc(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void movie_detail_fcec(PSEUDO_X8 x8_);
__int64 movie_detail_fd00(void);
__int64 movie_detail_fd04(void);
void __attribute__((noreturn)) movie_detail_fd08();

__int64 movie_detail_8ae0(void* this_)
{
  __int64 result;
  __int64 v3;

  v3 = 0;
  while (1) {
    while (1) {
      while (1) {
        result =
            nn_os_ReceiveMessageQueue_plt((__int64)&v3, (__int64)this_ + 1896);
        if ((int)v3 > 2) {
          break;
        }
        if ((_DWORD)v3 != 0) {
          if ((_DWORD)v3 == 1) {
            if (*((_QWORD*)this_ + 27) != 0) {
              movie_detail_AudioDecoderImpl_DeallocateCoreDecoder_plt(
                  (__int64)this_);
            }
          LABEL_17:
            nn_os_SignalLightEvent_plt((__int64)this_ + 32);
          }
          else {
            if ((_DWORD)v3 != 2) {
              return result;
            }
            movie_detail_AudioDecoderImpl_DoConfigure_plt((__int64)this_);
          }
        }
        else {
          movie_detail_AudioDecoderImpl_DoInitialize_plt((__int64)this_);
        }
      }
      if ((int)v3 > 4) {
        break;
      }
      if ((_DWORD)v3 == 3) {
        movie_detail_AudioDecoderImpl_StartAudioDecoderEvent_plt(
            (__int64)this_);
      }
      else {
        nn_os_SignalSystemEvent_plt((__int64)this_ + 168);
      }
    }
    if ((_DWORD)v3 == 5) {
      *((_DWORD*)this_ + 11) =
          movie_detail_AudioDecoderImpl_DecodeInputBufferEvent_plt(
              (__int64)this_);
      goto LABEL_17;
    }
    if ((_DWORD)v3 != 6) {
      return result;
    }
    movie_detail_AudioDecoderImpl_CheckInputBufferAvailableEvent_plt(
        (__int64)this_);
  }
}

__attribute__((swiftcall)) void movie_detail_faac(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_detail_fad0();
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
    movie_detail_fad4();
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

__int64 movie_detail_fad0(void) { return nn_codec_FinalizeH264Decoder_plt(); }

__int64 movie_detail_fad4(void) { return nn_codec_FinalizeVp8Decoder_plt(); }

void __attribute__((noreturn)) movie_detail_fad8()
{
  nn_diag_detail_AbortImpl_plt_82f30();
}

__attribute__((swiftcall)) void movie_detail_fafc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_detail_fb20();
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
    movie_detail_fb24();
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

__int64 movie_detail_fb20(void)
{
  return nn_codec_RegisterH264DecoderBuffer_plt();
}

__int64 movie_detail_fb24(void)
{
  return nn_codec_RegisterVp8DecoderBuffer_plt();
}

void __attribute__((noreturn)) movie_detail_fb28()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

__attribute__((swiftcall)) void movie_detail_fcdc(PSEUDO_X8 x8_)
{
  int a1 = (int)PSEUDO_X8_VALUE(x8_);
  if (a1 == 0) {
    movie_detail_fd00();
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
    movie_detail_fd04();
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

__int64 movie_detail_fd00(void)
{
  return nn_codec_GetH264DecoderSubmissionReadyEvent_plt();
}

__int64 movie_detail_fd04(void)
{
  return nn_codec_GetVp8DecoderSubmissionReadyEvent_plt();
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

__int64 movie_detail_fef0(void)
{
  return nn_codec_ReleaseH264DecoderOutputBuffer_plt();
}

__int64 movie_detail_fef4(void)
{
  return nn_codec_ReleaseVp8DecoderOutputBuffer_plt();
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

__int64 movie_detail_ff40(void)
{
  return nn_codec_GetH264DecoderOutputBufferProperties_plt();
}

__int64 movie_detail_ff44(void)
{
  return nn_codec_GetVp8DecoderOutputBufferProperties_plt();
}

void __attribute__((noreturn)) movie_detail_ff48()
{
  nn_detail_UnexpectedDefaultImpl_plt();
}

#pragma GCC visibility pop
