section "b50_m1_001"{
    Message_Who(0);
    Message_MsgDisp("主人公", "(I have to have a proper talk with\n｛Saeki＊＊｝...)");
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
    Message_MsgDisp("主人公", "(Ah, it's from\n｛Saeki＊＊｝!)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Voice_PlayVoice("FD_01_000_00200", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Hello, it's me. Hey...\nI did something stupid, didn't I?");
    Message_MsgSel("Explain the misunderstanding.", "I want to be friends.");
    switch (Message_TextSelect()){
        case 0:
        Voice_PlayVoice("FD_01_000_00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I see... Right.\nI have no problems with it.");
        Voice_PlayVoice("FD_01_000_00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'm hanging up.\nI gotta help out at Sangosho. Later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm relieved...\nIt seems like I've cleared up this\nmisunderstanding.)");
        System_GlobalWork(23, 0, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "I have something I want to tell\nyou...\nAre you free at the moment?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B50", "M1", 10);
        Parameter_InCh1Param(1, 556, 1);
        System_GlobalWork(23, 0, 1);
        if (Parameter_GetCh1Param(1, 61) >= 200){
            Parameter_InCh1Param(1, 61, 150);
            }
        else {
            Parameter_AddCh1Param(1, 61, #50);
            }
        if (Parameter_GetCh1Param(1, 60) >= 175){
            Parameter_InCh1Param(1, 60, 150);
            }
        else {
            Parameter_AddCh1Param(1, 60, #25);
            }
        Parameter_AddCh1Param(1, 62, #999);
        break ;
        }
    }
