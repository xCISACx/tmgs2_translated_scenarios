section "b03_m2_060"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP200_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302060_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "So, what should we do?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0302060_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Ah, okay.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 60);
    }
