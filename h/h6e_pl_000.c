section "h6e_pl_000"{
    Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetBkParam(6, 333) == 0){
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
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nstandard Band item, \"Relaxing\nMusical Note\"!)");
        Parameter_AddPl1Param(18, 10);
        Parameter_AddPl1Param(17, 5);
        }
    else if (Parameter_GetBkParam(6, 333) == 1){
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
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nsecret Band item, \"Peaceful\nMelody\"!)");
        Parameter_AddPl1Param(18, 20);
        Parameter_AddPl1Param(17, 10);
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
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nLegendary Band item, \"Love\nHarmony\"!)");
        Parameter_AddPl1Param(18, 30);
        Parameter_AddPl1Param(17, 15);
        }
    Message_CloseMsg();
    Parameter_AddBkParam(6, 333, 1);
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
