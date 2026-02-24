section "t02_m3_210"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 3, "");
    Message_Who(3);
    Message_MsgDisp("？？？", "｛主人公｝.");
    Character_Chara_GS2(3, "M3_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Hikami＊＊｝...");
    Character_ChFace(0, 2, 2);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("FD_03_210_00100", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "My heart feels like it is going to\nexplode.\nPlease listen to what I have to say.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... Alright.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Background_Bg_GS2("BG_EX150_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    System_Wait(40);
    Still_Pair_Event("EV_03_16", "EV_99_00", 0, 0);
    Environment_StopME(0, 40);
    Message_CloseMsg();
    Message_MessageWindow(1);
    Message_Text_Color(16);
    }
