section "p15_pl_000"{
    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Our class's coffee shop was\nextremely popular.\nIt was an enjoyable Culture\nFestival!");
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, 4);
        Parameter_AddCh1Param(#1, 62, #4);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "I made a lot of mistakes and caused\ntrouble for everyone.\nI need to reflect on this...");
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, #4);
        Parameter_AddCh1Param(#1, 62, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_ChkSpEvent("D01", "M4", 0) == 1){
            System_Call_GS2("D01", "M4", 0);
            }
        }
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(This is how this year's Culture\nFestival ended.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Parameter_AddPl1Param(322, 1);
    }
