section "f10_m6_100"{
    Character_BlinkStart(6, 1, (#1), 1);
    Character_BlinkStart(6, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    if (Parameter_GetCh1Param(6, 326) == 0){
        Parameter_AddCh1Param(6, 326, 1);
        Background_Bg_GS2("BG_SC500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Amachi＊＊｝.");
        Character_ChFace(0, 0, 0);
        Character_BlinkStart(6, 2, (#1), 1);
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("F1006100_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Ah, that store?\nI recommend the shortcake, with a\nbit of fresh cream...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He's discussing cake with the\ngirls.\nI wonder if ｛Amachi＊＊｝\nlikes cake?)");
        }
    else if (Parameter_GetCh1Param(6, 326) == 1){
        Parameter_AddCh1Param(6, 326, 2);
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Amachi＊＊｝.");
        Character_BlinkStart(6, 2, (#1), 1);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(6, "M6_01F", 0);
        Voice_PlayVoice("F1006100_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I completely forgot!\nI will definitely bring it before\ntomorrow.\nI am really sorry.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Did he forget something?\n｛Amachi＊＊｝ may be a\nlittle careless.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
