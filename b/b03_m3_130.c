section "b03_m3_130"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0303130_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "... There are a lot of people.\nI wonder where all of these people\ncame from.");
    Character_Chara_GS2(3, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M3", 130);
    }
