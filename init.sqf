#include "\ice\tb_main\sys\gameModes\aad_init.sqf"

0 setfog [0, 0, 0];
if (isServer) then {7200 setfog [0, 0, 0];};

[] execVM "functions\initFastRope.sqf";

