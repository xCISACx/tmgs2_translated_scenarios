section "h38_m5_000"{
    if (Parameter_GetCh1Param(5, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nYou came here to cheer for me!");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3805000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI thought to burn the image of you\nrunning into my brain.");
        Character_BlinkStart(5, 0, (#1));
        Voice_PlayVoice("H3805000_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Are you nervous?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, I seem fine.");
        Character_BlinkStart(5, 2, (#1));
        Voice_PlayVoice("H3805000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, good.\nRun straight for the finish line, as\nif you're gonna leap into my arms,\nokay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, ｛Chris＊＊｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I feel determined!\nI have to do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
