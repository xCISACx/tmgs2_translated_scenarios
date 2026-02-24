section "r02_pl_010"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    var0 = Parameter_ExtChar(2, 6, 0, 1);
    switch (var0){
        case 10:
        System_Call_GS2("R03", "G1", 0);
        break ;
        case 11:
        System_Call_GS2("R03", "G2", 0);
        break ;
        case 12:
        System_Call_GS2("R03", "G3", 0);
        break ;
        case 13:
        System_Call_GS2("R03", "G4", 0);
        break ;
        }
    var2 = 0;
    var3 = 0;
    var4 = 8;
    if (Parameter_GetSysParam(0) == 3){
        var5 = 1;
        }
    else {
        var5 = 0;
        }
    if (Parameter_GetCh1Param(1, 514) == 1){
        var1 = Parameter_ExtChar(1, 6, 3, 1, var5, var4);
        }
    if (var1 != 0){
        }
    switch (var1){
        case 0:
        break ;
        case 1:
        var2 = 1;
        System_Call_GS2("R04", "M1", 0);
        break ;
        case 2:
        var2 = 2;
        System_Call_GS2("R04", "M2", 0);
        break ;
        case 3:
        var2 = 3;
        System_Call_GS2("R04", "M3", 0);
        break ;
        case 4:
        var2 = 4;
        System_Call_GS2("R04", "M4", 0);
        break ;
        case 5:
        var2 = 5;
        System_Call_GS2("R04", "M5", 0);
        break ;
        case 6:
        var2 = 6;
        System_Call_GS2("R04", "M6", 0);
        break ;
        case 7:
        var2 = 7;
        System_Call_GS2("R04", "M7", 0);
        break ;
        }
    var1 = Parameter_ExtChar(1, 6, 3, 1, var5, var4, var2);
    switch (var1){
        case 1:
        var3 = 1;
        System_Call_GS2("R04", "M1", 0);
        break ;
        case 2:
        var3 = 2;
        System_Call_GS2("R04", "M2", 0);
        break ;
        case 3:
        var3 = 3;
        System_Call_GS2("R04", "M3", 0);
        break ;
        case 4:
        var3 = 4;
        System_Call_GS2("R04", "M4", 0);
        break ;
        case 5:
        var3 = 5;
        System_Call_GS2("R04", "M5", 0);
        break ;
        case 6:
        var3 = 6;
        System_Call_GS2("R04", "M6", 0);
        break ;
        case 7:
        var3 = 7;
        System_Call_GS2("R04", "M7", 0);
        break ;
        }
    var1 = Parameter_ExtChar(1, 6, 3, 1, var5, var4, var2, var3);
    switch (var1){
        case 0:
        break ;
        case 1:
        System_Call_GS2("R04", "M1", 0);
        break ;
        case 2:
        System_Call_GS2("R04", "M2", 0);
        break ;
        case 3:
        System_Call_GS2("R04", "M3", 0);
        break ;
        case 4:
        System_Call_GS2("R04", "M4", 0);
        break ;
        case 5:
        System_Call_GS2("R04", "M5", 0);
        break ;
        case 6:
        System_Call_GS2("R04", "M6", 0);
        break ;
        case 7:
        System_Call_GS2("R04", "M7", 0);
        break ;
        }
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    }
