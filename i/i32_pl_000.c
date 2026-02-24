section "i32_pl_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    Voice_PlayVoice("I3200000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Yes, this is Confectionary Store\nAnastasia.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I saw an e-mail about the job\napplications and decided to call...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Voice_PlayVoice("I3200000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Then can I have you come in every\nTuesday and Thursday to work?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes.\nI look forward to working with you.");
    Parameter_InPl1Param(26, 3);
    Parameter_InByParam(3, 51, 1);
    Voice_PlayVoice("I3200000_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Please come in then.\nI'm counting on you.");
    SoundEffect_PlaySE(31, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(So I have work at the confectionary\nstore every Tuesday and Thursday.\nAlright, I'll do my best!)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
