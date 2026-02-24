section "t02_m4_211"{
    Screen_WipeIn(2);
    Character_BlinkStart(4, 0, (#1), 1);
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_04_15", "EV_99_00", 0, 0);
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("FD_04_220_00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Yo.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh... ｛Hariya＊＊｝!\nWhat's up?");
    }
