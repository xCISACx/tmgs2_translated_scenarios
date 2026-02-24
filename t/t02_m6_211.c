section "t02_m6_211"{
    Still_Pair_Event("EV_06_15", "EV_99_00", 0, 0);
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Screen_WipeIn(2);
    Voice_PlayVoice("", 6, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "｛主人公｝.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
    Still_Pair_Event("EV_06_14", "EV_99_00", 1, 1);
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("FD_06_220_00100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "You're making a \"Why are you here?\"\nface.");
    Voice_PlayVoice("FD_06_220_00200", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Hey, will you listen to what I have\nto say?\nIt won't take long.");
    }
