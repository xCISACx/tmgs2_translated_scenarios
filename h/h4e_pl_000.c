section "h4e_pl_000"{
    Background_Bg_GS2("BG_BK000_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetBkParam(4, 333) == 0){
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
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nstandard Cheerleading Club item,\n\"Fairy Pom-poms\"!)");
        Parameter_AddPl1Param(21, 10);
        Parameter_AddPl1Param(19, 5);
        }
    else if (Parameter_GetBkParam(4, 333) == 1){
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
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nsecret Cheerleading Club item,\n\"Angel Pom-poms\"!)");
        Parameter_AddPl1Param(21, 20);
        Parameter_AddPl1Param(19, 10);
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
        Message_MsgDisp("　　　", "(｛主人公姓名｝ obtained the\nlegendary Cheerleading Club item,\n\"Goddess Pom-poms\"!)");
        Parameter_AddPl1Param(21, 30);
        Parameter_AddPl1Param(19, 15);
        }
    Message_CloseMsg();
    Parameter_AddBkParam(4, 333, 1);
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
