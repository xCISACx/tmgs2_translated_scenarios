section "k01_g4_001"{
    Character_BlinkStart(13, 1, (#1), 1);
    Character_BlinkStart(13, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(13, 513) != 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Mizushima＊＊｝ is\nhere....\nAh, there she is!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
        Music_PlayBGM(0, "MN_C_13_000_D00", 127, 40);
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("", #1, "K0113000_M00000");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "｛主人公｝.\nHaha, why are you so hurried?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here, a birthday present!\nI wanted to give it to you right\naway.");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("K0113000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Eh, to me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah. Open it!");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "I wonder if ｛Mizushima＊＊｝ is\nhere....\nAh, there she is!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Mizushima＊＊｝!");
        Music_PlayBGM(0, "MN_C_13_000_D00", 127, 40);
        Character_Chara_GS2(13, "G4_01F", 0);
        Voice_PlayVoice("K0113000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "...?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh～... Here's a birthday present...\nWill you accept it?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(13, 2, (#1));
        Voice_PlayVoice("K0113000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "A present, you say? But...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hey, open it!");
        }
    if (Parameter_GetCh1Param(13, 67) == 1){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("K0113000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Amazing... You know what I like.\nI'm glad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, she looks really happy.)");
            }
        else {
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("K0113000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "This is...");
            Message_Who(0);
            Message_MsgDisp("主人公", "I thought that you would like it,\n｛Mizushima＊＊｝.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("K0113000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Yeah... I do.... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(What a relief, it looks like she\nlikes it.)");
            }
        Parameter_AddCh1Param(13, 60, 3);
        }
    else if (Parameter_GetCh1Param(13, 67) == 2){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(13, 2, (#1));
            Voice_PlayVoice("K0113000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Thanks.\nExpect something in return, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She looks relatively happy.)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("K0113000_M00800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh, she looks relatively\nhappy.)");
            }
        Parameter_AddCh1Param(13, 60, 2);
        }
    else if (Parameter_GetCh1Param(13, 67) == 3){
        if (Parameter_GetCh1Param(13, 513) != 1){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("K0113000_M00900", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Uhh, this is...");
            Message_Who(0);
            Message_MsgDisp("主人公", "What?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("K0113000_M01000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Nothing, I'm glad. Thanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, it looks like she wasn't that\nhappy about it.)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("K0113000_M01100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Yeah.... Right.\nI was expecting something else.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Crap!\nIt looks like I gave her something\nshe doesn't like.)");
            }
        Parameter_AddCh1Param(13, 60, 1);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
