section "r07_pl_000"{
    int var0;
    if (Parameter_GetSysParam(0) == 1){
        Background_Bg_GS2("BG_SC800_WI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how Christmas Eve ended...)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Background_Bg_GS2("BG_SC800_WI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how Christmas Eve ended...)");
        }
    else {
        if (Parameter_GetCh1Param(1, 543) == 1){
            Background_Bg_GS2("BG_SC830_WI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how Christmas Eve ended...)");
            }
        else if ((Parameter_GetCh1Param(1, 544) == 1) && (Parameter_GetPl1Param(26) != 1)){
            Background_Bg_GS2("BG_SC830_WI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how Christmas Eve ended...)");
            }
        else {
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if ((Parameter_GetSysParam(0) <= 2) && ((Parameter_ChkPlayer(6) == 1) || (Parameter_ChkPlayer(6) == 0))){
        var0 = Parameter_ExtChar(3, 6, 3, 1);
        switch (var0){
            case 10:
            System_Call_GS2("K02", "G1", 0);
            break ;
            case 11:
            System_Call_GS2("K02", "G2", 0);
            break ;
            case 12:
            System_Call_GS2("K02", "G3", 0);
            break ;
            case 13:
            System_Call_GS2("K02", "G4", 0);
            break ;
            }
        var0 = Parameter_ExtChar(1, 6, 3, 1);
        switch (var0){
            case 1:
            System_Call_GS2("K02", "M1", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 2:
            System_Call_GS2("K02", "M2", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 3:
            System_Call_GS2("K02", "M3", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 4:
            System_Call_GS2("K02", "M4", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 5:
            System_Call_GS2("K02", "M5", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 6:
            System_Call_GS2("K02", "M6", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 7:
            System_Call_GS2("K02", "M7", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            case 8:
            System_Call_GS2("K02", "M8", 0);
            Parameter_InPl1Param(336, #1);
            break ;
            }
        }
    }
