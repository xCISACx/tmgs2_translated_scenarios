section "b03_m1_010"{
    Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
    Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0301010_A00000", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "So... Where do you wanna go today?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm...");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Character_ChFace(1, 3, 3);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0301010_A00100", #1, "");
    Message_Who(1);
    Message_MsgDisp("Saeki", "We'll do that. Let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M1", 10);
    }
