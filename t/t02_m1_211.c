section "t02_m1_211"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 1, "FD_01_220_00000");
    Message_Who(1);
    Message_MsgDisp("？？？", "｛主人公｝.\nI've finally found you.");
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_01_18", "EV_99_00", 0, 0);
    Screen_WipeIn(3);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Saeki＊＊｝!\nWhat are you doing here...?");
    Voice_PlayVoice("FD_01_220_00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I've been looking for you forever.");
    Message_Who(0);
    Message_MsgDisp("主人公", "For me...");
    }
