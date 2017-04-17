#include "tb_defines.hpp"

zoneList[] =
{
//ID TEAM          SPAWNTYPE      LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0         ,    {}         , {}    , 1      , {}        , 0      },
// You must not link first flags to attacking side's XRAY base for A&D, otherwise game ends after first flag.
{ 1, TEAM_RED   , SPAWN_XRAY,    {4,5,6,7} , {}    , 1      , {}        , 0    , "Insurgents Main Base" },
{ 2, TEAM_BLUE  , SPAWN_XRAY,    {}          , {}    , 1      , {}        , 0    , "US Main Base" },
{3, TEAM_BLUE  , SPAWN_LARGEFB, {}          , {}    , 1      , {}       , 0    , "Air Base" }, // FB

{ 4, TEAM_BLUE  , SPAWN_NEVER,   {8}         , {5,6,7} , 1  , {}        , 0    , "%1" },
{ 5, TEAM_BLUE  , SPAWN_NEVER,   {8}         , {4,6,7} , 1  , {}        , 0    , "%1" },
{ 6, TEAM_BLUE  , SPAWN_NEVER,   {8}         , {4,5,7} , 1  , {}        , 0    , "%1" },
{ 7, TEAM_BLUE  , SPAWN_NEVER,   {8}         , {4,5,6} , 1  , {}        , 0    , "%1" },
{ 8, TEAM_BLUE  , SPAWN_NEVER,   {2}         , {} , 1  , {}        , 0    , "%1" },



{ 9, TEAM_BLUE  , SPAWN_LARGEFB,    {}          , {}    , 1      , {}        , 0    , "FB Campbell" }


// For FB's, you must depend link the FB zones to the main base, otherwise the zones will appear in the opposition's Base Deployment dialog.


};
