section "b03_m3_050"{
    Character_Chara_GS2(3, "M3_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0303050_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... This is the entrance.\nWell, let us go inside.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M3", 51);
    }
