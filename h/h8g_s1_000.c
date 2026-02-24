section "h8g_s1_000"{
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
    Voice_PlayVoice("H7G14000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Sis～. Are you there～?");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(14, "S1_17F", 0);
    Background_Bg_GS2("BG_BH200_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Yuu-kun.");
    Voice_PlayVoice("H7G14000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I heard from grandma that you were\nawarded at school?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah. Isn't that amazing?");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(14, 2, (#1));
    Voice_PlayVoice("H7G14000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Yeah, it really is amazing.\nYou're an honors student, after all.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm not an honors student or\nanything.\nAll I did was do my very best.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("H7G14000_N00300", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Saying it like that is cool!\nWow, so cool～♪");
    Message_Who(0);
    Message_MsgDisp("主人公", "Haha, thanks!");
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
