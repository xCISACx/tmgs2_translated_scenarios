section "b03_m8_010"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0308010_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "If there's anywhere you'd like to\ngo, please don't hesitate to tell\nme.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Let me see...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_ResumeSkinship();
    Voice_PlayVoice("B0308010_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Okay, let's go.");
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 10);
    }
