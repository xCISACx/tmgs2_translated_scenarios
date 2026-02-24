section "t02_m2_211"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 2, "");
    Message_Who(2);
    Message_MsgDisp("？？？", "｛主人公｝.");
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_02_17", "EV_99_00", 0, 0);
    Message_Who(0);
    Message_MsgDisp("主人公", ".. ｛Shiba＊＊｝! What's up?\nWhy are you here...?");
    }
