section "q00_pl_000"{
    System_GlobalWork(4, 0, 0);
    System_GlobalWork(5, 0, 0);
    System_GlobalWork(6, 0, 0);
    System_GlobalWork(7, 0, 0);
    System_GlobalWork(8, 0, 0);
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;
    int var8;
    var0 = Parameter_ExtChar(1, 6, 3, 1, 6, 7, 8);
    if (Parameter_GetCh1Param(2, 514) == 0){
        var4 = 10;
        }
    if (Parameter_GetCh1Param(3, 514) == 0){
        var5 = 11;
        }
    if (Parameter_GetCh1Param(4, 514) == 0){
        var6 = 12;
        }
    if (Parameter_GetCh1Param(5, 514) == 0){
        var7 = 13;
        }
    var2 = Parameter_ExtChar(3, 6, 3, 1, var4, var5, var6, var7);
    switch (var2){
        case 10:
        var1 = 2;
        break ;
        case 11:
        var1 = 3;
        break ;
        case 12:
        var1 = 4;
        break ;
        case 13:
        var1 = 5;
        break ;
        default :
        var1 = 0;
        break ;
        }
    if ((var0 == var1 && var0 != 0)){
        var0 = Parameter_ExtChar(0, 6, 3, 1, var1, 6, 7, 8);
        }
    if ((var0 != 0 && var1 != 0 && var2 != 0)){
        System_GlobalWork(4, 0, var0);
        System_GlobalWork(5, 0, var1);
        System_GlobalWork(6, 0, var2);
        }
    var3 = 1;
    if ((var0 != 0 && var1 != 0 && var2 != 0)){
        switch (var2){
            case 10:
            System_Call_GS2("Q21", "G1", 0);
            break ;
            case 11:
            System_Call_GS2("Q21", "G2", 0);
            break ;
            case 12:
            System_Call_GS2("Q21", "G3", 0);
            break ;
            case 13:
            System_Call_GS2("Q21", "G4", 0);
            break ;
            }
        if (System_GlobalWork(7, 1) == 1){
            var0 = Parameter_ExtChar(0, 6, 3, 1, 6, 7, 8);
            var1 = Parameter_ExtChar(0, 6, 3, 1, var0, 6, 7, 8);
            if ((var0 != 0 && var1 != 0)){
                if (Parameter_GetCh1Param(7, 130) >= 4){
                    System_Call_GS2("Q22", "M7", 10);
                    var2 = 7;
                    System_GlobalWork(4, 0, var0);
                    System_GlobalWork(5, 0, var1);
                    System_GlobalWork(6, 0, var2);
                    }
                else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetCh1Param(3, 514) == 1)){
                    System_Call_GS2("Q22", "M3", 10);
                    var3 = 0;
                    }
                else {
                    System_Call_GS2("Q22", "PL", 0);
                    var3 = 0;
                    }
                }
            else if ((Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetCh1Param(3, 514) == 1)){
                System_Call_GS2("Q22", "M3", 10);
                var3 = 0;
                }
            else {
                System_Call_GS2("Q22", "PL", 0);
                var3 = 0;
                }
            }
        if (var3 == 1){
            System_GlobalWork(8, 0, var3);
            Background_Bg_GS2("BG_SCB30_LI_2", #1, #1, 0);
            Screen_WipeIn(2);
            switch (var1){
                case 1:
                System_Call_GS2("Q22", "M1", 0);
                break ;
                case 2:
                System_Call_GS2("Q22", "M2", 0);
                break ;
                case 3:
                System_Call_GS2("Q22", "M3", 0);
                break ;
                case 4:
                System_Call_GS2("Q22", "M4", 0);
                break ;
                case 5:
                System_Call_GS2("Q22", "M5", 0);
                break ;
                }
            Character_Chara_GS2(var1, "NON");
            switch (var0){
                case 1:
                System_Call_GS2("Q22", "M1", 0);
                break ;
                case 2:
                System_Call_GS2("Q22", "M2", 0);
                break ;
                case 3:
                System_Call_GS2("Q22", "M3", 0);
                break ;
                case 4:
                System_Call_GS2("Q22", "M4", 0);
                break ;
                case 5:
                System_Call_GS2("Q22", "M5", 0);
                break ;
                }
            if (System_GlobalWork(6, 1) == 7){
                Character_Chara_GS2(var0, "NON");
                System_Call_GS2("Q22", "M7", 0);
                System_Call_GS2("Q23", "M7", 0);
                }
            else {
                switch (var0){
                    case 1:
                    System_Call_GS2("Q23", "M1", 0);
                    break ;
                    case 2:
                    System_Call_GS2("Q23", "M2", 0);
                    break ;
                    case 3:
                    System_Call_GS2("Q23", "M3", 0);
                    break ;
                    case 4:
                    System_Call_GS2("Q23", "M4", 0);
                    break ;
                    case 5:
                    System_Call_GS2("Q23", "M5", 0);
                    break ;
                    }
                }
            Environment_StopME(0, 0);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Minigame(4);
            var8 = Run_Minigame_Result();
            System_Call_GS2("Q25", "PL", 0);
            }
        }
    Run_SetMakuraChar(var2, var0, var1);
    }
