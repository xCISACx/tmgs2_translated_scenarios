section "b03_m4_130"{
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0304130_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I'll accompany you to wherever you\nwant to go.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Well...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0304130_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Okay, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M4", 130);
    }
