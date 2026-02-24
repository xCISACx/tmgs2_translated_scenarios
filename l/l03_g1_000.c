section "l03_g1_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(10, 315) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder when I should give my\nchocolates...)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("L0310000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You also feel like doing it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(10, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0310000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I'm not gonna lose either.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... She declared war on me.)");
        Parameter_AddCh1Param(10, 315, 1);
        }
    else if (Parameter_GetCh1Param(10, 315) >= 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder when I should give my\nchocolates...)");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(10, "G1_01F", 0);
        Voice_PlayVoice("L0310000_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You also feel like giving it this\nyear?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Toudou＊＊｝...");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0310000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You've got some nerve.\nDon't be crying later.");
        Character_Chara_GS2(10, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Toudou＊＊｝ is so\nforceful...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
