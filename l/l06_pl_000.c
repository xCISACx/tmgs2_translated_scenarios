section "l06_pl_000"{
    int var0 = 5;
    while (var0 >= 3){
        if (var0 == 3){
            if ((Parameter_GetCh1Param(1, 524) <= var0) && (Parameter_GetCh1Param(1, 524) != 0)){
                System_Call_GS2("L06", "M1", 0);
                }
            }
        else if (Parameter_GetCh1Param(1, 524) == var0){
            System_Call_GS2("L06", "M1", 0);
            }
        if (var0 == 3){
            if ((Parameter_GetCh1Param(2, 524) <= var0) && (Parameter_GetCh1Param(2, 524) != 0)){
                System_Call_GS2("L06", "M2", 0);
                }
            }
        else if (Parameter_GetCh1Param(2, 524) == var0){
            System_Call_GS2("L06", "M2", 0);
            }
        if (var0 == 3){
            if ((Parameter_GetCh1Param(3, 524) <= var0) && (Parameter_GetCh1Param(3, 524) != 0)){
                System_Call_GS2("L06", "M3", 0);
                }
            }
        else if (Parameter_GetCh1Param(3, 524) == var0){
            System_Call_GS2("L06", "M3", 0);
            }
        if (var0 == 3){
            if ((Parameter_GetCh1Param(4, 524) <= var0) && (Parameter_GetCh1Param(4, 524) != 0)){
                System_Call_GS2("L06", "M4", 0);
                }
            }
        else if (Parameter_GetCh1Param(4, 524) == var0){
            System_Call_GS2("L06", "M4", 0);
            }
        if (var0 == 3){
            if ((Parameter_GetCh1Param(5, 524) <= var0) && (Parameter_GetCh1Param(5, 524) != 0)){
                System_Call_GS2("L06", "M5", 0);
                }
            }
        else if (Parameter_GetCh1Param(5, 524) == var0){
            System_Call_GS2("L06", "M5", 0);
            }
        if (var0 == 3){
            if ((Parameter_GetCh1Param(6, 524) <= var0) && (Parameter_GetCh1Param(6, 524) != 0)){
                System_Call_GS2("L06", "M6", 0);
                }
            }
        else if (Parameter_GetCh1Param(6, 524) == var0){
            System_Call_GS2("L06", "M6", 0);
            }
        if (var0 == 3){
            if ((Parameter_GetCh1Param(7, 524) <= var0) && (Parameter_GetCh1Param(7, 524) != 0)){
                System_Call_GS2("L06", "M7", 0);
                }
            }
        else if (Parameter_GetCh1Param(7, 524) == var0){
            System_Call_GS2("L06", "M7", 0);
            }
        var0 = var0 - 1;
        }
    if (Parameter_GetCh1Param(8, 524) != 0){
        System_Call_GS2("L06", "M8", 0);
        }
    }
