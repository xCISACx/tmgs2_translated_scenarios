section "h6g_s1_000"{
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
    Voice_PlayVoice("H6G14000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Sis～. Are you here～?");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(14, "S1_17F", 0);
    Background_Bg_GS2("BG_BH200_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Yuu-kun!");
    Voice_PlayVoice("H6G14000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I heard from grandma that you won\nsome sort of amazing prize in music?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Right. Isn't that amazing?");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("H6G14000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Yeah, it's cool that you won a prize\nfor music!!");
    Voice_PlayVoice("H6G14000_N00300", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I also wanna hear you play, Sis.\nCall me to watch a concert or\nsomething!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Sure, of course! Thanks, Yuu-kun.");
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
