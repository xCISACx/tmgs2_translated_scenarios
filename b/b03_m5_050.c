section "b03_m5_050"{
    Character_Chara_GS2(5, "M5_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0305050_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Now then, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 51);
    }
