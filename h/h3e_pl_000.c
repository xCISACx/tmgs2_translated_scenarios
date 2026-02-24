section "h3e_pl_000"{
    Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetBkParam(3, 333) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I should go home!");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Huh? Something fell.");
        SoundEffect_PlayStream(2, "SS_T_00_158_S00");
        Message_CloseMsg();
        Screen_WipeOut(3);
        Screen_WipeIn(3);
        Message_Who(0);
        Message_MsgDisp("主人公", "T-This is!?");
        Message_Who(0);
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nstandard Track and Field Club item,\n\"Breeze Shoes\"!)");
        Parameter_AddPl1Param(16, 5);
        Parameter_AddPl1Param(19, 10);
        }
    else if (Parameter_GetBkParam(3, 333) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I should go home!");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Huh? Something fell.");
        SoundEffect_PlayStream(2, "SS_T_00_158_S00");
        Message_CloseMsg();
        Screen_WipeOut(3);
        Screen_WipeIn(3);
        Message_Who(0);
        Message_MsgDisp("主人公", "T-This is!?");
        Message_Who(0);
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nsecret Track and Field Club item,\n\"Hurricane Shoes\"!)");
        Parameter_AddPl1Param(16, 10);
        Parameter_AddPl1Param(19, 20);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, I should go home!");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Huh? Something fell.");
        SoundEffect_PlayStream(2, "SS_T_00_158_S00");
        Message_CloseMsg();
        Screen_WipeOut(3);
        Screen_WipeIn(3);
        Message_Who(0);
        Message_MsgDisp("主人公", "T-This is!?");
        Message_Who(0);
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nlegendary Track and Field Club item,\n\"Gale Shoes\"!)");
        Parameter_AddPl1Param(16, 15);
        Parameter_AddPl1Param(19, 30);
        }
    Message_CloseMsg();
    Parameter_AddBkParam(3, 333, 1);
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
