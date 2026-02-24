section "h7g_s1_000"{
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
    Voice_PlayVoice("H8G14000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Heeey, Sis～.");
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
    Voice_PlayVoice("H8G14000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I heard from grandma that you won an\namazing prize in some contest!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah. Isn't that amazing?");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("H8G14000_N00200", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "I heard that the Wedding Dress\nfashion show was good?");
    Message_Who(0);
    Message_MsgDisp("主人公", "No, that wasn't it.\nI submitted a dress for the contest.");
    Character_ChFace(0, 0, 9);
    Voice_PlayVoice("H8G14000_N00300", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "But I heard a rumor that if you wear\na wedding dress before you get\nmarried, you won't be able to get\nmarried.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Ugh.");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("H8G14000_N00400", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Ahaha! It's fine, it's fine!");
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("H8G14000_N00500", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Even if you can't get married, I'll\naccept you...\nS-So, later!");
    Character_Chara_GS2(14, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Yuu-kun! ... He left.");
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
