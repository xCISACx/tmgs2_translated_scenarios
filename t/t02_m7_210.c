section "t02_m7_210"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 7, "FD_07_210_00000");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝.\nCongratulations on graduating.");
    Character_Chara_GS2(7, "M7_17F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
    Voice_PlayVoice("FD_07_210_00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I... I came here to take you away.");
    Message_Who(0);
    Message_MsgDisp("主人公", ".........");
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
    Still_Pair_Event("EV_07_14", "EV_99_00", 0, 0);
    }
