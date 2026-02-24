section "t02_m7_211"{
    Screen_WipeIn(2);
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("", 7, "FD_07_220_00000");
    Message_Who(7);
    Message_MsgDisp("？？？", "｛主人公｝.\nCongratulations on graduating.");
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_07_14", "EV_99_00", 0, 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝.\nWhy are you here...?");
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("FD_07_220_00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Yes, I... I want to confess to you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Confess?");
    }
