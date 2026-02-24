section "i22_pl_000"{
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
    Voice_PlayVoice("I2200000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Yes, this is Instrument Store Nei.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I saw an e-mail about the job\napplications and decided to call...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Voice_PlayVoice("I2200000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Then can I have you come in every\nWednesday and Friday to work?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes.\nI look forward to working with you.");
    Voice_PlayVoice("I2200000_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "Please come in then.\nI'm counting on you.");
    Parameter_InPl1Param(26, 2);
    Parameter_InByParam(2, 51, 1);
    SoundEffect_PlaySE(31, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(So I have work at the instrument\nstore every Wednesday and Friday.\nAlright, I'll do my best!)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
