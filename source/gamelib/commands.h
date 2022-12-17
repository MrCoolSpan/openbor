/*
 * OpenBOR - http://www.LavaLit.com
 * -
 ----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c) 2004 - 2011 OpenBOR Team
 */

#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include "List.h"

typedef enum levelOrderCommand {
	CMD_LEVELORDER_BLENDFX = 1,
	CMD_LEVELORDER_SET,
	CMD_LEVELORDER_IFCOMPLETE,
	CMD_LEVELORDER_SKIPSELECT,
	CMD_LEVELORDER_FILE,
	CMD_LEVELORDER_SCENE,
	CMD_LEVELORDER_SELECT,
	CMD_LEVELORDER_NEXT,
	CMD_LEVELORDER_END,
	CMD_LEVELORDER_LIVES,
	CMD_LEVELORDER_DISABLEHOF,
	CMD_LEVELORDER_CANSAVE,
	CMD_LEVELORDER_Z,
	CMD_LEVELORDER_BRANCH,
	CMD_LEVELORDER_P1LIFE,
	CMD_LEVELORDER_P2LIFE,
	CMD_LEVELORDER_P3LIFE,
	CMD_LEVELORDER_P4LIFE,
	CMD_LEVELORDER_P1MP,
	CMD_LEVELORDER_P2MP,
	CMD_LEVELORDER_P3MP,
	CMD_LEVELORDER_P4MP,
	CMD_LEVELORDER_P1LIFEX,
	CMD_LEVELORDER_P2LIFEX,
	CMD_LEVELORDER_P3LIFEX,
	CMD_LEVELORDER_P4LIFEX,
	CMD_LEVELORDER_P1LIFEN,
	CMD_LEVELORDER_P2LIFEN,
	CMD_LEVELORDER_P3LIFEN,
	CMD_LEVELORDER_P4LIFEN,
	CMD_LEVELORDER_E1LIFE,
	CMD_LEVELORDER_E2LIFE,
	CMD_LEVELORDER_E3LIFE,
	CMD_LEVELORDER_E4LIFE,
	CMD_LEVELORDER_P1ICON,
	CMD_LEVELORDER_P2ICON,
	CMD_LEVELORDER_P3ICON,
	CMD_LEVELORDER_P4ICON,
	CMD_LEVELORDER_P1ICONW,
	CMD_LEVELORDER_P2ICONW,
	CMD_LEVELORDER_P3ICONW,
	CMD_LEVELORDER_P4ICONW,
	CMD_LEVELORDER_MP1ICON,
	CMD_LEVELORDER_MP2ICON,
	CMD_LEVELORDER_MP3ICON,
	CMD_LEVELORDER_MP4ICON,
	CMD_LEVELORDER_P1NAMEJ,
	CMD_LEVELORDER_P2NAMEJ,
	CMD_LEVELORDER_P3NAMEJ,
	CMD_LEVELORDER_P4NAMEJ,
	CMD_LEVELORDER_P1SCORE,
	CMD_LEVELORDER_P2SCORE,
	CMD_LEVELORDER_P3SCORE,
	CMD_LEVELORDER_P4SCORE,
	CMD_LEVELORDER_P1SHOOT,
	CMD_LEVELORDER_P2SHOOT,
	CMD_LEVELORDER_P3SHOOT,
	CMD_LEVELORDER_P4SHOOT,
	CMD_LEVELORDER_P1RUSH,
	CMD_LEVELORDER_P2RUSH,
	CMD_LEVELORDER_P3RUSH,
	CMD_LEVELORDER_P4RUSH,
	CMD_LEVELORDER_E1ICON,
	CMD_LEVELORDER_E2ICON,
	CMD_LEVELORDER_E3ICON,
	CMD_LEVELORDER_E4ICON,
	CMD_LEVELORDER_E1NAME,
	CMD_LEVELORDER_E2NAME,
	CMD_LEVELORDER_E3NAME,
	CMD_LEVELORDER_E4NAME,
	CMD_LEVELORDER_P1SMENU,
	CMD_LEVELORDER_P2SMENU,
	CMD_LEVELORDER_P3SMENU,
	CMD_LEVELORDER_P4SMENU,
	CMD_LEVELORDER_TIMEICON,
	CMD_LEVELORDER_BGICON,
	CMD_LEVELORDER_OLICON,
	CMD_LEVELORDER_TIMELOC,
	CMD_LEVELORDER_LBARSIZE,
	CMD_LEVELORDER_OLBARSIZE,
	CMD_LEVELORDER_MPBARSIZE,
	CMD_LEVELORDER_LBARTEXT,
	CMD_LEVELORDER_MPBARTEXT,
	CMD_LEVELORDER_SHOWCOMPLETE,
	CMD_LEVELORDER_CLEARBONUS,
	CMD_LEVELORDER_RUSHBONUS,
	CMD_LEVELORDER_LIFEBONUS,
	CMD_LEVELORDER_SCBONUSES,
	CMD_LEVELORDER_TOTALSCORE,
	CMD_LEVELORDER_MUSICOVERLAP,
	CMD_LEVELORDER_SHOWRUSHBONUS,
	CMD_LEVELORDER_NOSLOWFX,
	CMD_LEVELORDER_EQUALAIRPAUSE,
	CMD_LEVELORDER_HISCOREBG,
	CMD_LEVELORDER_COMPLETEBG,
	CMD_LEVELORDER_LOADINGBG,
	CMD_LEVELORDER_LOADINGBG2,
	CMD_LEVELORDER_LOADINGMUSIC,
	CMD_LEVELORDER_UNLOCKBG,
	CMD_LEVELORDER_NOSHARE,
	CMD_LEVELORDER_CUSTFADE,
	CMD_LEVELORDER_CONTINUESCORE,
	CMD_LEVELORDER_CREDITS,
	CMD_LEVELORDER_TYPEMP,
	CMD_LEVELORDER_SINGLE,
	CMD_LEVELORDER_MAXPLAYERS,
	CMD_LEVELORDER_NOSAME,
	CMD_LEVELORDER_RUSH,
	CMD_LEVELORDER_MAXWALLHEIGHT,
	CMD_LEVELORDER_SCOREFORMAT,
} levelOrderCommands;

typedef enum levelCommand {
	CMD_LEVEL_LOADINGBG = 1,
	CMD_LEVEL_MUSICFADE,
	CMD_LEVEL_MUSIC,
	CMD_LEVEL_AT,
	CMD_LEVEL_ALLOWSELECT,
	CMD_LEVEL_LOAD,
	CMD_LEVEL_BACKGROUND,
	CMD_LEVEL_BGLAYER,
	CMD_LEVEL_FGLAYER,
	CMD_LEVEL_WATER,
	CMD_LEVEL_DIRECTION,
	CMD_LEVEL_FACING,
	CMD_LEVEL_ROCK,
	CMD_LEVEL_BGSPEED,
	CMD_LEVEL_MIRROR,
	CMD_LEVEL_BOSSMUSIC,
	CMD_LEVEL_NOPAUSE,
	CMD_LEVEL_NOSCREENSHOT,
	CMD_LEVEL_SETTIME,
	CMD_LEVEL_SETWEAP,
	CMD_LEVEL_NOTIME,
	CMD_LEVEL_NORESET,
	CMD_LEVEL_NOSLOW,
	CMD_LEVEL_TYPE,
	CMD_LEVEL_NOHIT,
	CMD_LEVEL_GRAVITY,
	CMD_LEVEL_MAXFALLSPEED,
	CMD_LEVEL_MAXTOSSSPEED,
	CMD_LEVEL_CAMERATYPE,
	CMD_LEVEL_CAMERAOFFSET,
	CMD_LEVEL_SPAWN1,
	CMD_LEVEL_SPAWN2,
	CMD_LEVEL_SPAWN3,
	CMD_LEVEL_SPAWN4,
	CMD_LEVEL_FRONTPANEL,
	CMD_LEVEL_PANEL,
	CMD_LEVEL_STAGENUMBER,
	CMD_LEVEL_ORDER,
	CMD_LEVEL_HOLE,
	CMD_LEVEL_WALL,
	CMD_LEVEL_PALETTE,
	CMD_LEVEL_UPDATESCRIPT,
	CMD_LEVEL_UPDATEDSCRIPT,
	CMD_LEVEL_KEYSCRIPT,
	CMD_LEVEL_LEVELSCRIPT,
	CMD_LEVEL_ENDLEVELSCRIPT,
	CMD_LEVEL_BLOCKED,
	CMD_LEVEL_ENDHOLE,
	CMD_LEVEL_WAIT,
	CMD_LEVEL_NOJOIN,
	CMD_LEVEL_CANJOIN,
	CMD_LEVEL_SHADOWCOLOR,
	CMD_LEVEL_SHADOWALPHA,
	CMD_LEVEL_LIGHT,
	CMD_LEVEL_SCROLLZ,
	CMD_LEVEL_SCROLLX,
	CMD_LEVEL_BLOCKADE,
	CMD_LEVEL_SETPALETTE,
	CMD_LEVEL_GROUP,
	CMD_LEVEL_SPAWN,
	CMD_LEVEL_2PSPAWN,
	CMD_LEVEL_3PSPAWN,
	CMD_LEVEL_4PSPAWN,
	CMD_LEVEL_BOSS,
	CMD_LEVEL_FLIP,
	CMD_LEVEL_HEALTH,
	CMD_LEVEL_2PHEALTH,
	CMD_LEVEL_3PHEALTH,
	CMD_LEVEL_4PHEALTH,
	CMD_LEVEL_MP,
	CMD_LEVEL_SCORE,
	CMD_LEVEL_NOLIFE,
	CMD_LEVEL_ALIAS,
	CMD_LEVEL_MAP,
	CMD_LEVEL_ALPHA,
	CMD_LEVEL_DYING,
	CMD_LEVEL_ITEM,
	CMD_LEVEL_2PITEM,
	CMD_LEVEL_3PITEM,
	CMD_LEVEL_4PITEM,
	CMD_LEVEL_ITEMMAP,
	CMD_LEVEL_ITEMHEALTH,
	CMD_LEVEL_ITEMALIAS,
	CMD_LEVEL_WEAPON,
	CMD_LEVEL_AGGRESSION,
	CMD_LEVEL_CREDIT,
	CMD_LEVEL_ITEMTRANS,
	CMD_LEVEL_ITEMALPHA,
	CMD_LEVEL_COORDS,
	CMD_LEVEL_SPAWNSCRIPT
} levelCommands;

typedef enum modelCommand {
	CMD_MODEL_NAME = 1,
	CMD_MODEL_TYPE,
	CMD_MODEL_SUBTYPE,
	CMD_MODEL_STATS,
	CMD_MODEL_HEALTH,
	CMD_MODEL_SCROLL,
	CMD_MODEL_MP,
	CMD_MODEL_NOLIFE,
	CMD_MODEL_MAKEINV,
	CMD_MODEL_RISEINV,
	CMD_MODEL_LOAD,
	CMD_MODEL_SCORE,
	CMD_MODEL_SMARTBOMB,
	CMD_MODEL_BOUNCE,
	CMD_MODEL_NOQUAKE,
	CMD_MODEL_BLOCKBACK,
	CMD_MODEL_HITENEMY,
	CMD_MODEL_HOSTILE,
	CMD_MODEL_CANDAMAGE,
	CMD_MODEL_PROJECTILEHIT,
	CMD_MODEL_AIMOVE,
	CMD_MODEL_AIATTACK,
	CMD_MODEL_SUBJECT_TO_WALL,
	CMD_MODEL_SUBJECT_TO_HOLE,
	CMD_MODEL_SUBJECT_TO_PLATFORM,
	CMD_MODEL_SUBJECT_TO_OBSTACLE,
	CMD_MODEL_SUBJECT_TO_GRAVITY,
	CMD_MODEL_SUBJECT_TO_SCREEN,
	CMD_MODEL_SUBJECT_TO_MINZ,
	CMD_MODEL_SUBJECT_TO_MAXZ,
	CMD_MODEL_NO_ADJUST_BASE,
	CMD_MODEL_INSTANTITEMDEATH,
	CMD_MODEL_SECRET,
	CMD_MODEL_MODELFLAG,
	CMD_MODEL_WEAPLOSS,
	CMD_MODEL_WEAPNUM,
	CMD_MODEL_PROJECT,
	CMD_MODEL_WEAPONS,
	CMD_MODEL_SHOOTNUM,
	CMD_MODEL_RELOAD,
	CMD_MODEL_TYPESHOT,
	CMD_MODEL_COUNTER,
	CMD_MODEL_ANIMAL,
	CMD_MODEL_RIDER,
	CMD_MODEL_KNIFE,
	CMD_MODEL_FIREB,
	CMD_MODEL_PLAYSHOT,
	CMD_MODEL_PLAYSHOTW,
	CMD_MODEL_PLAYSHOTNO,
	CMD_MODEL_PLAYBOMB,
	CMD_MODEL_STAR,
	CMD_MODEL_BOMB,
	CMD_MODEL_FLASH,
	CMD_MODEL_BFLASH,
	CMD_MODEL_DUST,
	CMD_MODEL_BRANCH,
	CMD_MODEL_CANTGRAB,
	CMD_MODEL_NOGRAB,
	CMD_MODEL_NOTGRAB,
	CMD_MODEL_ANTIGRAB,
	CMD_MODEL_GRABFORCE,
	CMD_MODEL_GRABBACK,
	CMD_MODEL_OFFSCREENKILL,
	CMD_MODEL_FALLDIE,
	CMD_MODEL_DEATH,
	CMD_MODEL_SPEED,
	CMD_MODEL_SPEEDF,
	CMD_MODEL_JUMPSPEED,
	CMD_MODEL_JUMPSPEEDF,
	CMD_MODEL_ANTIGRAVITY,
	CMD_MODEL_STEALTH,
	CMD_MODEL_JUGGLEPOINTS,
	CMD_MODEL_RISEATTACKTYPE,
	CMD_MODEL_GUARDPOINTS,
	CMD_MODEL_DEFENSE,
	CMD_MODEL_OFFENSE,
	CMD_MODEL_HEIGHT,
	CMD_MODEL_JUMPHEIGHT,
	CMD_MODEL_JUMPMOVE,
	CMD_MODEL_KNOCKDOWNCOUNT,
	CMD_MODEL_GRABDISTANCE,
	CMD_MODEL_GRABFINISH,
	CMD_MODEL_THROWDAMAGE,
	CMD_MODEL_SHADOW,
	CMD_MODEL_GFXSHADOW,
	CMD_MODEL_AIRONLY,
	CMD_MODEL_FMAP,
	CMD_MODEL_KOMAP,
	CMD_MODEL_HMAP,
	CMD_MODEL_SETLAYER,
	CMD_MODEL_TOFLIP,
	CMD_MODEL_NODIEBLINK,
	CMD_MODEL_NOATFLASH,
	CMD_MODEL_NOMOVE,
	CMD_MODEL_NODROP,
	CMD_MODEL_THOLD,
	CMD_MODEL_RUNNING,
	CMD_MODEL_BLOCKODDS,
	CMD_MODEL_HOLDBLOCK,
	CMD_MODEL_BLOCKPAIN,
	CMD_MODEL_NOPASSIVEBLOCK,
	CMD_MODEL_EDELAY,
	CMD_MODEL_PAINGRAB,
	CMD_MODEL_THROW,
	CMD_MODEL_GRABWALK,
	CMD_MODEL_GRABTURN,
	CMD_MODEL_THROWFRAMEWAIT,
	CMD_MODEL_DIESOUND,
	CMD_MODEL_ICON,
	CMD_MODEL_ICONPAIN,
	CMD_MODEL_ICONDIE,
	CMD_MODEL_ICONGET,
	CMD_MODEL_ICONW,
	CMD_MODEL_ICONMPHIGH,
	CMD_MODEL_ICONMPHALF,
	CMD_MODEL_ICONMPLOW,
	CMD_MODEL_PARROW,
	CMD_MODEL_PARROW2,
	CMD_MODEL_PARROW3,
	CMD_MODEL_PARROW4,
	CMD_MODEL_ATCHAIN,
	CMD_MODEL_COMBOSTYLE,
	CMD_MODEL_CREDIT,
	CMD_MODEL_NOPAIN,
	CMD_MODEL_ESCAPEHITS,
	CMD_MODEL_CHARGERATE,
	CMD_MODEL_MPRATE,
	CMD_MODEL_MPSET,
	CMD_MODEL_SLEEPWAIT,
	CMD_MODEL_GUARDRATE,
	CMD_MODEL_AGGRESSION,
	CMD_MODEL_RISETIME,
	CMD_MODEL_FACING,
	CMD_MODEL_TURNDELAY,
	CMD_MODEL_LIFESPAN,
	CMD_MODEL_SUMMONKILL,
	CMD_MODEL_LIFEPOSITION,
	CMD_MODEL_LIFEBARSTATUS,
	CMD_MODEL_ICONPOSITION,
	CMD_MODEL_NAMEPOSITION,
	CMD_MODEL_COM,
	CMD_MODEL_REMAP,
	CMD_MODEL_PALETTE,
	CMD_MODEL_ALTERNATEPAL,
	CMD_MODEL_GLOBALMAP,
	CMD_MODEL_ALPHA,
	CMD_MODEL_REMOVE,
	CMD_MODEL_SCRIPT,
	CMD_MODEL_THINKSCRIPT,
	CMD_MODEL_TAKEDAMAGESCRIPT,
	CMD_MODEL_ONFALLSCRIPT,
	CMD_MODEL_ONPAINSCRIPT,
	CMD_MODEL_ONBLOCKSSCRIPT,
	CMD_MODEL_ONBLOCKWSCRIPT,
	CMD_MODEL_ONBLOCKOSCRIPT,
	CMD_MODEL_ONBLOCKZSCRIPT,
	CMD_MODEL_ONBLOCKASCRIPT,
	CMD_MODEL_ONMOVEXSCRIPT,
	CMD_MODEL_ONMOVEZSCRIPT,
	CMD_MODEL_ONMOVEASCRIPT,
	CMD_MODEL_ONDEATHSCRIPT,
	CMD_MODEL_ONKILLSCRIPT,
	CMD_MODEL_DIDBLOCKSCRIPT,
	CMD_MODEL_ONDOATTACKSCRIPT,
	CMD_MODEL_DIDHITSCRIPT,
	CMD_MODEL_ONSPAWNSCRIPT,
	CMD_MODEL_ANIMATIONSCRIPT,
	CMD_MODEL_KEYSCRIPT,
	CMD_MODEL_ANIM,
	CMD_MODEL_LOOP,
	CMD_MODEL_ANIMHEIGHT,
	CMD_MODEL_DELAY,
	CMD_MODEL_OFFSET,
	CMD_MODEL_SHADOWCOORDS,
	CMD_MODEL_ENERGYCOST,
	CMD_MODEL_MPONLY,
	CMD_MODEL_CHARGETIME,
	CMD_MODEL_DIVE,
	CMD_MODEL_DIVE1,
	CMD_MODEL_DIVE2,
	CMD_MODEL_ATTACKONE,
	CMD_MODEL_COUNTERATTACK,
	CMD_MODEL_THROWFRAME,
	CMD_MODEL_PSHOTFRAME,
	CMD_MODEL_PSHOTFRAMEW,
	CMD_MODEL_PSHOTFRAMENO,
	CMD_MODEL_SHOOTFRAME,
	CMD_MODEL_TOSSFRAME,
	CMD_MODEL_PBOMBFRAME,
	CMD_MODEL_CUSTKNIFE,
	CMD_MODEL_CUSTPSHOT,
	CMD_MODEL_CUSTPSHOTW,
	CMD_MODEL_CUSTPSHOTNO,
	CMD_MODEL_CUSTBOMB,
	CMD_MODEL_CUSTPBOMB,
	CMD_MODEL_CUSTSTAR,
	CMD_MODEL_JUMPFRAME,
	CMD_MODEL_BOUNCEFACTOR,
	CMD_MODEL_LANDFRAME,
	CMD_MODEL_DROPFRAME,
	CMD_MODEL_CANCEL,
	CMD_MODEL_SOUND,
	CMD_MODEL_HITFX,
	CMD_MODEL_HITFLASH,
	CMD_MODEL_BLOCKFLASH,
	CMD_MODEL_BLOCKFX,
	CMD_MODEL_FASTATTACK,
	CMD_MODEL_BBOX,
	CMD_MODEL_BBOXZ,
	CMD_MODEL_PLATFORM,
	CMD_MODEL_DRAWMETHOD,
	CMD_MODEL_NODRAWMETHOD,
	CMD_MODEL_ATTACK,
	CMD_MODEL_ATTACK1,
	CMD_MODEL_ATTACK2,
	CMD_MODEL_ATTACK3,
	CMD_MODEL_ATTACK4,
	CMD_MODEL_ATTACK5,
	CMD_MODEL_ATTACK6,
	CMD_MODEL_ATTACK7,
	CMD_MODEL_ATTACK8,
	CMD_MODEL_ATTACK9,
	CMD_MODEL_ATTACK10,
	CMD_MODEL_ATTACK11,
	CMD_MODEL_ATTACK12,
	CMD_MODEL_ATTACK13,
	CMD_MODEL_ATTACK14,
	CMD_MODEL_ATTACK15,
	CMD_MODEL_ATTACK16,
	CMD_MODEL_ATTACK17,
	CMD_MODEL_ATTACK18,
	CMD_MODEL_ATTACK19,
	CMD_MODEL_ATTACK20,
	CMD_MODEL_SHOCK,
	CMD_MODEL_BURN,
	CMD_MODEL_STEAL,
	CMD_MODEL_FREEZE,
	CMD_MODEL_ITEMBOX,
	CMD_MODEL_ATTACKZ,
	CMD_MODEL_HITZ,
	CMD_MODEL_BLAST,
	CMD_MODEL_DROPV,
	CMD_MODEL_OTG,
	CMD_MODEL_JUGGLECOST,
	CMD_MODEL_GUARDCOST,
	CMD_MODEL_STUN,
	CMD_MODEL_GRABIN,
	CMD_MODEL_NOREFLECT,
	CMD_MODEL_FORCEDIRECTION,
	CMD_MODEL_DAMAGEONLANDING,
	CMD_MODEL_SEAL,
	CMD_MODEL_STAYDOWN,
	CMD_MODEL_DOT,
	CMD_MODEL_FORCEMAP,
	CMD_MODEL_IDLE,
	CMD_MODEL_MOVE,
	CMD_MODEL_MOVEZ,
	CMD_MODEL_MOVEA,
	CMD_MODEL_SETA,
	CMD_MODEL_FSHADOW,
	CMD_MODEL_RANGE,
	CMD_MODEL_RANGEZ,
	CMD_MODEL_RANGEA,
	CMD_MODEL_RANGEB,
	CMD_MODEL_FRAME,
	CMD_MODEL_ALPHAMASK,
	CMD_MODEL_FLIPFRAME,
	CMD_MODEL_FOLLOWANIM,
	CMD_MODEL_FOLLOWCOND,
	CMD_MODEL_COUNTERFRAME,
	CMD_MODEL_COUNTERRANGE,
	CMD_MODEL_WEAPONFRAME,
	CMD_MODEL_QUAKEFRAME,
	CMD_MODEL_SUBENTITY,
	CMD_MODEL_CUSTENTITY,
	CMD_MODEL_SPAWNFRAME,
	CMD_MODEL_SUMMONFRAME,
	CMD_MODEL_UNSUMMONFRAME,
	CMD_MODEL_AT_SCRIPT,
	CMD_MODEL_AT_CMD,
	CMD_MODEL_MPCOST,
	CMD_MODEL_SUBCLASS,

} modelCommands;

#include "openbor.h"

typedef enum {
	CMD_MODELATTACK_NORMAL = ATK_NORMAL,
	CMD_MODELATTACK_NORMAL2 = ATK_NORMAL2,
	CMD_MODELATTACK_NORMAL3 = ATK_NORMAL3,
	CMD_MODELATTACK_NORMAL4 = ATK_NORMAL4,
	CMD_MODELATTACK_NORMAL5 = ATK_NORMAL5,
	CMD_MODELATTACK_NORMAL6 = ATK_NORMAL6,
	CMD_MODELATTACK_NORMAL7 = ATK_NORMAL7,
	CMD_MODELATTACK_NORMAL8 = ATK_NORMAL8,
	CMD_MODELATTACK_NORMAL9 = ATK_NORMAL9,
	CMD_MODELATTACK_NORMAL10 = ATK_NORMAL10,
	CMD_MODELATTACK_BLAST = ATK_BLAST,
	CMD_MODELATTACK_STEAL = ATK_STEAL,
	CMD_MODELATTACK_BURN = ATK_BURN,
	CMD_MODELATTACK_SHOCK = ATK_SHOCK,
	CMD_MODELATTACK_FREEZE = ATK_FREEZE,
} modelAttackCommands;

typedef enum {
	CMD_MODELSTXT_MAXIDLES,
	CMD_MODELSTXT_MAXWALKS,
	CMD_MODELSTXT_MAXBACKWALKS,
	CMD_MODELSTXT_MAXUPS,
	CMD_MODELSTXT_MAXDOWNS,
	CMD_MODELSTXT_MAXATTACKTYPES,
	CMD_MODELSTXT_MAXFOLLOWS,
	CMD_MODELSTXT_MAXFREESPECIALS,
	CMD_MODELSTXT_MAXATTACKS,
	CMD_MODELSTXT_MUSIC,
	CMD_MODELSTXT_LOAD,
	CMD_MODELSTXT_COLOURSELECT,
	CMD_MODELSTXT_SPDIRECTION,
	CMD_MODELSTXT_AUTOLAND,
	CMD_MODELSTXT_NOLOST,
	CMD_MODELSTXT_AJSPECIAL,
	CMD_MODELSTXT_NOCOST,
	CMD_MODELSTXT_NOCHEATS,
	CMD_MODELSTXT_NODROPEN,
	CMD_MODELSTXT_KNOW,
	CMD_MODELSTXT_NOAIRCANCEL,
	CMD_MODELSTXT_NOMAXRUSHRESET,
	CMD_MODELSTXT_MPBLOCK,
	CMD_MODELSTXT_BLOCKRATIO,
	CMD_MODELSTXT_NOCHIPDEATH,
	CMD_MODELSTXT_LIFESCORE,
	CMD_MODELSTXT_CREDSCORE,
	CMD_MODELSTXT_VERSUSDAMAGE,
	CMD_MODELSTXT_COMBODELAY,
} modelstxtCommands;

typedef enum {
	CMD_SCRIPT_CONSTANT_COMPATIBLEVERSION,
	CMD_SCRIPT_CONSTANT_PIXEL_8,
	CMD_SCRIPT_CONSTANT_PIXEL_x8,
	CMD_SCRIPT_CONSTANT_PIXEL_16,
	CMD_SCRIPT_CONSTANT_PIXEL_32,
	CMD_SCRIPT_CONSTANT_CV_SAVED_GAME,
	CMD_SCRIPT_CONSTANT_CV_HIGH_SCORE,
	CMD_SCRIPT_CONSTANT_THINK_SPEED,
	CMD_SCRIPT_CONSTANT_COUNTER_SPEED,
	CMD_SCRIPT_CONSTANT_MAX_ENTS,
	CMD_SCRIPT_CONSTANT_MAX_PANELS,
	CMD_SCRIPT_CONSTANT_MAX_WEAPONS,
	CMD_SCRIPT_CONSTANT_MAX_COLOUR_MAPS,
	CMD_SCRIPT_CONSTANT_MAX_NAME_LEN,
	CMD_SCRIPT_CONSTANT_LEVEL_MAX_SPAWNS,
	CMD_SCRIPT_CONSTANT_LEVEL_MAX_PANELS,
	CMD_SCRIPT_CONSTANT_LEVEL_MAX_HOLES,
	CMD_SCRIPT_CONSTANT_LEVEL_MAX_WALLS,
	CMD_SCRIPT_CONSTANT_MAX_LEVELS,
	CMD_SCRIPT_CONSTANT_MAX_DIFFICULTIES,
	CMD_SCRIPT_CONSTANT_MAX_SPECIALS,
	CMD_SCRIPT_CONSTANT_MAX_ATCHAIN,
	CMD_SCRIPT_CONSTANT_MAX_ATTACKS,
	CMD_SCRIPT_CONSTANT_MAX_FOLLOWS,
	CMD_SCRIPT_CONSTANT_MAX_PLAYERS,
	CMD_SCRIPT_CONSTANT_MAX_ARG_LEN,
	CMD_SCRIPT_CONSTANT_FLAG_ESC,
	CMD_SCRIPT_CONSTANT_FLAG_START,
	CMD_SCRIPT_CONSTANT_FLAG_MOVELEFT,
	CMD_SCRIPT_CONSTANT_FLAG_MOVERIGHT,
	CMD_SCRIPT_CONSTANT_FLAG_MOVEUP,
	CMD_SCRIPT_CONSTANT_FLAG_MOVEDOWN,
	CMD_SCRIPT_CONSTANT_FLAG_ATTACK,
	CMD_SCRIPT_CONSTANT_FLAG_ATTACK2,
	CMD_SCRIPT_CONSTANT_FLAG_ATTACK3,
	CMD_SCRIPT_CONSTANT_FLAG_ATTACK4,
	CMD_SCRIPT_CONSTANT_FLAG_JUMP,
	CMD_SCRIPT_CONSTANT_FLAG_SPECIAL,
	CMD_SCRIPT_CONSTANT_FLAG_SCREENSHOT,
	CMD_SCRIPT_CONSTANT_FLAG_ANYBUTTON,
	CMD_SCRIPT_CONSTANT_FLAG_FORWARD,
	CMD_SCRIPT_CONSTANT_FLAG_BACKWARD,
	CMD_SCRIPT_CONSTANT_SDID_MOVEUP,
	CMD_SCRIPT_CONSTANT_SDID_MOVEDOWN,
	CMD_SCRIPT_CONSTANT_SDID_MOVELEFT,
	CMD_SCRIPT_CONSTANT_SDID_MOVERIGHT,
	CMD_SCRIPT_CONSTANT_SDID_SPECIAL,
	CMD_SCRIPT_CONSTANT_SDID_ATTACK,
	CMD_SCRIPT_CONSTANT_SDID_ATTACK2,
	CMD_SCRIPT_CONSTANT_SDID_ATTACK3,
	CMD_SCRIPT_CONSTANT_SDID_ATTACK4,
	CMD_SCRIPT_CONSTANT_SDID_JUMP,
	CMD_SCRIPT_CONSTANT_SDID_START,
	CMD_SCRIPT_CONSTANT_SDID_SCREENSHOT,
	CMD_SCRIPT_CONSTANT_TYPE_NONE,
	CMD_SCRIPT_CONSTANT_TYPE_PLAYER,
	CMD_SCRIPT_CONSTANT_TYPE_ENEMY,
	CMD_SCRIPT_CONSTANT_TYPE_ITEM,
	CMD_SCRIPT_CONSTANT_TYPE_OBSTACLE,
	CMD_SCRIPT_CONSTANT_TYPE_STEAMER,
	CMD_SCRIPT_CONSTANT_TYPE_SHOT,
	CMD_SCRIPT_CONSTANT_TYPE_TRAP,
	CMD_SCRIPT_CONSTANT_TYPE_TEXTBOX,
	CMD_SCRIPT_CONSTANT_TYPE_ENDLEVEL,
	CMD_SCRIPT_CONSTANT_TYPE_NPC,
	CMD_SCRIPT_CONSTANT_TYPE_PANEL,
	CMD_SCRIPT_CONSTANT_SUBTYPE_NONE,
	CMD_SCRIPT_CONSTANT_SUBTYPE_BIKER,
	CMD_SCRIPT_CONSTANT_SUBTYPE_NOTGRAB,
	CMD_SCRIPT_CONSTANT_SUBTYPE_ARROW,
	CMD_SCRIPT_CONSTANT_SUBTYPE_TOUCH,
	CMD_SCRIPT_CONSTANT_SUBTYPE_WEAPON,
	CMD_SCRIPT_CONSTANT_SUBTYPE_NOSKIP,
	CMD_SCRIPT_CONSTANT_SUBTYPE_FLYDIE,
	CMD_SCRIPT_CONSTANT_SUBTYPE_BOTH,
	CMD_SCRIPT_CONSTANT_SUBTYPE_PROJECTILE,
	CMD_SCRIPT_CONSTANT_SUBTYPE_FOLLOW,
	CMD_SCRIPT_CONSTANT_SUBTYPE_CHASE,
	CMD_SCRIPT_CONSTANT_AIMOVE1_NORMAL,
	CMD_SCRIPT_CONSTANT_AIMOVE1_CHASE,
	CMD_SCRIPT_CONSTANT_AIMOVE1_CHASEZ,
	CMD_SCRIPT_CONSTANT_AIMOVE1_CHASEX,
	CMD_SCRIPT_CONSTANT_AIMOVE1_AVOID,
	CMD_SCRIPT_CONSTANT_AIMOVE1_AVOIDZ,
	CMD_SCRIPT_CONSTANT_AIMOVE1_AVOIDX,
	CMD_SCRIPT_CONSTANT_AIMOVE1_WANDER,
	CMD_SCRIPT_CONSTANT_AIMOVE1_NOMOVE,
	CMD_SCRIPT_CONSTANT_AIMOVE1_BIKER,
	CMD_SCRIPT_CONSTANT_AIMOVE1_STAR,
	CMD_SCRIPT_CONSTANT_AIMOVE1_ARROW,
	CMD_SCRIPT_CONSTANT_AIMOVE1_BOMB,
	CMD_SCRIPT_CONSTANT_AIMOVE2_NORMAL,
	CMD_SCRIPT_CONSTANT_AIMOVE2_IGNOREHOLES,
	CMD_SCRIPT_CONSTANT_AIATTACK1_NORMAL,
	CMD_SCRIPT_CONSTANT_AIATTACK1_LONG,
	CMD_SCRIPT_CONSTANT_AIATTACK1_MELEE,
	CMD_SCRIPT_CONSTANT_AIATTACK1_NOATTACK,
	CMD_SCRIPT_CONSTANT_AIATTACK2_NORMAL,
	CMD_SCRIPT_CONSTANT_AIATTACK2_DODGE,
	CMD_SCRIPT_CONSTANT_AIATTACK2_DODGEMOVE,
	CMD_SCRIPT_CONSTANT_FRONTPANEL_Z,
	CMD_SCRIPT_CONSTANT_HOLE_Z,
	CMD_SCRIPT_CONSTANT_NEONPANEL_Z,
	CMD_SCRIPT_CONSTANT_SHADOW_Z,
	CMD_SCRIPT_CONSTANT_SCREENPANEL_Z,
	CMD_SCRIPT_CONSTANT_PANEL_Z,
	CMD_SCRIPT_CONSTANT_MIRROR_Z,
	CMD_SCRIPT_CONSTANT_PIT_DEPTH,
	CMD_SCRIPT_CONSTANT_P2_STATS_DIST,
	CMD_SCRIPT_CONSTANT_CONTACT_DIST_H,
	CMD_SCRIPT_CONSTANT_CONTACT_DIST_V,
	CMD_SCRIPT_CONSTANT_GRAB_DIST,
	CMD_SCRIPT_CONSTANT_GRAB_STALL,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL2,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL3,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL4,
	CMD_SCRIPT_CONSTANT_ATK_BLAST,
	CMD_SCRIPT_CONSTANT_ATK_BURN,
	CMD_SCRIPT_CONSTANT_ATK_FREEZE,
	CMD_SCRIPT_CONSTANT_ATK_SHOCK,
	CMD_SCRIPT_CONSTANT_ATK_STEAL,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL5,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL6,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL7,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL8,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL9,
	CMD_SCRIPT_CONSTANT_ATK_NORMAL10,
	CMD_SCRIPT_CONSTANT_ATK_ITEM,
	CMD_SCRIPT_CONSTANT_SCROLL_RIGHT,
	CMD_SCRIPT_CONSTANT_SCROLL_DOWN,
	CMD_SCRIPT_CONSTANT_SCROLL_LEFT,
	CMD_SCRIPT_CONSTANT_SCROLL_UP,
	CMD_SCRIPT_CONSTANT_SCROLL_BOTH,
	CMD_SCRIPT_CONSTANT_SCROLL_LEFTRIGHT,
	CMD_SCRIPT_CONSTANT_SCROLL_RIGHTLEFT,
	CMD_SCRIPT_CONSTANT_SCROLL_INWARD,
	CMD_SCRIPT_CONSTANT_SCROLL_OUTWARD,
	CMD_SCRIPT_CONSTANT_SCROLL_INOUT,
	CMD_SCRIPT_CONSTANT_SCROLL_OUTIN,
	CMD_SCRIPT_CONSTANT_SCROLL_UPWARD,
	CMD_SCRIPT_CONSTANT_SCROLL_DOWNWARD,
	CMD_SCRIPT_CONSTANT_ANI_IDLE,
	CMD_SCRIPT_CONSTANT_ANI_WALK,
	CMD_SCRIPT_CONSTANT_ANI_JUMP,
	CMD_SCRIPT_CONSTANT_ANI_LAND,
	CMD_SCRIPT_CONSTANT_ANI_PAIN,
	CMD_SCRIPT_CONSTANT_ANI_FALL,
	CMD_SCRIPT_CONSTANT_ANI_RISE,
	CMD_SCRIPT_CONSTANT_ANI_UPPER,
	CMD_SCRIPT_CONSTANT_ANI_BLOCK,
	CMD_SCRIPT_CONSTANT_ANI_JUMPATTACK,
	CMD_SCRIPT_CONSTANT_ANI_JUMPATTACK2,
	CMD_SCRIPT_CONSTANT_ANI_GET,
	CMD_SCRIPT_CONSTANT_ANI_GRAB,
	CMD_SCRIPT_CONSTANT_ANI_GRABATTACK,
	CMD_SCRIPT_CONSTANT_ANI_GRABATTACK2,
	CMD_SCRIPT_CONSTANT_ANI_THROW,
	CMD_SCRIPT_CONSTANT_ANI_SPECIAL,
	CMD_SCRIPT_CONSTANT_ANI_SPAWN,
	CMD_SCRIPT_CONSTANT_ANI_DIE,
	CMD_SCRIPT_CONSTANT_ANI_PICK,
	CMD_SCRIPT_CONSTANT_ANI_JUMPATTACK3,
	CMD_SCRIPT_CONSTANT_ANI_UP,
	CMD_SCRIPT_CONSTANT_ANI_DOWN,
	CMD_SCRIPT_CONSTANT_ANI_SHOCK,
	CMD_SCRIPT_CONSTANT_ANI_BURN,
	CMD_SCRIPT_CONSTANT_ANI_SHOCKPAIN,
	CMD_SCRIPT_CONSTANT_ANI_BURNPAIN,
	CMD_SCRIPT_CONSTANT_ANI_GRABBED,
	CMD_SCRIPT_CONSTANT_ANI_SPECIAL2,
	CMD_SCRIPT_CONSTANT_ANI_RUN,
	CMD_SCRIPT_CONSTANT_ANI_RUNATTACK,
	CMD_SCRIPT_CONSTANT_ANI_RUNJUMPATTACK,
	CMD_SCRIPT_CONSTANT_ANI_ATTACKUP,
	CMD_SCRIPT_CONSTANT_ANI_ATTACKDOWN,
	CMD_SCRIPT_CONSTANT_ANI_ATTACKFORWARD,
	CMD_SCRIPT_CONSTANT_ANI_ATTACKBACKWARD,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK,
	CMD_SCRIPT_CONSTANT_ANI_DODGE,
	CMD_SCRIPT_CONSTANT_ANI_ATTACKBOTH,
	CMD_SCRIPT_CONSTANT_ANI_GRABFORWARD,
	CMD_SCRIPT_CONSTANT_ANI_GRABFORWARD2,
	CMD_SCRIPT_CONSTANT_ANI_JUMPFORWARD,
	CMD_SCRIPT_CONSTANT_ANI_GRABDOWN,
	CMD_SCRIPT_CONSTANT_ANI_GRABDOWN2,
	CMD_SCRIPT_CONSTANT_ANI_GRABUP,
	CMD_SCRIPT_CONSTANT_ANI_GRABUP2,
	CMD_SCRIPT_CONSTANT_ANI_SELECT,
	CMD_SCRIPT_CONSTANT_ANI_DUCK,
	CMD_SCRIPT_CONSTANT_ANI_FAINT,
	CMD_SCRIPT_CONSTANT_ANI_CANT,
	CMD_SCRIPT_CONSTANT_ANI_THROWATTACK,
	CMD_SCRIPT_CONSTANT_ANI_CHARGEATTACK,
	CMD_SCRIPT_CONSTANT_ANI_VAULT,
	CMD_SCRIPT_CONSTANT_ANI_JUMPCANT,
	CMD_SCRIPT_CONSTANT_ANI_JUMPSPECIAL,
	CMD_SCRIPT_CONSTANT_ANI_BURNDIE,
	CMD_SCRIPT_CONSTANT_ANI_SHOCKDIE,
	CMD_SCRIPT_CONSTANT_ANI_PAIN2,
	CMD_SCRIPT_CONSTANT_ANI_PAIN3,
	CMD_SCRIPT_CONSTANT_ANI_PAIN4,
	CMD_SCRIPT_CONSTANT_ANI_FALL2,
	CMD_SCRIPT_CONSTANT_ANI_FALL3,
	CMD_SCRIPT_CONSTANT_ANI_FALL4,
	CMD_SCRIPT_CONSTANT_ANI_DIE2,
	CMD_SCRIPT_CONSTANT_ANI_DIE3,
	CMD_SCRIPT_CONSTANT_ANI_DIE4,
	CMD_SCRIPT_CONSTANT_ANI_CHARGE,
	CMD_SCRIPT_CONSTANT_ANI_BACKWALK,
	CMD_SCRIPT_CONSTANT_ANI_SLEEP,
	CMD_SCRIPT_CONSTANT_ANI_PAIN5,
	CMD_SCRIPT_CONSTANT_ANI_PAIN6,
	CMD_SCRIPT_CONSTANT_ANI_PAIN7,
	CMD_SCRIPT_CONSTANT_ANI_PAIN8,
	CMD_SCRIPT_CONSTANT_ANI_PAIN9,
	CMD_SCRIPT_CONSTANT_ANI_PAIN10,
	CMD_SCRIPT_CONSTANT_ANI_FALL5,
	CMD_SCRIPT_CONSTANT_ANI_FALL6,
	CMD_SCRIPT_CONSTANT_ANI_FALL7,
	CMD_SCRIPT_CONSTANT_ANI_FALL8,
	CMD_SCRIPT_CONSTANT_ANI_FALL9,
	CMD_SCRIPT_CONSTANT_ANI_FALL10,
	CMD_SCRIPT_CONSTANT_ANI_DIE5,
	CMD_SCRIPT_CONSTANT_ANI_DIE6,
	CMD_SCRIPT_CONSTANT_ANI_DIE7,
	CMD_SCRIPT_CONSTANT_ANI_DIE8,
	CMD_SCRIPT_CONSTANT_ANI_DIE9,
	CMD_SCRIPT_CONSTANT_ANI_DIE10,
	CMD_SCRIPT_CONSTANT_ANI_TURN,
	CMD_SCRIPT_CONSTANT_ANI_RESPAWN,
	CMD_SCRIPT_CONSTANT_ANI_FORWARDJUMP,
	CMD_SCRIPT_CONSTANT_ANI_RUNJUMP,
	CMD_SCRIPT_CONSTANT_ANI_JUMPLAND,
	CMD_SCRIPT_CONSTANT_ANI_JUMPDELAY,
	CMD_SCRIPT_CONSTANT_ANI_HITWALL,
	CMD_SCRIPT_CONSTANT_ANI_GRABBACKWARD,
	CMD_SCRIPT_CONSTANT_ANI_GRABBACKWARD2,
	CMD_SCRIPT_CONSTANT_ANI_GRABWALK,
	CMD_SCRIPT_CONSTANT_ANI_GRABBEDWALK,
	CMD_SCRIPT_CONSTANT_ANI_GRABWALKUP,
	CMD_SCRIPT_CONSTANT_ANI_GRABBEDWALKUP,
	CMD_SCRIPT_CONSTANT_ANI_GRABWALKDOWN,
	CMD_SCRIPT_CONSTANT_ANI_GRABBEDWALKDOWN,
	CMD_SCRIPT_CONSTANT_ANI_GRABTURN,
	CMD_SCRIPT_CONSTANT_ANI_GRABBEDTURN,
	CMD_SCRIPT_CONSTANT_ANI_GRABBACKWALK,
	CMD_SCRIPT_CONSTANT_ANI_GRABBEDBACKWALK,
	CMD_SCRIPT_CONSTANT_ANI_SLIDE,
	CMD_SCRIPT_CONSTANT_ANI_RUNSLIDE,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN,
	CMD_SCRIPT_CONSTANT_ANI_DUCKATTACK,
	CMD_SCRIPT_CONSTANT_MAX_ANIS,
	CMD_SCRIPT_CONSTANT_PLAYER_MIN_Z,
	CMD_SCRIPT_CONSTANT_PLAYER_MAX_Z,
	CMD_SCRIPT_CONSTANT_BGHEIGHT,
	CMD_SCRIPT_CONSTANT_MAX_WALL_HEIGHT,
	CMD_SCRIPT_CONSTANT_SAMPLE_GO,
	CMD_SCRIPT_CONSTANT_SAMPLE_BEAT,
	CMD_SCRIPT_CONSTANT_SAMPLE_BLOCK,
	CMD_SCRIPT_CONSTANT_SAMPLE_INDIRECT,
	CMD_SCRIPT_CONSTANT_SAMPLE_GET,
	CMD_SCRIPT_CONSTANT_SAMPLE_GET2,
	CMD_SCRIPT_CONSTANT_SAMPLE_FALL,
	CMD_SCRIPT_CONSTANT_SAMPLE_JUMP,
	CMD_SCRIPT_CONSTANT_SAMPLE_PUNCH,
	CMD_SCRIPT_CONSTANT_SAMPLE_1UP,
	CMD_SCRIPT_CONSTANT_SAMPLE_TIMEOVER,
	CMD_SCRIPT_CONSTANT_SAMPLE_BEEP,
	CMD_SCRIPT_CONSTANT_SAMPLE_BEEP2,
	CMD_SCRIPT_CONSTANT_SAMPLE_BIKE,
	CMD_SCRIPT_CONSTANT_ANI_RISE2,
	CMD_SCRIPT_CONSTANT_ANI_RISE3,
	CMD_SCRIPT_CONSTANT_ANI_RISE4,
	CMD_SCRIPT_CONSTANT_ANI_RISE5,
	CMD_SCRIPT_CONSTANT_ANI_RISE6,
	CMD_SCRIPT_CONSTANT_ANI_RISE7,
	CMD_SCRIPT_CONSTANT_ANI_RISE8,
	CMD_SCRIPT_CONSTANT_ANI_RISE9,
	CMD_SCRIPT_CONSTANT_ANI_RISE10,
	CMD_SCRIPT_CONSTANT_ANI_RISEB,
	CMD_SCRIPT_CONSTANT_ANI_RISES,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN2,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN3,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN4,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN5,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN6,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN7,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN8,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN9,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAIN10,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAINB,
	CMD_SCRIPT_CONSTANT_ANI_BLOCKPAINS,
	CMD_SCRIPT_CONSTANT_ANI_CHIPDEATH,
	CMD_SCRIPT_CONSTANT_ANI_GUARDBREAK,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK2,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK3,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK4,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK5,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK6,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK7,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK8,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK9,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACK10,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACKB,
	CMD_SCRIPT_CONSTANT_ANI_RISEATTACKS,
	CMD_SCRIPT_CONSTANT_ANI_FOLLOW,
	CMD_SCRIPT_CONSTANT_ANI_FREESPECIAL,
	CMD_SCRIPT_CONSTANT_ANI_ATTACK
} scriptConstantsCommands;

void freeCommandList(List * list);

List *createModelCommandList(void);
modelCommands getModelCommand(List * list, char *usercommand);

List *createModelAttackCommandList(void);
modelAttackCommands getModelAttackCommand(List * list, char *usercommand);

List *createModelstxtCommandList(void);
modelstxtCommands getModelstxtCommand(List * list, char *usercommand);

List *createLevelCommandList(void);
levelCommands getLevelCommand(List * list, char *usercommand);

List *createLevelOrderCommandList(void);
levelOrderCommands getLevelOrderCommand(List * list, char *usercommand);

List *createScriptConstantsCommandList(void);
scriptConstantsCommands getScriptConstantsCommand(List * list, char *usercommand);


#endif