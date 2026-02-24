section "t02_m3_211"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 3, "");
    Message_Who(3);
    Message_MsgDisp("？？？", "｛主人公｝.");
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_03_16", "EV_99_00", 0, 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("FD_03_220_00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "My heart feels like it is going to\nexplode.\nPlease listen to what I have to say.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay.");
    }
