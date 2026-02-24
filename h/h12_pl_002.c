section "h12_pl_002"{
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
    Message_MsgDisp("主人公", "My phone is ringing...\nAh, the Club president.");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Voice_PlayVoice("H1200000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "You were slacking from club\nactivities again, so I'm expelling\nyou.\nI'm hanging up now.");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah～... I was careless...");
    Message_Who(0);
    Message_MsgDisp("　　　", "(I was expelled from the Baseball\nClub...)");
    Parameter_InPl1Param(25, 0);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
