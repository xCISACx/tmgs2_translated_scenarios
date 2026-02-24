section "t02_m1_210"{
    Screen_WipeIn(2);
    Voice_PlayVoice("", 1, "FD_01_220_00000");
    Message_Who(1);
    Message_MsgDisp("？？？", "｛主人公｝.\nI've finally found you.");
    Character_ChFace(0, 0, 6);
    Character_ChFace(0, 4, 0);
    Character_Chara_GS2(1, "M1_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Saeki＊＊｝!\nWhat are you doing here...?");
    Voice_PlayVoice("FD_01_210_00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "I've been looking for you forever.");
    Message_Who(0);
    Message_MsgDisp("主人公", "For me...");
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
    Still_Pair_Event("EV_01_18", "EV_99_00", 0, 0);
    }
