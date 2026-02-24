section "k03_s1_000"{
    Character_BlinkStart(14, 1, (#1), 1);
    Character_BlinkStart(14, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    int var0;
    int var1;
    if ((Parameter_ChkPlayer(6) == 0) || (Parameter_ChkPlayer(6) == 1)){
        var1 = Parameter_GetPl1Param(12);
        switch (var1){
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
        Message_Who(0);
        Message_MsgDisp("主人公", "(Today is my birthday. But...\nI didn't get a present from\nanyone...)");
        Voice_PlayVoice("K0314000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Sis, Sis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yuu-kun?");
        SoundEffect_PlayStream(3, "SS_T_00_109_M00");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(14, "S1_17F", 0);
        Background_Bg_GS2("BG_BH200_CO_1", #1, #1, 0);
        Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
        Screen_WipeIn(2);
        Voice_PlayVoice("K0314000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Ehehe. Are you alone, Sis?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I am.");
        Voice_PlayVoice("K0314000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Can I come over?");
        Message_Who(0);
        Message_MsgDisp("主人公", "I don't mind.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Character_Chara_GS2(14, "NON");
        Character_Chara_GS2(14, "S1_04F", 0);
        var1 = Parameter_GetPl1Param(12);
        switch (var1){
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
        Message_Who(0);
        Message_MsgDisp("主人公", "What's the matter... Yuu-kun?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("K0314000_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "What do you mean.\nIt's your birthday, right!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, you remembered?");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(14, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("K0314000_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Of course!\nThere's no way I'd forget Sis's\nbirthday!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("K0314000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "So surprise!\nIt's a birthday present.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wow... I'm so happy.\nThanks, Yuu-kun.");
        Parameter_AddCh1Param(14, 86, 1);
        }
    else if (Parameter_ChkPlayer(6) == 2){
        var0 = 1;
        }
    else if (Parameter_ChkPlayer(6) == 3){
        var0 = 1;
        }
    else if (Parameter_ChkPlayer(6) == 5){
        var0 = 1;
        }
    else if (Parameter_ChkPlayer(6) == 7){
        var0 = 1;
        }
    if (var0 == 1){
        var1 = Parameter_GetPl1Param(12);
        switch (var1){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(There's a memo on top of my\ndesk....\nWhat is it?)");
        Message_Who(0);
        Message_MsgDisp("　　　", "(\"Dear Sis, Happy Birthday From\nYuu\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, it was my birthday.\nIt's already passed!)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Parameter_InPl1Param(336, #1);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
