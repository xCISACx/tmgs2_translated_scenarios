section "b03_m4_080"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0304080_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "It smells like soil from the Earth\nhere, don't you think?\nWell, in the meantime, let's go in.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 80);
    }
