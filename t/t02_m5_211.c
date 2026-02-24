section "t02_m5_211"{
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_05_17", "EV_99_00", 0, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Chris＊＊｝!\nWhy are you here?");
    Still_StillFace(0, 0, 6);
    Voice_PlayVoice("FD_05_220_00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "... I found you. God is so mean.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("FD_05_220_00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "... Yeah. Let's have a little chat.");
    }
