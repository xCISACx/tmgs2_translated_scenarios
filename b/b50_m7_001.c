section "b50_m7_001"{
    Message_Who(0);
    Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ seems to have\nmisunderstood something...)");
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
    Message_MsgDisp("主人公", "(Oh, from ｛Wakaouji＊＊｝!)");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Voice_PlayVoice("FD_07_000_00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "It's Wakaouji.\nI apologize for my poor timing a\nlittle while ago.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Umm...)");
    Message_MsgSel("Let's resolve this misunderstanding.", "I want you to be there as a friend.");
    switch (Message_TextSelect()){
        case 0:
        Voice_PlayVoice("FD_07_000_00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Haha... Indeed.\nHowever, you need not be hesitant\nwith Sensei if you are in love.\nPlease remember that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay...");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Good...\nThe misunderstanding seems\nresolved.)");
        System_GlobalWork(23, 0, #1);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, there might be something I want\nto talk about...");
        Voice_PlayVoice("FD_07_000_00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "All right. Over the telephone? Or...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, well, we'll arrange a place to\nmeet.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B50", "M7", 10);
        Parameter_InCh1Param(7, 556, 1);
        System_GlobalWork(23, 0, 7);
        if (Parameter_GetCh1Param(7, 61) >= 200){
            Parameter_InCh1Param(7, 61, 150);
            }
        else {
            Parameter_AddCh1Param(7, 61, #50);
            }
        if (Parameter_GetCh1Param(7, 60) >= 175){
            Parameter_InCh1Param(7, 60, 150);
            }
        else {
            Parameter_AddCh1Param(7, 60, #25);
            }
        Parameter_AddCh1Param(7, 62, #999);
        break ;
        }
    }
