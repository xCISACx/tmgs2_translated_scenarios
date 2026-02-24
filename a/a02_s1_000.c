section "a02_s1_000"{
    Background_Bg_GS2("BG_HO000_SP_1", #1, #1, 0);
    Screen_WipeIn(2);
    Screen_WipeOut(2);
    System_Wait(60);
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_SP_1", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_SP_1", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_SP_1", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_SP_1", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Voice_PlayVoice("A0214000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("？？？", "Welcome home, Sis!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(14, "S1_17F", 0);
    Environment_PauseME(0);
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Background_Bg_GS2("BG_BH200_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_14_000_D01", 127, 40);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Yuu-kun. I'm home!");
    Voice_PlayVoice("A0214000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Umm, you had your high school\nEntrance Ceremony today, right?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I did.");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(14, 3, (#1));
    Voice_PlayVoice("A0214000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "It'd be great if you made lots of\nfriends!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah.");
    Character_ChFace(0, 0, 0);
    Character_BlinkStart(14, 0, (#1));
    Voice_PlayVoice("A0214000_N00300", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Since you just moved here...");
    Voice_PlayVoice("A0214000_N00400", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I know a few people.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Haha, thanks for worrying about me.");
    Character_ChFace(0, 2, 4);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("A0214000_N00500", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Ah, by the way, if there's something\n- anything - you want to know, just\nask me!");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(14, 3, (#1));
    Voice_PlayVoice("A0214000_N00600", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I've collected lots of info for you,\nSis.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay. Thanks, Yuu-kun.");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(14, 0, (#1));
    Voice_PlayVoice("A0214000_N00700", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Just ask me anything! Later.");
    Music_StopBGM(0, 40);
    Character_Chara_GS2(14, "NON");
    Environment_ResumeME(0);
    Message_CloseMsg();
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Screen_WipeOut(2);
    var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_SP_1", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_SP_1", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_SP_1", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_SP_1", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(All right.\nIf there's something I want to know,\nI'll ask Yuu-kun.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_InCh1Param(14, 514, 1);
    Parameter_AddCh1Param(14, 86, 1);
    }
