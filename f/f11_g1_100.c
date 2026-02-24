section "f11_g1_100"{
    Character_BlinkStart(10, 1, (#1), 1);
    Character_BlinkStart(10, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(10, 328) == 0){
        Parameter_AddCh1Param(10, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Toudou＊＊｝.");
        Music_PlayBGM(0, "MN_C_10_000_D02", 127, 40);
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("F1110100_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I don't have any business with a guy\nlike you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is she being hit on?\nAs expected, ｛Toudou＊＊｝\nis cool.)");
        }
    else if (Parameter_GetCh1Param(10, 328) == 1){
        Parameter_AddCh1Param(10, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Toudou＊＊｝.");
        Music_PlayBGM(0, "MN_C_10_000_D02", 127, 40);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("F1110100_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "This part is loose.\nIt's dangerous....\nI'll fix it for you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(She's helping out with the class\ndisplay.\nShe's actually really caring towards\nothers.)");
        }
    else if (Parameter_GetCh1Param(10, 328) == 2){
        Parameter_AddCh1Param(10, 328, 1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Toudou＊＊｝.");
        Music_PlayBGM(0, "MN_C_10_000_D02", 127, 40);
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("F1110100_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Don't cry. You're a guy, right?\nI'll find your mother right away.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is she guiding a lost child?\nShe's actually a nice person.)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
