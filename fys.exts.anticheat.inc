#if defined _fys_Exts_AntiCheat_Include_
    #endinput
#endif

#define _fys_Exts_AntiCheat_Include_

native void Exts_AC_SetIgnoreClient(int client, bool stats); // if true = ignore client check

public SharedPlugin __pl_fys_Exts_AntiCheat =
{
    name = "fys-Exts-AntiCheat",
    file = "fys.exts.anticheat.smx",
#if defined REQUIRE_PLUGIN
    required = 1
#else
    required = 0
#endif
};