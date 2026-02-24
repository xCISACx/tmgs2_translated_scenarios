section "q25_m2_000"{
    System_Wait(30);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    if ((Parameter_GetCh1Param(2, 130) <= 2) && (Parameter_GetPl1Param(312) == 2)){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(2, "M2_08F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2602000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I didn't feel so alone with you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q2602000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Nothing. See ya.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Aah, that was surprising...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(2, "M2_08F", 0);
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2602000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "........... My bad.\nIt was inevitable.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Aah, that was surprising...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So that means that person just\nnow...\nCould it have been...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
