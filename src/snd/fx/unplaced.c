#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) snd_fx_16f270();
void __attribute__((noreturn)) snd_fx_16f280();
void __attribute__((noreturn)) snd_fx_16f290();
void __attribute__((noreturn)) snd_fx_16f270() { __udf(0x8002u); }

void __attribute__((noreturn)) snd_fx_16f280() { __udf(0x8002u); }

void __attribute__((noreturn)) snd_fx_16f290() { __udf(0x8002u); }

#pragma GCC visibility pop
