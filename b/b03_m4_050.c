section "b03_m4_050"{
    Character_Chara_GS2(4, "M4_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0304050_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Okay, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 51);
    }
