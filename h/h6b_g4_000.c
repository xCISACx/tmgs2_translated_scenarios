section "h6b_g4_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Alright, Summer camp starts today!\nI have to do my best!");
    if (Parameter_GetCh1Param(13, 513) != 1){
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛主人公｝.\nIt's finally time for camp.");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(13, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H6B13000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Yeah, I'm looking forward to it.\nPlease treat me well this week.\nHahaha.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, same here!");
        }
    else {
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(13, "G4_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
        Voice_PlayVoice("H6B13000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "We'll be together this whole week.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("H6B13000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "... A week.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right.");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("H6B13000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "*sigh*...");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nThis is a little awkward, but I'll\ndo my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(21);
    }
