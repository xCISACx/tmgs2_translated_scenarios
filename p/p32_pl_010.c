section "p32_pl_010"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    System_GlobalWork(0, 0, 0);
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    Parameter_FestaShuffle(1);
    var2 = System_Randam(0, 5);
    switch (var2){
        case 0:
        var3 = Parameter_GetPl1Param(317);
        var4 = Parameter_GetPl1Param(318);
        var5 = Parameter_GetPl1Param(319);
        break ;
        case 1:
        var3 = Parameter_GetPl1Param(317);
        var5 = Parameter_GetPl1Param(318);
        var4 = Parameter_GetPl1Param(319);
        break ;
        case 2:
        var4 = Parameter_GetPl1Param(317);
        var3 = Parameter_GetPl1Param(318);
        var5 = Parameter_GetPl1Param(319);
        break ;
        case 3:
        var4 = Parameter_GetPl1Param(317);
        var5 = Parameter_GetPl1Param(318);
        var3 = Parameter_GetPl1Param(319);
        break ;
        case 4:
        var5 = Parameter_GetPl1Param(317);
        var3 = Parameter_GetPl1Param(318);
        var4 = Parameter_GetPl1Param(319);
        break ;
        case 5:
        var5 = Parameter_GetPl1Param(317);
        var4 = Parameter_GetPl1Param(318);
        var3 = Parameter_GetPl1Param(319);
        break ;
        }
    switch (var3){
        case 1:
        if (Parameter_GetCh1Param(4, 514) == 1){
            System_Call_GS2("F11", "M1", 104);
            }
        break ;
        case 2:
        System_Call_GS2("F11", "M2", 100);
        break ;
        case 3:
        System_Call_GS2("F11", "M3", 100);
        break ;
        case 4:
        System_Call_GS2("F11", "M4", 100);
        break ;
        case 5:
        System_Call_GS2("F11", "M5", 100);
        break ;
        case 6:
        System_Call_GS2("F11", "M6", 100);
        break ;
        case 7:
        System_Call_GS2("F11", "M7", 100);
        break ;
        case 10:
        System_Call_GS2("F11", "G1", 100);
        break ;
        case 11:
        System_Call_GS2("F11", "G2", 100);
        break ;
        case 12:
        System_Call_GS2("F11", "G3", 100);
        break ;
        case 13:
        System_Call_GS2("F11", "G4", 100);
        break ;
        }
    switch (var4){
        case 1:
        if (Parameter_GetCh1Param(4, 514) == 1){
            System_Call_GS2("F11", "M1", 104);
            }
        break ;
        case 2:
        System_Call_GS2("F11", "M2", 100);
        break ;
        case 3:
        System_Call_GS2("F11", "M3", 100);
        break ;
        case 4:
        System_Call_GS2("F11", "M4", 100);
        break ;
        case 5:
        System_Call_GS2("F11", "M5", 100);
        break ;
        case 6:
        System_Call_GS2("F11", "M6", 100);
        break ;
        case 7:
        System_Call_GS2("F11", "M7", 100);
        break ;
        case 10:
        System_Call_GS2("F11", "G1", 100);
        break ;
        case 11:
        System_Call_GS2("F11", "G2", 100);
        break ;
        case 12:
        System_Call_GS2("F11", "G3", 100);
        break ;
        case 13:
        System_Call_GS2("F11", "G4", 100);
        break ;
        }
    switch (var5){
        case 1:
        if (Parameter_GetCh1Param(4, 514) == 1){
            System_Call_GS2("F11", "M1", 104);
            }
        break ;
        case 2:
        System_Call_GS2("F11", "M2", 100);
        break ;
        case 3:
        System_Call_GS2("F11", "M3", 100);
        break ;
        case 4:
        System_Call_GS2("F11", "M4", 100);
        break ;
        case 5:
        System_Call_GS2("F11", "M5", 100);
        break ;
        case 6:
        System_Call_GS2("F11", "M6", 100);
        break ;
        case 7:
        System_Call_GS2("F11", "M7", 100);
        break ;
        case 10:
        System_Call_GS2("F11", "G1", 100);
        break ;
        case 11:
        System_Call_GS2("F11", "G2", 100);
        break ;
        case 12:
        System_Call_GS2("F11", "G3", 100);
        break ;
        case 13:
        System_Call_GS2("F11", "G4", 100);
        break ;
        }
    if (Parameter_ChkSpEvent("D01", "M2", 1) == 1){
        System_Call_GS2("D01", "M2", 1);
        }
    switch (var0){
        case 0:
        System_Call_GS2("P33", "S1", 0);
        break ;
        case 1:
        System_Call_GS2("P33", "M1", 0);
        break ;
        case 2:
        System_Call_GS2("P33", "M2", 0);
        break ;
        case 3:
        System_Call_GS2("P33", "M3", 0);
        break ;
        case 4:
        System_Call_GS2("P33", "M4", 0);
        break ;
        case 5:
        System_Call_GS2("P33", "M5", 0);
        break ;
        case 6:
        System_Call_GS2("P33", "M6", 0);
        break ;
        case 7:
        System_Call_GS2("P33", "M7", 0);
        break ;
        case 8:
        System_Call_GS2("P33", "M8", 0);
        break ;
        }
    System_Call_GS2("P35", "PL", 0);
    }
