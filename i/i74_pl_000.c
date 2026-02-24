section "i74_pl_000"{
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
    Voice_PlayVoice("H7400000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("President", "Yes, this is the company Contra.");
    Message_Who(0);
    Message_MsgDisp("主人公", "It's ｛主人公姓名｝.\nI'm sorry, but I'd like to quit\nworking at Contra...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Voice_PlayVoice("H7400000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("President", "I see. It can't be helped.\nIf you have the chance, come work\nfor us again.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes.\nThank you very much for everything.");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I quit working as a game tester.)");
    Message_CloseMsg();
    Parameter_InPl1Param(26, 0);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
