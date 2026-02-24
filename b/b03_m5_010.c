section "b03_m5_010"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_ChFace(1, 3, 5);
    Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0305010_E00000", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Wow, there are lots of people\nhere...\nWhat should we do?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_ChFace(1, 0, 10);
    Character_BlinkStart(5, 2, (#1), 2);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0305010_E00100", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Okay then, let's go.");
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M5", 10);
    }
