section "h28_m7_000"{
    if (Parameter_GetCh1Param(7, 130) >= 4){
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's finally time for the Inter\nHigh School Championships!\nIt's like a dream...)");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_17F", 0);
        Voice_PlayVoice("", 7, "H2807000_G00300");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's starting,\n｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝! You came.");
        Character_BlinkStart(7, 3, (#1));
        Voice_PlayVoice("H2807000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Of course.\nI cannot just stand idly by when one\nof my cute students is fighting in\nthe national championship.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2807000_G00500", 7, "H2807000_G00501");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I will be watching you from the\ngrand stand.\n｛主人公｝, put your\nstrenuous effort into it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, I will go now!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I feel determined.\nI'll do my best with all my\nstrength!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
