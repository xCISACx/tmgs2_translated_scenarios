section "z32_s1_000"{
    int var0;
    Parameter_GetPl1Param(33);
    Message_Who(0);
    Message_MsgDisp("主人公", "I want to hear the evaluation from\nthe people around me...");
    Character_ChFace(0, 0, 10);
    Voice_PlayVoice("Z3214000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Sis's evaluation? Let me see...");
    Message_CloseMsg(15);
    Character_Chara_GS2(14, "NON");
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Run_Chara_Para();
    Screen_ClearScreen();
    if (System_GlobalWork(0, 1)){
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
        Character_Chara_GS2(14, "S1_04F", 0);
        Character_ChFace(0, 0, 10);
        }
    else {
        Background_Bg_GS2("BG_BH200_CO_0", #1, #1, 0);
        Character_Chara_GS2(14, "S1_17F", 0);
        Character_ChFace(0, 0, 10);
        }
    Screen_WipeIn(2);
    }
