section "b03_m1_050"{
    Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0301050_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "Let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 51);
    }
