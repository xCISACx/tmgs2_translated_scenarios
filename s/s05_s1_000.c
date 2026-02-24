section "s05_s1_000"{
    if (Parameter_GetCh1Param(14, 334) == 0){
        Voice_PlayVoice("S0514000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Sis, Sis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yuu-kun? Wait a minute.");
        SoundEffect_PlayStream(3, "SS_T_00_109_M00");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(14, "S1_17F", 0);
        Background_Bg_GS2("BG_BH200_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0514000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Happy New Year!\nMy best regards this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year.\nYuu-kun is peppy for a new year.\nMy best regards this year, too.");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0514000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Hey, hey, Sis, are you visiting the\nshrine for New Year's Day?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah... Now that you mention it...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("S0514000_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Hey, let's go together.\nI want to eat grilled squid.\nH-Hey, is that okay?");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("S0514000_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Then I will wait at the door, so\ncome soon!");
        Character_Chara_GS2(14, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "Just a minute, Yuu-kun!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, even if I said anything\ndifferent, it wouldn't have\nmattered.)");
        Parameter_AddCh1Param(14, 334, 1);
        }
    else {
        Voice_PlayVoice("S0514000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Sis, open up.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yuu-kun?");
        SoundEffect_PlayStream(3, "SS_T_00_109_M00");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(14, "S1_17F", 0);
        Background_Bg_GS2("BG_BH200_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0514000_N00600", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Happy New Year!\nMy best regards this year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year.\nYuu-kun is peppy for a new year.\nMy best regards this year, too.");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(14, 2, (#1));
        Voice_PlayVoice("S0514000_N00700", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Hey, are you visiting the shrine for\nNew Year's Day?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah... Now that you mention it...");
        Character_BlinkStart(14, 0, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("S0514000_N00800", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Well, don't you want to go together\nthis year?\nI want to eat grilled squid, again.\nIs that okay?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("S0514000_N00900", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Then I will wait at the door, so\ncome soon!");
        Character_Chara_GS2(14, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, even if I said anything\ndifferent, it wouldn't have\nmattered.)");
        Parameter_AddCh1Param(14, 334, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
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
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Run_Kigae(3);
    System_Call_GS2("S06", "S1", 0);
    System_Call_GS2("S07", "S1", 0);
    System_Call_GS2("S08", "PL", 0);
    System_Call_GS2("S09", "S1", 0);
    }
