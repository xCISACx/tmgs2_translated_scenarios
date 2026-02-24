section "b03_m2_010"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0302010_B00000", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Where should we go?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0302010_B00100", #1, "");
    Message_Who(2);
    Message_MsgDisp("Shiba", "Okay.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M2", 10);
    }
