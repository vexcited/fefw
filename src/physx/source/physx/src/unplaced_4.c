#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
physx_NpArticulationLink_getGlobalPose(PSEUDO_X8, __int64, __int64);
float GameRoutine_1a09fb0(float);
float GameRoutine_1a09fc0(float);
__int64 physx_source_physx_src_2f19f0(__int64 result, __int64 a2);
__attribute__((swiftcall)) void
physx_NpArticulationLink_getGlobalPose_alt1(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void physx_NpScene_getFlags(PSEUDO_X8,
                                                       __int64 result);
__int64 GameRoutine_2d8750(unsigned int, __int64);
__int64 GameRoutine_2d8df0(unsigned int, __int64);
__int64 GameRoutine_2de160(unsigned int);
__int64 GameRoutine_3102c0(_QWORD*);
__int64 GameRoutine_3102e0(__int64*);
__int64 GameRoutine_310380(__int64*);
__int64 GameRoutine_310390(__int64*);
__int64 GameRoutine_3103a0(__int64*, __int64, char);
__int64 GameRoutine_3103c0(__int64*, __int64, char);
__int64 GameRoutine_3103e0(__int64*);
__int64 GameRoutine_3103f0(__int64*);
__int64 GameRoutine_310400(__int64*);
__int64 GameRoutine_310410(__int64*);
__int64 GameRoutine_3104d0(_QWORD*);
__int64 GameRoutine_38df50(__int64 result, unsigned __int8, unsigned __int8,
                           _BYTE*);
__int64 GameRoutine_3d7b70(__int64);
__int64 GameRoutine_3d7b90(__int64);
__int64 GameRoutine_3d7ba0(__int64 result, float);
__int64 PxGetFoundation();
__int64 physx_NpActor_onActorRelease(__int64);
__int64 physx_NpArticulationReducedCoordinate_setGlobalPose(__int64);
__int64 physx_NpArticulationReducedCoordinate_wakeUpInternal(__int64, int, int);
__int64 physx_NpScene_addActorInternal(__int64, __int64, __int64);
__int64 physx_NpScene_addActorsInternal(__int64, _QWORD*, unsigned int,
                                        __int64);
__int64 physx_Sc_BodyCore_setBody2World(__int64 result, __int64);
__int64 physx_Sc_Scene_setCCDContactModifyCallback(__int64 result, __int64);
__int64 physx_Sc_Scene_setCCDMaxPasses(__int64 result, int);
__int64 physx_source_simulationcontroller_src_388740(__int64 result, __int64);
__int64 physx_source_simulationcontroller_src_389eb0(__int64 result, __int64,
                                                     unsigned int);
extern _UNKNOWN* GameData_2135580;
extern _UNKNOWN GameData_1f83c90;
float GameRoutine_1a0a010(float);
float GameRoutine_3d7bb0(__int64);
__int64 physx_source_physx_src_2d8830(__int64 a1, __int64 a2);
float physx_source_physx_src_2d89a0(__int64 a1, __int64 a2);
float physx_source_physx_src_2d8a20(__int64 a1, float a2);
__int64 physx_source_physx_src_2d8b70(__int64 result, int a2, char a3);
__int64 physx_source_physx_src_2d8c20(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_source_physx_src_2d9ca0(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2dccd0(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2dcd30(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2dcda0(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2dcdf0(__int64 a1);
__int64 physx_source_physx_src_2dce00(__int64 result, __int64 a2);
__int64 physx_source_physx_src_2dce60(__int64 a1, int a2);
__int64 physx_source_physx_src_2dceb0(__int64 a1);
__int64 physx_source_physx_src_2dcec0(__int64 result, float a2);
__int64 physx_source_physx_src_2dcf30(__int64 a1, float a2);
float physx_source_physx_src_2dcf80(__int64 a1);
__int64 physx_source_physx_src_2dcf90(__int64 a1);
__int64 physx_source_physx_src_2dd0d0(__int64 a1);
__int64 physx_source_physx_src_2dd130(__int64 a1, __int64 a2, unsigned int a3);
__int64 physx_source_physx_src_2de3d0(__int64 a1, unsigned __int8 a2,
                                      unsigned __int8 a3, _BYTE* a4);
__int64 physx_source_physx_src_2de430(__int64 result, int a2);
__int64 physx_source_physx_src_2de4a0(__int64 result, int a2);
__int64 physx_source_physx_src_2de510(__int64 a1, int a2, float a3);
float physx_source_physx_src_2de5f0(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2de6e0(__int64 result, float a2);
__int64 physx_source_physx_src_2de750(__int64 result, float a2);
__int64 physx_source_physx_src_2de7c0(__int64 result, float a2);
__int64 physx_source_physx_src_2df5b0(__int64 a1);
__int64 physx_source_physx_src_2df680(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4);
__int64 physx_source_physx_src_2f3ef0(__int64 a1);
__int64 physx_source_physx_src_2f3f00(__int64 a1);
__int64 physx_source_physx_src_2f4230(__int64 a1);
__int64 physx_source_physx_src_2f4240(__int64 a1);
__int64 physx_source_physx_src_2f42a0(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2f4300(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2f4360(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2f43c0(__int64 a1, __int64 a2);
__int64 physx_source_physx_src_2f4420(__int64 a1);
__int64 physx_source_physx_src_2f4480(__int64 a1);
__int64 physx_source_physx_src_2f44e0(__int64 a1);
__int64 physx_source_physx_src_2f4540(__int64 a1);
__int64 physx_source_physx_src_2f4ba0(__int64 a1);
__int64 physx_source_physx_src_2f4bb0(__int64 a1, float* a2, char a3);
__attribute__((swiftcall)) void physx_source_physx_src_2f4c10(PSEUDO_X8 x8_,
                                                              __int64 a1);
__int64 physx_source_physx_src_2fa5a0(__int64 a1, float* a2, char a3);
void __attribute__((noreturn)) physx_source_physx_src_2fc130();
__int64 physx_source_physx_src_2fc140(__int64 a1);
void __attribute__((noreturn)) physx_source_physx_src_2fc160();

__int64 physx_source_physx_src_2d8830(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(a1 + 1043) == 1) {
    return GameRoutine_2de160(0xB5Cu);
  }
  if (*(_DWORD*)(a1 + 5788) != 2) {
    return GameRoutine_2d8750(
        0xB63u, (__int64)"PxScene::advance: advance() called illegally! "
                         "advance() needed to be called after fetchCollision()"
                         " and before fetchResult()!!");
  }
  v3 = a1 + 672;
  *(_QWORD*)(a1 + 696) = a2;
  *(_DWORD*)(a1 + 5788) = 3;
  *(_BYTE*)(a1 + 1001) = 1;
  if (a2 != 0) {
    v4 = a1;
    (*(void (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
    a1 = v4;
  }
  v5 = *(_QWORD*)(a1 + 656);
  *(_DWORD*)(a1 + 960) = 1;
  *(_QWORD*)(a1 + 952) = v3;
  v6 = a1;
  *(_QWORD*)(a1 + 944) = v5;
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 672) + 32LL))(v3);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 688) + 144LL))(
      *(_QWORD*)(v6 + 688), v3);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 944) + 144LL))(
      *(_QWORD*)(v6 + 944), v6 + 928);
  return 1;
}

float physx_source_physx_src_2d89a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a1 + 1002) == 1) {
    v2 = PxGetFoundation(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 337,
        "PxScene::setGravity() not allowed while simulation is running. Call "
        "will be ignored."),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    *(_QWORD*)(a1 + 1536) = *(_QWORD*)a2;
    result = *(float*)(a2 + 8);
    *(float*)(a1 + 1544) = result;
  }
  return result;
}

float physx_source_physx_src_2d8a20(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a1 + 1002) == 1) {
    v2 = PxGetFoundation(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 359,
        "PxScene::setBounceThresholdVelocity() not allowed while simulation is "
        "running. Call will be ignored."),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    result = -a2;
    *(float*)(*(_QWORD*)(a1 + 1472) + 120LL) = result;
  }
  return result;
}

__int64 physx_source_physx_src_2d8b70(__int64 result, int a2, char a3)
{
  __int64 v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;

  if (*(_BYTE*)(result + 1002) == 1) {
    v3 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v3 + 88LL))(
        v3, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 423,
        "PxScene::setFlag() not allowed while simulation is running. Call will "
        "be ignored.");
  }
  else {
    v4 = *(_DWORD*)(result + 2340);
    v5 = v4 | a2;
    v6 = v4 & ~a2;
    if ((a3 & 1) != 0) {
      v6 = v5;
    }
    v7 = *(_QWORD*)(result + 1432);
    *(_DWORD*)(result + 2340) = v6;
    *(_BYTE*)(v7 + 2376) = (v6 & 0x40) != 0;
    *(_BYTE*)(v7 + 2377) = (v6 & 0x100) == 0;
  }
  return result;
}

__int64 physx_source_physx_src_2d8c20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;

  if (*(_BYTE*)(a1 + 1002) == 1) {
    v3 = PxGetFoundation();
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v3 + 88LL))(
        v3, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 500,
        "PxScene::addActor() not allowed while simulation is running. Call "
        "will be ignored.");
    return 0;
  }
  else if (*(_QWORD*)(a2 + *((_QWORD*)GameData_2135580 +
                             *(unsigned __int16*)(a2 + 8))) != 0) {
    return GameRoutine_2d8750(
        0x1FAu, (__int64)"PxScene::addActor(): Actor already assigned to a "
                         "scene. Call will be ignored!");
  }
  else {
    return physx_NpScene_addActorInternal(a1, a2, a3);
  }
}

__int64 physx_source_physx_src_2d9ca0(__int64 a1, __int64 a2)
{
  if ((*(_BYTE*)(a2 + 96) & 1) != 0) {
    return physx_NpScene_addActorsInternal(a1, *(_QWORD**)(a2 + 88),
                                           *(_DWORD*)(a2 + 80), a2);
  }
  else {
    return GameRoutine_2d8df0(0x248u,
                              (__int64)"PxScene::addActors(): Provided pruning "
                                       "structure is not valid.");
  }
}

__int64 physx_source_physx_src_2dccd0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return physx_source_simulationcontroller_src_388740(a1 + 1120, a2);
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2352,
      "PxScene::setSimulationEventCallback() not allowed while simulation is "
      "running. Call will be ignored.");
}

__int64 physx_source_physx_src_2dcd30(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(a1 + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2369,
        "PxScene::setContactModifyCallback() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else {
    v4 = *(_QWORD*)(a1 + 1432);
    v5 = *(_QWORD*)(v4 + 640);
    *(_QWORD*)(v4 + 632) = a2;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 240LL))(v5);
  }
}

__int64 physx_source_physx_src_2dcda0(__int64 a1, __int64 a2)
{
  __int64 v2;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return physx_Sc_Scene_setCCDContactModifyCallback(a1 + 1120, a2);
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2386,
      "PxScene::setCCDContactModifyCallback() not allowed while simulation is "
      "running. Call will be ignored.");
}

__int64 physx_source_physx_src_2dcdf0(__int64 a1)
{
  return GameRoutine_3d7b70(a1 + 1120);
}

__int64 physx_source_physx_src_2dce00(__int64 result, __int64 a2)
{
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2403,
        "PxScene::setBroadPhaseCallback() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else {
    *(_QWORD*)(result + 1136) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2dce60(__int64 a1, int a2)
{
  __int64 v2;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return physx_Sc_Scene_setCCDMaxPasses(a1 + 1120, a2);
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2421,
      "PxScene::setCCDMaxPasses() not allowed while simulation is running. "
      "Call will be ignored.");
}

__int64 physx_source_physx_src_2dceb0(__int64 a1)
{
  return GameRoutine_3d7b90(a1 + 1120);
}

__int64 physx_source_physx_src_2dcec0(__int64 result, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2439,
        "PxScene::setCCDMaxSeparation() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else {
    *(float*)(*(_QWORD*)(result + 1472) + 128LL) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2dcf30(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return GameRoutine_3d7ba0(a1 + 1120, a2);
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2457,
      "PxScene::setCCDThreshold() not allowed while simulation is running. "
      "Call will be ignored.");
}

float physx_source_physx_src_2dcf80(__int64 a1)
{

#pragma clang fp contract(off)
  return GameRoutine_3d7bb0(a1 + 1120);
}

__int64 physx_source_physx_src_2dcf90(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 1440) + 384LL) +
                                  72LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 1440) + 384LL));
}

__int64 physx_source_physx_src_2dd0d0(__int64 a1)
{
  __int64 v1;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return (*(__int64 (**)(_QWORD))(
        **(_QWORD**)(*(_QWORD*)(a1 + 1440) + 384LL) + 40LL))(
        *(_QWORD*)(*(_QWORD*)(a1 + 1440) + 384LL));
  }
  v1 = PxGetFoundation();
  (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2523,
      "PxScene::removeBroadPhaseRegion() not allowed while simulation is "
      "running. Call will be ignored.");
  return 0;
}

__int64 physx_source_physx_src_2dd130(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return physx_source_simulationcontroller_src_389eb0(a1 + 1120, a2, a3);
  }
  v3 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v3 + 88LL))(
      v3, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 2538,
      "PxScene::setFilterShaderData() not allowed while simulation is running. "
      "Call will be ignored.");
}

__int64 physx_source_physx_src_2de3d0(__int64 a1, unsigned __int8 a2,
                                      unsigned __int8 a3, _BYTE* a4)
{
  __int64 v4;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return GameRoutine_38df50(a1 + 1120, a2, a3, a4);
  }
  v4 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v4 + 88LL))(
      v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3135,
      "PxScene::setDominanceGroupPair() not allowed while simulation is "
      "running. Call will be ignored.");
}

__int64 physx_source_physx_src_2de430(__int64 result, int a2)
{
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3166,
        "PxScene::setSolverBatchSize() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else {
    *(_DWORD*)(*(_QWORD*)(result + 1472) + 140LL) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2de4a0(__int64 result, int a2)
{
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3184,
        "PxScene::setSolverArticulationBatchSize() not allowed while "
        "simulation is running. Call will be ignored.");
  }
  else {
    *(_DWORD*)(*(_QWORD*)(result + 1472) + 144LL) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2de510(__int64 a1, int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;

  if (*(_BYTE*)(a1 + 1002) == 1) {
    v3 = PxGetFoundation();
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v3 + 88LL))(
        v3, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3205,
        "PxScene::setVisualizationParameter() not allowed while simulation is "
        "running. Call will be ignored.");
    return 0;
  }
  else if (a2 < 28) {
    if (a3 >= 0x0.0p+0f) {
      *(_BYTE*)(a1 + 2896) = 1;
      v5 = *(_QWORD*)(a1 + 1432);
      *(float*)(v5 + 4LL * (unsigned int)a2 + 656) = a3;
      return 1;
    }
    else {
      return GameRoutine_2d8df0(0xC8Au,
                                (__int64)"setVisualizationParameter: value "
                                         "must be larger or equal to 0.");
    }
  }
  else {
    return GameRoutine_2d8df0(
        0xC88u, (__int64)"setVisualizationParameter: parameter out of range.");
  }
}

float physx_source_physx_src_2de5f0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float result;
  __int64 v4;
  int v5;
  int v6;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a1 + 1002) == 1) {
    v2 = PxGetFoundation(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3233,
        "PxScene::setVisualizationCullingBox() not allowed while simulation is "
        "running. Call will be ignored."),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  else {
    v4 = *(_QWORD*)(a1 + 1432);
    *(_QWORD*)(v4 + 768) = *(_QWORD*)a2;
    v5 = *(_DWORD*)(a2 + 12);
    *(_DWORD*)(v4 + 776) = *(_DWORD*)(a2 + 8);
    *(_DWORD*)(v4 + 780) = v5;
    result = *(float*)(a2 + 16);
    v6 = *(_DWORD*)(a2 + 20);
    *(float*)(v4 + 784) = result;
    *(_DWORD*)(v4 + 788) = v6;
  }
  return result;
}

__int64 physx_source_physx_src_2de6e0(__int64 result, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3286,
        "PxScene::setMaxBiasCoefficient() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else {
    *(float*)(*(_QWORD*)(result + 1472) + 96LL) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2de750(__int64 result, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3304,
        "PxScene::setFrictionOffsetThreshold() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else {
    *(float*)(*(_QWORD*)(result + 1472) + 124LL) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2de7c0(__int64 result, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;

  if (*(_BYTE*)(result + 1002) == 1) {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3322,
        "PxScene::setFrictionCorrelationDistance() not allowed while "
        "simulation is running. Call will be ignored.");
  }
  else {
    *(float*)(*(_QWORD*)(result + 1472) + 132LL) = a2;
  }
  return result;
}

__int64 physx_source_physx_src_2df5b0(__int64 a1)
{
  __int64 v1;

  if (*(_BYTE*)(a1 + 1001) != 1) {
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 1488) + 400LL))(
        *(_QWORD*)(a1 + 1488));
  }
  v1 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3700,
      "PxScene::copySoftBodyData() not allowed while simulation is running. "
      "Call will be ignored.");
}

__int64 physx_source_physx_src_2df680(__int64 a1, __int64 a2, __int64 a3,
                                      __int64 a4)
{
  __int64 v4;

  if (*(_BYTE*)(a1 + 1002) == 1) {
    v4 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3718,
        "PxScene::applyParticleBufferData() not allowed while simulation is "
        "running. Call will be ignored.");
  }
  else if (a2 != 0 && a4 != 0) {
    if ((*(_BYTE*)(a1 + 6009) & 1) != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 1488) + 416LL))(
          *(_QWORD*)(a1 + 1488));
    }
    else {
      return GameRoutine_2d8750(
          0xE90u, (__int64)"PxScene::applyParticleBufferData(): it is illegal "
                           "to call this function if the scene is not conf"
                           "igured for direct-GPU access or the direct-GPU API "
                           "has not been initialized yet.");
    }
  }
  else {
    return GameRoutine_2d8750(
        0xE8Au, (__int64)"PxScene::applyParticleBufferData, indices and/or "
                         "flags has to be valid pointer.");
  }
}

__int64 physx_source_physx_src_2f19f0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  float v5;
  float v6;
  __int64 v7;
  double v8;
  float v9;
  __int64 v10;
  float v11;
  __int64 (*v12)(__int64, float, float, float, float, double, float, float);
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 (*v34)(__int64, __int64, float, float, float, float, float, float);
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  __int64 (*v55)(__int64, __int64, float, float, float, float, float, float);
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  bool v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
  __int64 v86;
  __int64 (*v87)(__int64, __int64, __int64, __int64, float, float, float, float,
                 float, float, float, float);
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  bool v100;
  float v101;
  float v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 (*v106)(__int64, __int64, __int64, __int64, float, float, float,
                  float, float, float, float, float);
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  bool v113;
  float v114;
  float v115;
  float v116;
  __int64 v117;
  __int64 v118;
  __int64 (*v119)(__int64, __int64, __int64, __int64, float, float, float,
                  float, float, float, float, float);
  float v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  struct {
    float v142;
    float v143;
    float v144;
  } v142_;
  float v145;
  float v146;
  float v147;
  float v148;
  __int64 v149;
  float v150;
  float v151;
  float v152;
  float v153;
  float v154;
  __int64 v155;
  float v156;
  struct {
    float v157;
    float v158;
    float v159;
    float v160;
    __int64 v161;
    float v162;
    float v163;
    float v164;
    float v165;
    float v166;
    float v167;
    float v168;
    float v169;
  } v157_;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(result + 272);
  if (v2 != 0) {
    v4 = result;
    physx_NpArticulationLink_getGlobalPose((void*)((__int64)&v157_.v157),
                                           result, a2),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(**(_QWORD**)(v4 + 264) + 88LL))(
        *(_QWORD*)(v4 + 264)),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = (float)(v157_.v160 * v157_.v160) + -0x1.0000000000000p-1f;
    v6 = (float)((float)(PSEUDO_UNFUSED(
                     (float)(*((float*)&v155 + 1) + *((float*)&v155 + 1)) *
                     v157_.v158)) +
                 (float)(v157_.v157 *
                         (float)(*(float*)&v155 + *(float*)&v155))) +
         (float)(v157_.v159 * (float)(v156 + v156));
    v157_.v167 =
        *(float*)&v157_.v161 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v157_.v160 *
                            (float)((float)(v157_.v158 * (float)(v156 + v156)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v157_.v159 *
                                        (float)(*((float*)&v155 + 1) +
                                                *((float*)&v155 + 1))))))) +
                        (float)((float)(*(float*)&v155 + *(float*)&v155) *
                                v5)) +
                (float)(v157_.v157 * v6));
    v157_.v168 =
        *((float*)&v157_.v161 + 1) +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v157_.v160 *
                            (float)((float)(v157_.v159 *
                                            (float)(*(float*)&v155 +
                                                    *(float*)&v155)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v157_.v157 * (float)(v156 + v156)))))) +
                        (float)((float)(*((float*)&v155 + 1) +
                                        *((float*)&v155 + 1)) *
                                v5)) +
                (float)(v157_.v158 * v6));
    v157_.v163 = (float)((float)((float)(PSEUDO_UNFUSED(v157_.v157 * v154)) +
                                 (float)(v157_.v160 * v151)) +
                         (float)(v157_.v158 * v153)) -
                 (float)(v152 * v157_.v159);
    v157_.v164 = (float)((float)((float)(PSEUDO_UNFUSED(v157_.v158 * v154)) +
                                 (float)(v157_.v160 * v152)) +
                         (float)(v157_.v159 * v151)) -
                 (float)(v153 * v157_.v157);
    v157_.v169 =
        v157_.v162 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v157_.v160 *
                            (float)((float)(v157_.v157 *
                                            (float)(*((float*)&v155 + 1) +
                                                    *((float*)&v155 + 1))) -
                                    (float)(PSEUDO_UNFUSED(
                                        v157_.v158 *
                                        (float)(*(float*)&v155 +
                                                *(float*)&v155)))))) +
                        (float)((float)(v156 + v156) * v5)) +
                (float)(v157_.v159 * v6));
    v157_.v165 = (float)((float)((float)(PSEUDO_UNFUSED(v157_.v159 * v154)) +
                                 (float)(v157_.v160 * v153)) +
                         (float)(v157_.v157 * v152)) -
                 (float)(v151 * v157_.v158);
    v157_.v166 = (float)((float)((float)(v157_.v160 * v154) -
                                 (float)(PSEUDO_UNFUSED(v157_.v157 * v151))) -
                         (float)(v157_.v158 * v152)) -
                 (float)(v157_.v159 * v153);
    physx_NpArticulationLink_getGlobalPose((void*)((__int64)&v151), v2, v7),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(**(_QWORD**)(v4 + 264) + 64LL))(
        *(_QWORD*)(v4 + 264)),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(float*)&v8 = v153;
    v9 = (float)(v154 * v154) + -0x1.0000000000000p-1f;
    v10 = *(_QWORD*)a2;
    v11 = (float)((float)(PSEUDO_UNFUSED(
                      (float)(*((float*)&v149 + 1) + *((float*)&v149 + 1)) *
                      v152)) +
                  (float)(v151 * (float)(*(float*)&v149 + *(float*)&v149))) +
          (float)(v153 * (float)(v150 + v150));
    *(float*)&v157_.v161 =
        *(float*)&v155 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v154 *
                            (float)((float)(v152 * (float)(v150 + v150)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v153 *
                                        (float)(*((float*)&v149 + 1) +
                                                *((float*)&v149 + 1))))))) +
                        (float)((float)(*(float*)&v149 + *(float*)&v149) *
                                v9)) +
                (float)(v151 * v11));
    *((float*)&v157_.v161 + 1) =
        *((float*)&v155 + 1) +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v154 *
                            (float)((float)(v153 * (float)(*(float*)&v149 +
                                                           *(float*)&v149)) -
                                    (float)(PSEUDO_UNFUSED(
                                        v151 * (float)(v150 + v150)))))) +
                        (float)((float)(*((float*)&v149 + 1) +
                                        *((float*)&v149 + 1)) *
                                v9)) +
                (float)(v152 * v11));
    v157_.v162 =
        v156 +
        (float)((float)((float)(PSEUDO_UNFUSED(
                            v154 *
                            (float)((float)(v151 *
                                            (float)(*((float*)&v149 + 1) +
                                                    *((float*)&v149 + 1))) -
                                    (float)(PSEUDO_UNFUSED(
                                        v152 * (float)(*(float*)&v149 +
                                                       *(float*)&v149)))))) +
                        (float)((float)(v150 + v150) * v9)) +
                (float)(v153 * v11));
    v12 = *(__int64 (**)(__int64, float, float, float, float, double, float,
                         float))(v10 + 16),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v157_.v157 = (float)((float)((float)(PSEUDO_UNFUSED(v151 * v148)) +
                                 (float)(v154 * v145)) +
                         (float)(v152 * v147)) -
                 (float)(v146 * v153);
    v157_.v158 = (float)((float)((float)(PSEUDO_UNFUSED(v152 * v148)) +
                                 (float)(v154 * v146)) +
                         (float)(v153 * v145)) -
                 (float)(v147 * v151);
    v157_.v159 = (float)((float)((float)(PSEUDO_UNFUSED(v153 * v148)) +
                                 (float)(v154 * v147)) +
                         (float)(v151 * v146)) -
                 (float)(v145 * v152);
    v157_.v160 = (float)((float)((float)(v154 * v148) -
                                 (float)(PSEUDO_UNFUSED(v151 * v145))) -
                         (float)(v152 * v146)) -
                 (float)(v153 * v147);
    result =
        v12(a2, v157_.v162, *(float*)&v157_.v161, *((float*)&v157_.v161 + 1),
            v157_.v160, v8, v148, -(float)(v151 * v145)),
    v7 = COERCE_AS(__typeof__(v7),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = v157_.v164;
    v15 = v157_.v157;
    v14 = v157_.v158;
    v17 = v157_.v159;
    v16 = v157_.v160;
    v18 = v157_.v162;
    v19 = *(_QWORD*)(v4 + 264);
    v155 = v157_.v161;
    v156 = v157_.v162;
    v151 = v157_.v157;
    v152 = v157_.v158;
    v153 = v157_.v159;
    v154 = v157_.v160;
    v133 = v157_.v165;
    v135 = v157_.v163;
    v137 = v157_.v166;
    if ((float)((float)((float)((float)(PSEUDO_UNFUSED(v157_.v164 *
                                                       v157_.v158)) +
                                (float)(v157_.v163 * v157_.v157)) +
                        (float)(v157_.v165 * v157_.v159)) +
                (float)(v157_.v166 * v157_.v160)) < 0x0.0p+0f) {
      v15 = -v157_.v157;
      v14 = -v157_.v158;
      v157_.v157 = -v157_.v157;
      v157_.v158 = -v157_.v158;
      v17 = -v157_.v159;
      v16 = -v157_.v160;
      v157_.v159 = -v157_.v159;
      v157_.v160 = -v157_.v160;
    }
    v138 = v16;
    v20 = v157_.v169;
    v21 = v157_.v167 - *(float*)&v157_.v161;
    v141 = (float)(v157_.v168 - *((float*)&v157_.v161 + 1)) +
           (float)(v157_.v168 - *((float*)&v157_.v161 + 1));
    if (*(_BYTE*)(v19 + 386) != 0) {
      result = (*(__int64 (**)(__int64, __int64, float, float))(
          *(_QWORD*)a2 + 32LL))(a2, (__int64)&v151, *(float*)(v19 + 104),
                                *(float*)(v19 + 108)),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v22 = v20 - v18;
    v130 = v14;
    v139 = v15;
    v140 = v21 + v21;
    v23 = -(float)(v14 * v141);
    if (*(_BYTE*)(v19 + 387) != 0) {
      v25 = *(float*)(v19 + 112);
      v24 = *(float*)(v19 + 116);
      v26 = v17;
      v27 = v151;
      v28 = v152;
      v29 = v13;
      v30 = v153;
      v31 = v154;
      v131 = v23;
      v128 = v22;
      v149 = v155;
      v123 = v24;
      v125 = v25;
      v150 = v156;
      v32 = GameRoutine_1a09fb0(-0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33 = GameRoutine_1a09fc0(-0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v34 = *(__int64 (**)(__int64, __int64, float, float, float, float, float,
                           float))(*(_QWORD*)a2 + 32LL),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v35 = -(float)(v27 * (float)(v32 * 0x0.0p+0f));
      v36 = (float)((float)(PSEUDO_UNFUSED(v33 * v30)) + (float)(v31 * v32)) +
            (float)(v27 * (float)(v32 * 0x0.0p+0f));
      v37 = (float)(PSEUDO_UNFUSED(v33 * v27)) +
            (float)(v31 * (float)(v32 * 0x0.0p+0f));
      v38 = (float)(PSEUDO_UNFUSED(v33 * v28)) +
            (float)(v31 * (float)(v32 * 0x0.0p+0f));
      v39 = (float)(v31 * v33) -
            (float)(PSEUDO_UNFUSED(v27 * (float)(v32 * 0x0.0p+0f)));
      v13 = v29;
      v40 = (float)(v38 + (float)(v30 * (float)(v32 * 0x0.0p+0f))) -
            (float)(v32 * v27);
      v17 = v26;
      v15 = v139;
      v145 = (float)(v37 + (float)(v28 * v32)) -
             (float)((float)(v32 * 0x0.0p+0f) * v30);
      v146 = v40;
      v147 = v36 - (float)((float)(v32 * 0x0.0p+0f) * v28);
      v148 = (float)(v39 - (float)(v28 * (float)(v32 * 0x0.0p+0f))) -
             (float)(v30 * v32);
      result = v34(a2, (__int64)&v145, -v123, -v125, v145, v40, v147, v35),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v22 = v128;
      v23 = v131;
    }
    v41 = v133;
    v42 = v22 + v22;
    v43 = v13 + v13;
    v132 = v42;
    v129 = v13 + v13;
    v44 = v135 + v135;
    v45 = v41 + v41;
    v46 = v23 - (float)(v15 * v140);
    if (*(_BYTE*)(v19 + 388) != 0) {
      v48 = *(float*)(v19 + 120);
      v47 = *(float*)(v19 + 124);
      v124 = v13;
      v126 = v17;
      v49 = v151;
      v50 = v152;
      v52 = v153;
      v51 = v154;
      v122 = v46;
      v149 = v155;
      v120 = v47;
      v121 = v48;
      v150 = v156;
      v53 = GameRoutine_1a09fb0(0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v54 = GameRoutine_1a09fc0(0x1.921fb60000000p-1f),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v55 = *(__int64 (**)(__int64, __int64, float, float, float, float, float,
                           float))(*(_QWORD*)a2 + 32LL),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v56 = -(float)(v49 * (float)(v53 * 0x0.0p+0f));
      v57 = (float)(PSEUDO_UNFUSED(v54 * v52)) +
            (float)(v51 * (float)(v53 * 0x0.0p+0f));
      v58 = (float)(PSEUDO_UNFUSED(v54 * v49)) +
            (float)(v51 * (float)(v53 * 0x0.0p+0f));
      v59 = (float)((float)(PSEUDO_UNFUSED(v54 * v50)) + (float)(v51 * v53)) +
            (float)(v52 * (float)(v53 * 0x0.0p+0f));
      v60 = (float)(v51 * v54) -
            (float)(PSEUDO_UNFUSED(v49 * (float)(v53 * 0x0.0p+0f)));
      v61 = v57 + (float)(v49 * v53);
      v62 = v59 - (float)((float)(v53 * 0x0.0p+0f) * v49);
      v41 = v133;
      v63 = v60 - (float)(v50 * v53);
      v64 = v61 - (float)((float)(v53 * 0x0.0p+0f) * v50);
      v65 = (float)(v58 + (float)(v50 * (float)(v53 * 0x0.0p+0f))) -
            (float)(v53 * v52);
      v13 = v124;
      v17 = v126;
      v145 = v65;
      v146 = v62;
      v147 = v64;
      v148 = v63 - (float)(v52 * (float)(v53 * 0x0.0p+0f));
      result = v55(a2, (__int64)&v145, -v120, -v121, v65, v62, v64, v56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = v122;
      v43 = v129;
      v42 = v132;
    }
    v66 = v138;
    v67 = v13 * v43;
    v68 = v46 - (float)(v17 * v42);
    v69 = v41 * v45;
    v70 = v44 * v13;
    v71 = 0x1.0000000000000p+0f;
    v72 = v135 * v44;
    v73 = (float)(v66 * v66) + -0x1.0000000000000p-1f;
    v134 = v44 * v41;
    v136 = v67;
    v74 = v45 * v137;
    v127 = v43 * v137;
    if (*(_BYTE*)(v19 + 389) == 1) {
      v75 = v134 - v127;
      v76 = (float)(0x1.0000000000000p+0f - v136) - v69;
      v77 = (float)((float)(PSEUDO_UNFUSED(
                        v138 * (float)((float)(PSEUDO_UNFUSED(v17 * v141)) -
                                       (float)(v130 * v42)))) +
                    (float)(v140 * v73)) -
            (float)(v139 * v68);
      v78 = *(float*)(v19 + 128);
      v79 = *(float*)(v19 + 132);
      v80 = v78 * (float)(v70 + v74);
      v81 = v77 > v79 | v77 < v78;
      v82 = v78 * v76;
      v83 = v78 * v75;
      v84 = v80 + *((float*)&v157_.v161 + 1);
      if (v81) {
        v85 = 16711680;
      }
      else {
        v85 = 0xFFFFFF;
      }
      v86 = *(_QWORD*)a2;
      v145 = v82 + *(float*)&v157_.v161;
      v146 = v84;
      v147 = v83 + v157_.v162;
      v87 = *(__int64 (**)(__int64, __int64, __int64, __int64, float, float,
                           float, float, float, float, float, float))(v86 + 56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142_.v142 = (float)(PSEUDO_UNFUSED(v79 * v76)) + *(float*)&v157_.v161;
      v142_.v143 = (float)(PSEUDO_UNFUSED(v79 * (float)(v70 + v74))) +
                   *((float*)&v157_.v161 + 1);
      v142_.v144 = (float)(PSEUDO_UNFUSED(v79 * v75)) + v157_.v162;
      result = v87(a2, (__int64)&v145, (__int64)&v142_.v142, v85, v142_.v142,
                   v142_.v143, v142_.v144, v75, v83 + v157_.v162, v79, v84,
                   *(float*)&v157_.v161),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v73 = (float)(v138 * v138) + -0x1.0000000000000p-1f;
      v43 = v129;
      v42 = v132;
      v71 = 0x1.0000000000000p+0f;
      v66 = v138;
    }
    v88 = v43 * v41;
    v89 = v71 - v72;
    v90 = v44 * v137;
    if (*(_BYTE*)(v19 + 390) == 1) {
      v91 = v88 + v90;
      v92 = v66 *
            (float)((float)(PSEUDO_UNFUSED(v139 * v42)) - (float)(v17 * v140));
      v93 = v89 - v69;
      v94 = v73;
      v95 = v70 - v74;
      v96 = (float)(v92 + (float)(v141 * v73)) - (float)(v130 * v68);
      v97 = *(float*)(v19 + 136);
      v98 = *(float*)(v19 + 140);
      v99 = v97 * v93;
      v100 = v96 > v98 | v96 < v97;
      v101 = v97 * v95;
      v102 = v97 * v91;
      v103 = v99 + *((float*)&v157_.v161 + 1);
      if (v100) {
        v104 = 16711680;
      }
      else {
        v104 = 0xFFFFFF;
      }
      v105 = *(_QWORD*)a2;
      v145 = v101 + *(float*)&v157_.v161;
      v146 = v103;
      v147 = v102 + v157_.v162;
      v106 =
          *(__int64 (**)(__int64, __int64, __int64, __int64, float, float,
                         float, float, float, float, float, float))(v105 + 56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142_.v142 = (float)(PSEUDO_UNFUSED(v98 * v95)) + *(float*)&v157_.v161;
      v142_.v143 =
          (float)(PSEUDO_UNFUSED(v98 * v93)) + *((float*)&v157_.v161 + 1);
      v142_.v144 = (float)(PSEUDO_UNFUSED(v98 * v91)) + v157_.v162;
      result = v106(a2, (__int64)&v145, (__int64)&v142_.v142, v104, v142_.v142,
                    v142_.v143, v142_.v144, v91, v102 + v157_.v162, v98, v103,
                    *(float*)&v157_.v161),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v42 = v132;
      v66 = v138;
      v73 = v94;
    }
    if (*(_BYTE*)(v19 + 391) == 1) {
      v107 = v89 - v136;
      v108 = (float)(PSEUDO_UNFUSED(
                 v66 * (float)((float)(PSEUDO_UNFUSED(v130 * v140)) -
                               (float)(v139 * v141)))) +
             (float)(v42 * v73);
      v109 = *(float*)(v19 + 144);
      v110 = *(float*)(v19 + 148);
      v111 = v108 - (float)(v17 * v68);
      v112 = v134 + v127;
      v113 = v111 > v110 | v111 < v109;
      v114 = v109 * v112;
      v115 = (float)(PSEUDO_UNFUSED(v109 * (float)(v88 - v90))) +
             *((float*)&v157_.v161 + 1);
      v116 = v109 * v107;
      if (v113) {
        v117 = 16711680;
      }
      else {
        v117 = 0xFFFFFF;
      }
      v118 = *(_QWORD*)a2;
      v145 = v114 + *(float*)&v157_.v161;
      v146 = v115;
      v147 = v116 + v157_.v162;
      v119 =
          *(__int64 (**)(__int64, __int64, __int64, __int64, float, float,
                         float, float, float, float, float, float))(v118 + 56),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v142_.v142 = (float)(PSEUDO_UNFUSED(v110 * v112)) + *(float*)&v157_.v161;
      v142_.v143 = (float)(PSEUDO_UNFUSED(v110 * (float)(v88 - v90))) +
                   *((float*)&v157_.v161 + 1);
      v142_.v144 = (float)(PSEUDO_UNFUSED(v110 * v107)) + v157_.v162;
      return v119(a2, (__int64)&v145, (__int64)&v142_.v142, v117, v142_.v142,
                  v142_.v143, v142_.v144, v107, v116 + v157_.v162, v110, v115,
                  *(float*)&v157_.v161);
    }
  }
  return result;
}

__int64 physx_source_physx_src_2f3ef0(__int64 a1)
{
  return GameRoutine_3102c0((_QWORD*)(a1 + 40));
}

__int64 physx_source_physx_src_2f3f00(__int64 a1)
{
  return GameRoutine_3102e0((__int64*)(a1 + 40));
}

__int64 physx_source_physx_src_2f4230(__int64 a1)
{
  return GameRoutine_310380((__int64*)(a1 + 40));
}

__int64 physx_source_physx_src_2f4240(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0 || *(_BYTE*)(v1 + 1002) != 1) {
    return GameRoutine_310390((__int64*)(a1 + 40));
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      227,
      "PxArticulationReducedCoordinate::commonInit() not allowed while "
      "simulation is running. Call will be ignored.");
}

__int64 physx_source_physx_src_2f42a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 1002) != 1) {
    return GameRoutine_3103a0((__int64*)(a1 + 40), a2, 0);
  }
  v3 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v3 + 88LL))(
      v3, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      239,
      "PxArticulationReducedCoordinate::computeGeneralizedGravityForce() not "
      "allowed while simulation is running. Ca"
      "ll will be ignored.");
}

__int64 physx_source_physx_src_2f4300(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 1002) != 1) {
    return GameRoutine_3103a0((__int64*)(a1 + 40), a2, 1);
  }
  v3 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v3 + 88LL))(
      v3, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      250,
      "PxArticulationReducedCoordinate::computeGravityCompensation() not "
      "allowed while simulation is running. Call will be ignored.");
}

__int64 physx_source_physx_src_2f4360(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 1002) != 1) {
    return GameRoutine_3103c0((__int64*)(a1 + 40), a2, 0);
  }
  v3 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v3 + 88LL))(
      v3, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      262,
      "PxArticulationReducedCoordinate::computeCoriolisAndCentrifugalForce() "
      "not allowed while simulation is running"
      ". Call will be ignored.");
}

__int64 physx_source_physx_src_2f43c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 1002) != 1) {
    return GameRoutine_3103c0((__int64*)(a1 + 40), a2, 1);
  }
  v3 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v3 + 88LL))(
      v3, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      273,
      "PxArticulationReducedCoordinate::computeCoriolisCompensation() not "
      "allowed while simulation is running. Call "
      "will be ignored.");
}

__int64 physx_source_physx_src_2f4420(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0 || *(_BYTE*)(v1 + 1002) != 1) {
    return GameRoutine_3103e0((__int64*)(a1 + 40));
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      284,
      "PxArticulationReducedCoordinate::computeGeneralizedExternalForce() not "
      "allowed while simulation is running. C"
      "all will be ignored.");
}

__int64 physx_source_physx_src_2f4480(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0 || *(_BYTE*)(v1 + 1002) != 1) {
    return GameRoutine_3103f0((__int64*)(a1 + 40));
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      295,
      "PxArticulationReducedCoordinate::computeJointAcceleration() not allowed "
      "while simulation is running. Call will be ignored.");
}

__int64 physx_source_physx_src_2f44e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0 || *(_BYTE*)(v1 + 1002) != 1) {
    return GameRoutine_310400((__int64*)(a1 + 40));
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      306,
      "PxArticulationReducedCoordinate::computeJointForce() not allowed while "
      "simulation is running. Call will be ignored.");
}

__int64 physx_source_physx_src_2f4540(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 == 0 || *(_BYTE*)(v1 + 1002) != 1) {
    return GameRoutine_310410((__int64*)(a1 + 40));
  }
  v2 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v2 + 88LL))(
      v2, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      317,
      "PxArticulationReducedCoordinate::computeDenseJacobian() not allowed "
      "while simulation is running. Call will be ignored.");
}

__int64 physx_source_physx_src_2f4ba0(__int64 a1)
{
  return GameRoutine_3104d0((_QWORD*)(a1 + 40));
}

__int64 physx_source_physx_src_2f4bb0(__int64 a1, float* a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 24);
  if (v3 == 0 || *(_BYTE*)(v3 + 1002) != 1) {
    return physx_source_physx_src_2fa5a0(**(_QWORD**)(a1 + 112), a2, a3 & 1);
  }
  v4 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v4 + 88LL))(
      v4, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationReducedCoordinate.cpp",
      489,
      "PxArticulationReducedCoordinate::setRootGlobalPose() not allowed while "
      "simulation is running. Call will be ignored.");
}

__attribute__((swiftcall)) void physx_source_physx_src_2f4c10(PSEUDO_X8 x8_,
                                                              __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0 && *(_BYTE*)(v2 + 1001) == 1 && (*(_BYTE*)(v2 + 6008) & 1) == 0) {
    v4 = PxGetFoundation();
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v4 + 88LL))(
        v4, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationReducedCoordinate.cpp",
        500,
        "PxArticulationReducedCoordinate::getRootGlobalPose() not allowed "
        "while simulation is running, except in a split si"
        "mulation during PxScene::collide() and up to PxScene::advance().");
    *(_QWORD*)(a2 + 16) = 0;
    *(_DWORD*)(a2 + 24) = 0;
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0x3F80000000000000LL;
  }
  else {
    physx_NpArticulationLink_getGlobalPose_alt1((void*)(a2),
                                                **(_QWORD**)(a1 + 112));
  }
}

__int64 physx_source_physx_src_2fa5a0(__int64 a1, float* a2, char a3)
{
  __int64 v3;
  __int64 v7;
  __int64 result;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34[7];

  v3 = *(_QWORD*)(a1 + 24);
  if (v3 != 0) {
    if (*(_BYTE*)(v3 + 1002) == 1) {
      v7 = PxGetFoundation();
      return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                             const char*))(*(_QWORD*)v7 + 88LL))(
          v7, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/NpArticulationLink.cpp",
          349,
          "PxArticulationLink::setGlobalPose() not allowed while simulation is "
          "running. Call will be ignored.");
    }
    physx_NpScene_getFlags((void*)(v34), *(_QWORD*)(a1 + 24));
    if ((BYTE2(v34[0]) & 2) != 0 && *(_BYTE*)(v3 + 6009) == 1) {
      v9 = PxGetFoundation();
      (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
          *(_QWORD*)v9 + 88LL))(
          v9, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/NpArticulationLink.cpp",
          353,
          "PxArticulationLink::setGlobalPose(): it is illegal to call this "
          "method if PxSceneFlag::eENABLE_DIRECT_GPU_API is enabled!");
    }
  }
  v10 = 0x1.0000000000000p+0f /
        GameRoutine_1a0a010(
            (float)((float)((float)(PSEUDO_UNFUSED(a2[1] * a2[1])) +
                            (float)(*a2 * *a2)) +
                    (float)(a2[2] * a2[2])) +
            (float)(a2[3] * a2[3]));
  v11 = *(float*)(a1 + 148) + *(float*)(a1 + 148);
  v12 = *(float*)(a1 + 152) + *(float*)(a1 + 152);
  v13 = *(float*)(a1 + 144) + *(float*)(a1 + 144);
  v14 = v10 * a2[2];
  v15 = v10 * a2[1];
  v16 = *a2 * v10;
  v17 = v10 * a2[3];
  v18 = (float)(v17 * v17) + -0x1.0000000000000p-1f;
  v19 = (float)((float)(PSEUDO_UNFUSED(v15 * v11)) + (float)(v16 * v13)) +
        (float)(v14 * v12);
  v20 =
      a2[4] +
      (float)((float)((float)(PSEUDO_UNFUSED(
                          v17 * (float)((float)(v15 * v12) -
                                        (float)(PSEUDO_UNFUSED(v14 * v11))))) +
                      (float)(v13 * v18)) +
              (float)(v16 * v19));
  v21 =
      a2[5] +
      (float)((float)((float)(PSEUDO_UNFUSED(
                          v17 * (float)((float)(v14 * v13) -
                                        (float)(PSEUDO_UNFUSED(v16 * v12))))) +
                      (float)(v11 * v18)) +
              (float)(v15 * v19));
  v22 = (float)(PSEUDO_UNFUSED(
            v17 *
            (float)((float)(v16 * v11) - (float)(PSEUDO_UNFUSED(v15 * v13))))) +
        (float)(v12 * v18);
  v24 = *(float*)(a1 + 136);
  v23 = *(float*)(a1 + 140);
  v34[4] = v20;
  v34[5] = v21;
  v25 = v22 + (float)(v14 * v19);
  v26 = *(float*)(a1 + 128);
  v27 = *(float*)(a1 + 132);
  v28 = (float)((float)(PSEUDO_UNFUSED(v14 * v23)) + (float)(v17 * v24)) +
        (float)(v16 * v27);
  v29 = (float)((float)(PSEUDO_UNFUSED(v16 * v23)) + (float)(v17 * v26)) +
        (float)(v15 * v24);
  v30 =
      (float)((float)((float)(PSEUDO_UNFUSED(v15 * v23)) + (float)(v17 * v27)) +
              (float)(v14 * v26)) -
      (float)(v24 * v16);
  v31 = -(float)(v16 * v26);
  v32 = v28 - (float)(v26 * v15);
  v33 = a2[6];
  v34[0] = v29 - (float)(v27 * v14);
  v34[1] = v30;
  v34[2] = v32;
  v34[3] = (float)((float)(v31 + (float)(v17 * v23)) - (float)(v15 * v27)) -
           (float)(v14 * v24);
  v34[6] = v33 + v25;
  result = physx_Sc_BodyCore_setBody2World(a1 + 80, (__int64)v34);
  if (v3 != 0 && (a3 & 1) != 0) {
    physx_NpArticulationReducedCoordinate_wakeUpInternal(*(_QWORD*)(a1 + 256),
                                                         0, 1);
  }
  else if (v3 == 0) {
    return result;
  }
  return physx_NpArticulationReducedCoordinate_setGlobalPose(
      *(_QWORD*)(a1 + 256));
}

void __attribute__((noreturn)) physx_source_physx_src_2fc130()
{
  __udf(0x8002u);
}

__int64 physx_source_physx_src_2fc140(__int64 a1)
{
  *(_QWORD*)a1 = &GameData_1f83c90;
  return physx_NpActor_onActorRelease(a1);
}

void __attribute__((noreturn)) physx_source_physx_src_2fc160()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
