section "p35_pl_000"{
    int var0;
    var0 = Parameter_ExtChar(1, 6, 3, 1);
    if (var0 != 8){
        Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            if (System_GlobalWork(0, 1) == 0){
                Message_Who(0);
                Message_MsgDisp("主人公", "I was able to have the leading role\nof the play.\nIt was a good memory...");
                }
            else if (System_GlobalWork(0, 1) == 1){
                Message_Who(0);
                Message_MsgDisp("主人公", "Although I was just a stagehand, it\nwas a good memory...");
                }
            Parameter_AddCh1Param(#1, 61, 6);
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Although I was just a stagehand, it\nwas a good memory...");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_GetSysParam(0) == 1){
            if (Parameter_ChkSpEvent("D01", "M4", 0) == 1){
                System_Call_GS2("D01", "M4", 0);
                }
            }
        Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(That's how the Culture Festival of\nmy high school life ended.)");
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        System_GlobalWork(0, 0, 0);
        }
    else if (var0 == 8){
        Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(That's how the Culture Festival of\nmy high school life ended.)");
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        System_GlobalWork(0, 0, 0);
        }
    else {
        }
    Parameter_AddPl1Param(322, 1);
    }
