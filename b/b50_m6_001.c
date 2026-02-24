section "b50_m6_001"{
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Ah, it's ｛Amachi＊＊｝!)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Hello...?");
    Voice_PlayVoice("FD_06_000_00100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Senpai.\nI'm sorry for a little while ago.\nWill you listen for a little?");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay.");
    Message_MsgSel("Resolve the misunderstanding.", "I want us to be friends.");
    switch (Message_TextSelect()){
        case 0:
        Voice_PlayVoice("FD_06_000_00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'll get over it, Senpai!\nI certainly...");
        Voice_PlayVoice("FD_06_000_00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "No, it's nothing!\nWell then, goodbye!");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Good...\nThe misunderstanding was resolved.)");
        System_GlobalWork(23, 0, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "I want to talk about this\nproperly...\nWe should go somewhere.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B50", "M6", 10);
        Parameter_InCh1Param(6, 556, 1);
        System_GlobalWork(23, 0, 6);
        if (Parameter_GetCh1Param(6, 61) >= 200){
            Parameter_InCh1Param(6, 61, 150);
            }
        else {
            Parameter_AddCh1Param(6, 61, #50);
            }
        if (Parameter_GetCh1Param(6, 60) >= 175){
            Parameter_InCh1Param(6, 60, 150);
            }
        else {
            Parameter_AddCh1Param(6, 60, #25);
            }
        Parameter_AddCh1Param(6, 62, #999);
        break ;
        }
    }
