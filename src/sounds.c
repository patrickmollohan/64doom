// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// $Log:$
//
// DESCRIPTION:
//	Created by a sound utility.
//	Kept as a sample, DOOM2 sounds.
//
//-----------------------------------------------------------------------------

#include "doomtype.h"
#include "sounds.h"

//
// Information about all the music
//

musicinfo_t S_music[] =
{
    { 0 },
    { "e1m1", 0 },
    { "e1m2", 0 },
    { "e1m3", 0 },
    { "e1m4", 0 },
    { "e1m5", 0 },
    { "e1m6", 0 },
    { "e1m7", 0 },
    { "e1m8", 0 },
    { "e1m9", 0 },
    { "e2m1", 0 },
    { "e2m2", 0 },
    { "e2m3", 0 },
    { "e2m4", 0 },
    { "e2m5", 0 },
    { "e2m6", 0 },
    { "e2m7", 0 },
    { "e2m8", 0 },
    { "e2m9", 0 },
    { "e3m1", 0 },
    { "e3m2", 0 },
    { "e3m3", 0 },
    { "e3m4", 0 },
    { "e3m5", 0 },
    { "e3m6", 0 },
    { "e3m7", 0 },
    { "e3m8", 0 },
    { "e3m9", 0 },
    { "inter", 0 },
    { "intro", 0 },
    { "bunny", 0 },
    { "victor", 0 },
    { "introa", 0 },
    { "runnin", 0 },
    { "stalks", 0 },
    { "countd", 0 },
    { "betwee", 0 },
    { "doom", 0 },
    { "the_da", 0 },
    { "shawn", 0 },
    { "ddtblu", 0 },
    { "in_cit", 0 },
    { "dead", 0 },
    { "stlks2", 0 },
    { "theda2", 0 },
    { "doom2", 0 },
    { "ddtbl2", 0 },
    { "runni2", 0 },
    { "dead2", 0 },
    { "stlks3", 0 },
    { "romero", 0 },
    { "shawn2", 0 },
    { "messag", 0 },
    { "count2", 0 },
    { "ddtbl3", 0 },
    { "ampie", 0 },
    { "theda3", 0 },
    { "adrian", 0 },
    { "messg2", 0 },
    { "romer2", 0 },
    { "tense", 0 },
    { "shawn3", 0 },
    { "openin", 0 },
    { "evil", 0 },
    { "ultima", 0 },
    { "read_m", 0 },
    { "dm2ttl", 0 },
    { "dm2int", 0 } 
};


//
// Information about all the sfx
//

sfxinfo_t S_sfx[] =
{
  // S_sfx[0] needs to be a dummy for odd reasons.
  { "none", False,  0, 0, -1, -1, 0 },

  { "pistol", False, 64, 0, -1, -1, 0 },
  { "shotgn", False, 64, 0, -1, -1, 0 },
  { "sgcock", False, 64, 0, -1, -1, 0 },
  { "dshtgn", False, 64, 0, -1, -1, 0 },
  { "dbopn", False, 64, 0, -1, -1, 0 },
  { "dbcls", False, 64, 0, -1, -1, 0 },
  { "dbload", False, 64, 0, -1, -1, 0 },
  { "plasma", False, 64, 0, -1, -1, 0 },
  { "bfg", False, 64, 0, -1, -1, 0 },
  { "sawup", False, 64, 0, -1, -1, 0 },
  { "sawidl", False, 118, 0, -1, -1, 0 },
  { "sawful", False, 64, 0, -1, -1, 0 },
  { "sawhit", False, 64, 0, -1, -1, 0 },
  { "rlaunc", False, 64, 0, -1, -1, 0 },
  { "rxplod", False, 70, 0, -1, -1, 0 },
  { "firsht", False, 70, 0, -1, -1, 0 },
  { "firxpl", False, 70, 0, -1, -1, 0 },
  { "pstart", False, 100, 0, -1, -1, 0 },
  { "pstop", False, 100, 0, -1, -1, 0 },
  { "doropn", False, 100, 0, -1, -1, 0 },
  { "dorcls", False, 100, 0, -1, -1, 0 },
  { "stnmov", False, 119, 0, -1, -1, 0 },
  { "swtchn", False, 78, 0, -1, -1, 0 },
  { "swtchx", False, 78, 0, -1, -1, 0 },
  { "plpain", False, 96, 0, -1, -1, 0 },
  { "dmpain", False, 96, 0, -1, -1, 0 },
  { "popain", False, 96, 0, -1, -1, 0 },
  { "vipain", False, 96, 0, -1, -1, 0 },
  { "mnpain", False, 96, 0, -1, -1, 0 },
  { "pepain", False, 96, 0, -1, -1, 0 },
  { "slop", False, 78, 0, -1, -1, 0 },
  { "itemup", True, 78, 0, -1, -1, 0 },
  { "wpnup", True, 78, 0, -1, -1, 0 },
  { "oof", False, 96, 0, -1, -1, 0 },
  { "telept", False, 32, 0, -1, -1, 0 },
  { "posit1", True, 98, 0, -1, -1, 0 },
  { "posit2", True, 98, 0, -1, -1, 0 },
  { "posit3", True, 98, 0, -1, -1, 0 },
  { "bgsit1", True, 98, 0, -1, -1, 0 },
  { "bgsit2", True, 98, 0, -1, -1, 0 },
  { "sgtsit", True, 98, 0, -1, -1, 0 },
  { "cacsit", True, 98, 0, -1, -1, 0 },
  { "brssit", True, 94, 0, -1, -1, 0 },
  { "cybsit", True, 92, 0, -1, -1, 0 },
  { "spisit", True, 90, 0, -1, -1, 0 },
  { "bspsit", True, 90, 0, -1, -1, 0 },
  { "kntsit", True, 90, 0, -1, -1, 0 },
  { "vilsit", True, 90, 0, -1, -1, 0 },
  { "mansit", True, 90, 0, -1, -1, 0 },
  { "pesit", True, 90, 0, -1, -1, 0 },
  { "sklatk", False, 70, 0, -1, -1, 0 },
  { "sgtatk", False, 70, 0, -1, -1, 0 },
  { "skepch", False, 70, 0, -1, -1, 0 },
  { "vilatk", False, 70, 0, -1, -1, 0 },
  { "claw", False, 70, 0, -1, -1, 0 },
  { "skeswg", False, 70, 0, -1, -1, 0 },
  { "pldeth", False, 32, 0, -1, -1, 0 },
  { "pdiehi", False, 32, 0, -1, -1, 0 },
  { "podth1", False, 70, 0, -1, -1, 0 },
  { "podth2", False, 70, 0, -1, -1, 0 },
  { "podth3", False, 70, 0, -1, -1, 0 },
  { "bgdth1", False, 70, 0, -1, -1, 0 },
  { "bgdth2", False, 70, 0, -1, -1, 0 },
  { "sgtdth", False, 70, 0, -1, -1, 0 },
  { "cacdth", False, 70, 0, -1, -1, 0 },
  { "skldth", False, 70, 0, -1, -1, 0 },
  { "brsdth", False, 32, 0, -1, -1, 0 },
  { "cybdth", False, 32, 0, -1, -1, 0 },
  { "spidth", False, 32, 0, -1, -1, 0 },
  { "bspdth", False, 32, 0, -1, -1, 0 },
  { "vildth", False, 32, 0, -1, -1, 0 },
  { "kntdth", False, 32, 0, -1, -1, 0 },
  { "pedth", False, 32, 0, -1, -1, 0 },
  { "skedth", False, 32, 0, -1, -1, 0 },
  { "posact", True, 120, 0, -1, -1, 0 },
  { "bgact", True, 120, 0, -1, -1, 0 },
  { "dmact", True, 120, 0, -1, -1, 0 },
  { "bspact", True, 100, 0, -1, -1, 0 },
  { "bspwlk", True, 100, 0, -1, -1, 0 },
  { "vilact", True, 100, 0, -1, -1, 0 },
  { "noway", False, 78, 0, -1, -1, 0 },
  { "barexp", False, 60, 0, -1, -1, 0 },
  { "punch", False, 64, 0, -1, -1, 0 },
  { "hoof", False, 70, 0, -1, -1, 0 },
  { "metal", False, 70, 0, -1, -1, 0 },
  { "chgun", False, 64, &S_sfx[sfx_pistol], 150, 0, 0 },
  { "tink", False, 60, 0, -1, -1, 0 },
  { "bdopn", False, 100, 0, -1, -1, 0 },
  { "bdcls", False, 100, 0, -1, -1, 0 },
  { "itmbk", False, 100, 0, -1, -1, 0 },
  { "flame", False, 32, 0, -1, -1, 0 },
  { "flamst", False, 32, 0, -1, -1, 0 },
  { "getpow", False, 60, 0, -1, -1, 0 },
  { "bospit", False, 70, 0, -1, -1, 0 },
  { "boscub", False, 70, 0, -1, -1, 0 },
  { "bossit", False, 70, 0, -1, -1, 0 },
  { "bospn", False, 70, 0, -1, -1, 0 },
  { "bosdth", False, 70, 0, -1, -1, 0 },
  { "manatk", False, 70, 0, -1, -1, 0 },
  { "mandth", False, 70, 0, -1, -1, 0 },
  { "sssit", False, 70, 0, -1, -1, 0 },
  { "ssdth", False, 70, 0, -1, -1, 0 },
  { "keenpn", False, 70, 0, -1, -1, 0 },
  { "keendt", False, 70, 0, -1, -1, 0 },
  { "skeact", False, 70, 0, -1, -1, 0 },
  { "skesit", False, 70, 0, -1, -1, 0 },
  { "skeatk", False, 70, 0, -1, -1, 0 },
  { "radio", False, 60, 0, -1, -1, 0 } 
};

