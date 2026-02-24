section "b50_m3_001"{
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Hikami＊＊｝...)");
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
    Message_MsgDisp("主人公", "(Ah, it's from\n｛Hikami＊＊｝!)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Voice_PlayVoice("FD_03_000_00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... Sorry about before.\nBut I do not want to misunderstand.\nCan we talk about it?");
    Message_Who(0);
    Message_MsgDisp("主人公", "S-Sure...");
    Message_MsgSel("Explain the misunderstanding.", "I want to be friends.");
    switch (Message_TextSelect()){
        case 0:
        Voice_PlayVoice("FD_03_000_00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I see.\nI seems like I have jumped to\nconclusions again.");
        Voice_PlayVoice("FD_03_000_00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I will see you later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm so relieved...\nIt seems like I've cleared up this\nmisunderstanding.)");
        System_GlobalWork(23, 0, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "I have something I want to tell\nyou...\nAre you free at the moment?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B50", "M3", 10);
        Parameter_InCh1Param(3, 556, 1);
        System_GlobalWork(23, 0, 3);
        if (Parameter_GetCh1Param(3, 61) >= 200){
            Parameter_InCh1Param(3, 61, 150);
            }
        else {
            Parameter_AddCh1Param(3, 61, #50);
            }
        if (Parameter_GetCh1Param(3, 60) >= 175){
            Parameter_InCh1Param(3, 60, 150);
            }
        else {
            Parameter_AddCh1Param(3, 60, #25);
            }
        Parameter_AddCh1Param(3, 62, #999);
        break ;
        }
    }
