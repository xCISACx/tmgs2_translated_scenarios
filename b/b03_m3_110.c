section "b03_m3_110"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP600_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0303110_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "It is okay to turn back..........\nI am joking. Let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M3", 110);
    }
