section "l03_g4_000"{
    if (Parameter_GetCh1Param(13, 315) == 0){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_01F", 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
        Voice_PlayVoice("L0313000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Umm...");
        Character_BlinkStart(13, 2, (#1));
        Voice_PlayVoice("L0313000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Sorry, I...\nI was being careful so that I\nwouldn't run into you today...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay...");
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("L0313000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "I'm leaving, okay?");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Mizushima＊＊｝\nalso has chocolate.\nAs expected, she's giving it to\n｛Chris＊＊｝...)");
        Parameter_AddCh1Param(13, 315, 1);
        }
    else if (Parameter_GetCh1Param(13, 315) >= 1){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_01F", 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
        Voice_PlayVoice("L0313000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", ".........");
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("L0313000_M00400", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hey...\nThat chocolate is for Chris-kun,\nisn't it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, this...");
        Character_BlinkStart(13, 0, (#1));
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0313000_M00500", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "No, it's fine! ... Sorry, okay?");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like ｛Mizushima＊＊｝\nalso has chocolate.\nAs expected, she's giving it to\n｛Chris＊＊｝...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
