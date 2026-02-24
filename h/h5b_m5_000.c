section "h5b_m5_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Alright, Summer camp starts today.\nI will enthusiastically do my best!");
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Voice_PlayVoice("H5B05000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hello.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝. Hello.\nIt's finally time for camp.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H5B05000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah. Let's do our best this week.\nTreat me well▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Me too!");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nIt's finally time for camp.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H5B05000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, we're together for this whole\nweek.\nWhat should I do if we become all\nlovey-dovey～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, right.\nLet's do our best at this camp.");
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("H5B05000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow～, I've been swept away\nalready...");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H5B05000_E00400", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Well, it's fine.\nTreat me well,\n｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, let's do our best!");
        }
    else {
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nIt's finally time for camp.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H5B05000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm glad that we'll be together for\nthe whole week～.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H5B05000_E00600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's paint a lot and create lots of\namazing memories, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        }
    Message_CloseMsg();
    Screen_WipeOut(21);
    }
