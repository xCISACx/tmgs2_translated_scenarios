section "t02_m2_210"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 2, "");
    Message_Who(2);
    Message_MsgDisp("？？？", "｛主人公｝.");
    Character_Chara_GS2(2, "M2_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nWhy are you here?");
    Character_ChFace(0, 2, 0);
    Character_BlinkStart(2, 0, (#1), 1);
    Character_ChFace(0, 3, 0);
    Character_ChFace(0, 4, 0);
    Voice_PlayVoice("FD_02_210_00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "...\nCould you give me a little bit of\nyour time?");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Background_Bg_GS2("BG_EX150_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    System_Wait(40);
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    Still_Pair_Event("EV_02_17", "EV_99_00", 0, 0);
    }
