section "o08_m7_000"{
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(7, 130) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Next is ｛Wakaouji＊＊｝.)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("O0807000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The folk dance is the highlight of\ntoday for Sensei.\nPlease cooperate.");
        }
    else if (Parameter_GetCh1Param(7, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Next is ｛Wakaouji＊＊｝.)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("O0807000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei practiced perfectly.\nI'm surprised at my skill.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Next is ｛Wakaouji＊＊｝.)");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_08F", 0);
        Voice_PlayVoice("O0807000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I've been waiting! ...\nNow, dance with me.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Character_Chara_GS2(7, "NON");
    Parameter_AddCh1Param(7, 60, 1);
    Parameter_AddCh1Param(7, 86, 1);
    }
