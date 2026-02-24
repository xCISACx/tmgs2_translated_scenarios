section "h38_m3_000"{
    if (Parameter_GetCh1Param(3, 130) >= 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_01F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 3, "H3803000_C00300");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝,\ncongratulations on making it to the\nInter High School Championships.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nYou came here to cheer me on!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H3803000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, this is all I can do right now.\nI will support y-you.");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("H3803000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If you feel overwhelmed by the\natmosphere here, then I would like\nfor you to look at...\nme.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 6);
        Voice_PlayVoice("H3803000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I mean, you'll think of the school\nwhen you look at me, right?\nAnd when you do, you should run how\nyou usually run.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I feel determined.\nI have to do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
