section "o10_pl_000"{
    int var0 = 0;
    Environment_PauseME(0);
    Background_Bg_GS2("BG_SC120_LI_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(*Phew* The Sports Festival has\nended.\nLet's return home.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Parameter_AddCh1Param(#1, 61, 5);
        Parameter_AddCh1Param(#1, 60, 3);
        }
    else if (var0 == 2){
        Parameter_AddCh1Param(#1, 61, 3);
        Parameter_AddCh1Param(#1, 60, 1);
        }
    else if (var0 == 3){
        Parameter_AddCh1Param(#1, 61, 0);
        Parameter_AddCh1Param(#1, 60, 0);
        }
    else if (var0 == 4){
        Parameter_AddCh1Param(#1, 61, #3);
        Parameter_AddCh1Param(#1, 60, #1);
        }
    else {
        }
    }
