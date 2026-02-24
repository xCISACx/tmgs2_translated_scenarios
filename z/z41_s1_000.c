section "z41_s1_000"{
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
    Voice_PlayVoice("Z4114000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Are you there, Sis?");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(14, "S1_17F", 0);
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 1);
    Background_Bg_GS2("BG_BH200_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("Z4114000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", ".........");
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh? What's up, Yuu-kun?");
    Character_ChFace(0, 0, 9);
    Character_BlinkStart(14, 2, (#1));
    Voice_PlayVoice("Z4114000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Have you been ignoring someone,\nrecently?");
    Character_BlinkStart(14, 0, (#1));
    Character_ChFace(0, 3, 0);
    Voice_PlayVoice("Z4114000_N00300", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "If so, I think you better follow-up\nwith them soon.");
    Message_Who(0);
    Message_MsgDisp("主人公", ".........");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    SoundEffect_StopStream(3, 40);
    Screen_ClearScreen();
    }
