section "o01_pl_000"{
    int var0;
    int var1;
    Background_Bg_GS2("BG_SC120_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_BGB_016_000", 127, 40);
    if (Parameter_GetPl1Param(13) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "The Sports Festival is today.\nOkay, I'll do my best!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "The Sports Festival is today...\nIt's hard to participate when I'm\nsick...");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Should I participate?");
    Message_MsgSel("Participate in a competition.", "Don't take part in a competition.");
    switch (Message_TextSelect()){
        case 0:
        Message_MsgSel("Borrowing race", "Three-legged race", "Bread eating race");
        switch (Message_TextSelect()){
            case 0:
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, let's go for the borrowing\nrace!");
            Message_CloseMsg();
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Minigame(2);
            Parameter_InPl2Param(40, Run_Minigame_Result());
            Screen_ClearScreen();
            Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_BGB_016_000", 127, 40);
            Environment_PlayME(0, "", 127, 0);
            var0 = Parameter_ExtChar(1, 6, 0, 1, 8);
            switch (var0){
                case 0:
                System_Call_GS2("O05", "S1", 0);
                break ;
                case 1:
                System_Call_GS2("O05", "M1", 0);
                break ;
                case 2:
                System_Call_GS2("O05", "M2", 0);
                break ;
                case 3:
                System_Call_GS2("O05", "M3", 0);
                break ;
                case 4:
                System_Call_GS2("O05", "M4", 0);
                break ;
                case 5:
                System_Call_GS2("O05", "M5", 0);
                break ;
                case 6:
                System_Call_GS2("O05", "M6", 0);
                break ;
                case 7:
                System_Call_GS2("O05", "M7", 0);
                break ;
                }
            break ;
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, let's go for the three-legged\nrace!");
            var0 = Parameter_Nisan_Partner();
            switch (var0){
                case 0:
                System_Call_GS2("O03", "M1", 10);
                var1 = 1;
                break ;
                case 1:
                System_Call_GS2("O03", "M1", 10);
                var1 = 1;
                break ;
                case 2:
                System_Call_GS2("O03", "M2", 10);
                var1 = 2;
                break ;
                case 3:
                System_Call_GS2("O03", "M3", 10);
                var1 = 3;
                break ;
                case 4:
                System_Call_GS2("O03", "M4", 10);
                var1 = 4;
                break ;
                case 5:
                System_Call_GS2("O03", "M5", 10);
                var1 = 5;
                break ;
                case 6:
                System_Call_GS2("O03", "M6", 10);
                var1 = 6;
                break ;
                }
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Minigame(0);
            Parameter_InPl2Param(40, Run_Minigame_Result());
            Screen_ClearScreen();
            Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_BGB_016_000", 127, 40);
            Environment_PlayME(0, "", 127, 0);
            switch (var1){
                case 1:
                System_Call_GS2("O03", "M1", 0);
                break ;
                case 2:
                System_Call_GS2("O03", "M2", 0);
                break ;
                case 3:
                System_Call_GS2("O03", "M3", 0);
                break ;
                case 4:
                System_Call_GS2("O03", "M4", 0);
                break ;
                case 5:
                System_Call_GS2("O03", "M5", 0);
                break ;
                case 6:
                System_Call_GS2("O03", "M6", 0);
                break ;
                }
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, let's go for the bread eating\nrace!");
            Message_CloseMsg();
            Environment_StopME(0, 40);
            Music_StopBGM(0, 40);
            Screen_WipeOut(2);
            Screen_ClearScreen();
            Run_Minigame(1);
            Parameter_InPl2Param(40, Run_Minigame_Result());
            Screen_ClearScreen();
            Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_BGB_016_000", 127, 40);
            Environment_PlayME(0, "", 127, 0);
            var0 = Parameter_ExtChar(1, 6, 0, 1, 8);
            switch (var0){
                case 1:
                System_Call_GS2("O04", "M1", 0);
                break ;
                case 2:
                System_Call_GS2("O04", "M2", 0);
                break ;
                case 3:
                System_Call_GS2("O04", "M3", 0);
                break ;
                case 4:
                System_Call_GS2("O04", "M4", 0);
                break ;
                case 5:
                System_Call_GS2("O04", "M5", 0);
                break ;
                case 6:
                System_Call_GS2("O04", "M6", 0);
                break ;
                case 7:
                System_Call_GS2("O04", "M7", 0);
                break ;
                }
            break ;
            }
        if (Parameter_GetSysParam(0) != 1){
            if (Parameter_ChkSpEvent("D01", "G1", 0) == 1){
                System_Call_GS2("D01", "G1", 0);
                }
            }
        else {
            }
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "I don't think I'll participate...");
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        break ;
        }
    if (Parameter_GetSysParam(0) == 1){
        if (Parameter_ChkSpEvent("D01", "M2", 2) == 1){
            System_Call_GS2("D01", "M2", 2);
            }
        }
    Music_StopBGM(0, 40);
    Music_PlayBGM(0, "MN_B_SC_422_000", 127, 40);
    System_Call_GS2("O07", "PL", 0);
    System_Call_GS2("O09", "PL", 0);
    Music_StopBGM(0, 40);
    System_Call_GS2("O10", "PL", 0);
    }
