section "z42_s1_005"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Voice_PlayVoice("Z4214000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Are you there, Sis?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, it's open.");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(14, "S1_17F", 0);
    Character_ChFace(0, 0, 8);
    Background_Bg_GS2("BG_BH200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "What's up, Yuu-kun?\nYou look serious.");
    Voice_PlayVoice("Z4214000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "...\nToday,");
    Character_BlinkStart(14, 2, (#1));
    Voice_PlayVoice("Z4214000_N00600", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I met Chris-kun and when I spoke\nabout you, he said, \"Let's not go\nthere.\"");
    Character_ChFace(0, 0, 9);
    Voice_PlayVoice("Z4214000_N00800", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "What happened when you saw each\nother?\nA quarrel?");
    Character_ChFace(0, 2, 2);
    Character_BlinkStart(14, 2, (#1));
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Z4214000_N00900", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "If you fought, maybe you should\napologize.\nHey, maybe you can talk over the\nphone?\n... I think.");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay......");
    Character_BlinkStart(14, 0, (#1));
    Voice_PlayVoice("Z4214000_N01000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Well, that's all....\nDo your best, Sis.");
    Character_Chara_GS2(14, "NON");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(I better call...)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
