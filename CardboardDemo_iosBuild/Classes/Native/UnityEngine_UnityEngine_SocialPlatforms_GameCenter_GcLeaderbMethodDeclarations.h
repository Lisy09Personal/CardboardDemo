﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t452;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t453;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t644;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t95;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" void GcLeaderboard__ctor_m2658 (GcLeaderboard_t452 * __this, Leaderboard_t453 * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C" void GcLeaderboard_Finalize_m2659 (GcLeaderboard_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C" bool GcLeaderboard_Contains_m2660 (GcLeaderboard_t452 * __this, Leaderboard_t453 * ___board, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C" void GcLeaderboard_SetScores_m2661 (GcLeaderboard_t452 * __this, GcScoreDataU5BU5D_t644* ___scoreDatas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C" void GcLeaderboard_SetLocalScore_m2662 (GcLeaderboard_t452 * __this, GcScoreData_t586  ___scoreData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C" void GcLeaderboard_SetMaxRange_m2663 (GcLeaderboard_t452 * __this, uint32_t ___maxRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C" void GcLeaderboard_SetTitle_m2664 (GcLeaderboard_t452 * __this, String_t* ___title, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void GcLeaderboard_Internal_LoadScores_m2665 (GcLeaderboard_t452 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C" void GcLeaderboard_Internal_LoadScoresWithUsers_m2666 (GcLeaderboard_t452 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t95* ___userIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C" bool GcLeaderboard_Loading_m2667 (GcLeaderboard_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C" void GcLeaderboard_Dispose_m2668 (GcLeaderboard_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
