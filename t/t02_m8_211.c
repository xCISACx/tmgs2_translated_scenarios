section "t02_m8_211"{
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_08_15", "EV_99_00", 0, 0);
    Still_StillFace(0, 0, 1);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Masaki-senpai! Why are you here?");
    Voice_PlayVoice("FD_08_220_00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You too.");
    Still_StillFace(0, 0, 5);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("FD_08_220_00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... So this is my last chance, huh.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("FD_08_220_00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Hey, you got some time?\nI wanna have a chat with you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Okay.");
    }
